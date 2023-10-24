import paho.mqtt.client as mqtt
import struct
import string
import random
import time
import colorama
import socket
import os
import json
from colorama import Fore

def subscribe_function(client):
     topic_lst = ['zigbee2mqtt/#','zigbee2mqtt/Tuya_smart_plug','zigbee2mqtt/Tuya_smart_plug/availability']
    #  qos_lst = [0,1,2]
    #  topic = topic_lst[random.randint(0,2)]
    #  qos = qos_lst[random.randint(0,2)]
     for topic in topic_lst:
        client.subscribe(topic,0)
        print(Fore.RED+ "client subscibr topic : " + topic +" with qos: 0")


def unsubscribe_function(client):
     topic_lst = ['test/hello','test/asset','test']
     topic = topic_lst[random.randint(0,2)]
     client.unsubscribe(topic)
     print(Fore.GREEN+"client unsubscirbe topic: "+topic)
     
         
def publish_function(client):
    # while True:
    # payload_type_lst = ['string','int']
    # payload_length_lst=[1,8,16,32,64,128,256,512,1024]
    # qos_lst = [0,1,2]
    # topic_lst = ['test/hello','test/asset','test']
    # payload_type = payload_type_lst[random.randint(0,1)]
    # payload_len = payload_length_lst[random.randint(0,8)]
    # payload = gen_payload(payload_type,payload_len)
    # qos = qos_lst[random.randint(0,2)]
    # topic = topic_lst[random.randint(0,2)]
    topic = 'zigbee2mqtt/Tuya_smart_plug/set'
    dic_payload_on = {"state":"ON"}
    dic_payload_off = {"state":"OFF"}
    dic_payload_child_lock = {"child_lock":"LOCK"}
    dic_payload_child_unlock = {"child_lock":"UNLOCK"}
    payload_on = json.dumps(dic_payload_on)
    payload_off = json.dumps(dic_payload_off)
    payload_child_lock = json.dumps(dic_payload_child_lock)
    payload_child_unlock = json.dumps(dic_payload_child_unlock)
    client.publish(topic,payload_on,0,retain=False)
    print("Switch on")
    time.sleep(3)
    client.publish(topic,payload_off,0,retain=False)
    print("Switch off")
    time.sleep(3)
    client.publish(topic,payload_child_unlock,0,retain=False)
    print("Child lock unlock")
    time.sleep(3)
    client.publish(topic,payload_child_lock,0,retain=False)
    print("Child lock lock")
    time.sleep(3)
    # print(Fore.BLUE+"published message with topic: "+ topic + " payload" +payload_off)
    # time.sleep(1)

def gen_payload(tpe , len):
    if tpe == 'string' :
         payload = randStr(N=len)
    elif tpe == 'int' :
         payload = int('6'*len)
        #  payload = struct.pack(payload_unpack)
    return payload
         
         
    
        
# this function will output string with random length N
def randStr(chars = string.ascii_uppercase + string.digits, N=10):
	return ''.join(random.choice(chars) for _ in range(N))
# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    # print("Connected with result code "+str(rc))
    global flag_connected
    flag_connected = 1


    # Subscribing in on_connect() means that if we lose the connection and
    # reconnect then subscriptions will be renewed.
    # client.subscribe("test/#")

# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):
    print(msg.topic+" "+str(msg.payload))

def on_disconnect(client, userdata, rc):
    global flag_connected
    flag_connected = 0
    if rc != 0:
        # msgFromClient       = "Unexpected Disconnectio"
        # bytesToSend         = str.encode(msgFromClient)
        # serverAddressPort = ("127.0.0.1", 9000)
        # # bufferSize = 1024
        # UDPClientSocket = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
        # UDPClientSocket.sendto(bytesToSend, serverAddressPort)
        os.system('sudo python3 /home/asset/Desktop/work/wireless-deep-fuzzer-zigbee/mqtt_client_server/client.py')
        print("Unexpected disconnection.")

client = mqtt.Client(transport='tcp')
client.reinitialise()
client.username_pw_set('admin','admin')
# client.username_pw_set('flashmq')

# may need bind the client to 10.0.47.1 which is the veth5 ip
# test with local
# client.connect("0.0.0.0", 1883, 60)
# run with fuzzer

client.on_connect = on_connect
client.on_message = on_message
# client.on_disconnect = on_disconnect
client.connect("127.0.0.1", 1883, 60)
# client.connect("localhost", 8883, 60)
subscribe_function(client)
# client.loop_start()
# client.loop_forever()
# subscribe_function(client)
while 1:
     publish_function(client)
    #  on_message(client)
     time.sleep(1)
    # msg_num = random.randint(0,10)
    # # if msg_num==0:
    # #     publish_function(client)
    # #     time.sleep(1)
    # if msg_num ==1:
    #     subscribe_function(client)
    #     time.sleep(3)
    # elif msg_num == 2:
    #     unsubscribe_function(client)
    #     time.sleep(3)
    # else:
    #     publish_function(client)
    #     time.sleep(3)
        # print("-----------------------------------------Something Wrong--------------------------------------------------")

# Blocking call that processes network traffic, dispatches callbacks and
# handles reconnecting.
# Other loop*() functions are available that give a threaded interface and a
# manual interface.
client.loop_forever()

# can change the payload type, length, qos,topic