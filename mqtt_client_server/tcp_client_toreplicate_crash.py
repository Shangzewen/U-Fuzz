import socket
import scapy.all as scapy
import time
from binascii import unhexlify
host = "10.13.210.82"
port = 1884                  # The same port as used by the server
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((host, port))
s.sendall(unhexlify('302c000a746573742f68656c6c6f37324a51554f454d333049515134314c32373145554d5949545448424b514559'))
time.sleep(1)
s.sendall(unhexlify('308c08000a746573742f617373657444584b32534d545443594a555151465152374f58393041394b3431523439485237574f39584d555145585a39533644443257494a395a57475a4c41314952514c434d444f4833554934525a56524f385931563734554e4853535434484933585a545a5131394c4f305348315847383752533333384759555a4a3936384d514255313842304e365a50575553544e51375a345853473738554f53434544594a30423742393754325a51383150373447374c354e415149354748574a52335a534957584341474f3430414e4f55394844524d4c4d4d434d39595a30525531585a42454e565544375a38375855424b3436354f3437554145463144574f4e33434d50494746434335364a4556515850393753534147324756374855534e424939593251394145474957414d474d535652575347305a454d514b565856503133504454544b424a36353643584936554b44484e565538454f575a5746554c564a544c3646304e4b57485938585731494431455837354d5641334a584b5a454f56394555434f4d31344a3837363945425738414b314d584432393653364d394e584b314a504e5347504d4f3158334c524e474e314b37445152525647534c58304f5645364b47364f59554e5a514b4d344f41564d47373958494e4443484854364f304236553659574e574446494559445659593051354a4b4233365935503531384b453439444857304c51334a34524f5a554142575656473338594349385731324247463742444953434a373843544d50524b44314f43384f4e304a4b553144564e56375951433230414945364e3138384c594f564a5a4632455230565635363545394e44385349425a4f564e4648384d444c4b504f4958324b44444e333559345437394837514b43424c4c544d42594351575943465135313153414f4750464651424c4f4c4c554c43444c4e5352383756584a31324b365748414d4452515642494c35374d454f47354d4b353645374f544842534d304641324e4d58344b334b4b4d4d315a303853344157564555464e32544c42585a44315730584c42354737454b475536324433464f554e574d494e4634334343365a415543514d4956373434324f5a534e3453574257534f43383731345035424d34543959393336363256345358354645314b503254484554303432364251304c393159355737384c4c3641494e53545036555954564c35584538364b575337575042454941574d5a474638494343454b33413630375a354948455441574f5145464c4f334739443450545557325645465741594c4a4c5733334650475845554c445a435353484e334f4f504d514b3659433848314532333754494e443849534e32343357484d423459504e5744414f3947354a4a4658424d503851355653444857475037435a3349465a564a4739'))
# 308c08000a746573742f617373657444584b32534d545443594a555151465152374f58393041394b3431523439485237574f39584d555145585a39533644443257494a395a57475a4c41314952514c434d444f4833554934525a56524f385931563734554e4853535434484933585a545a5131394c4f305348315847383752533333384759555a4a3936384d514255313842304e365a50575553544e51375a345853473738554f53434544594a30423742393754325a51383150373447374c354e415149354748574a52335a534957584341474f3430414e4f55394844524d4c4d4d434d39595a30525531585a42454e565544375a38375855424b3436354f3437554145463144574f4e33434d50494746434335364a4556515850393753534147324756374855534e424939593251394145474957414d474d535652575347305a454d514b565856503133504454544b424a36353643584936554b44484e565538454f575a5746554c564a544c3646304e4b57485938585731494431455837354d5641334a584b5a454f56394555434f4d31344a3837363945425738414b314d584432393653364d394e584b314a504e5347504d4f3158334c524e474e314b37445152525647534c58304f5645364b47364f59554e5a514b4d344f41564d47373958494e4443484854364f304236553659574e574446494559445659593051354a4b4233365935503531384b453439444857304c51334a34524f5a554142575656473338594349385731324247463742444953434a373843544d50524b44314f43384f4e304a4b553144564e56375951433230414945364e3138384c594f564a5a4632455230565635363545394e44385349425a4f564e4648384d444c4b504f4958324b44444e333559345437394837514b43424c4c544d42594351575943465135313153414f4750464651424c4f4c4c554c43444c4e5352383756584a31324b365748414d4452515642494c35374d454f47354d4b353645374f544842534d304641324e4d58344b334b4b4d4d315a303853344157564555464e32544c42585a44315730584c42354737454b475536324433464f554e574d494e4634334343365a415543514d4956373434324f5a534e3453574257534f43383731345035424d34543959393336363256345358354645314b503254484554303432364251304c393159355737384c4c3641494e53545036555954564c35584538364b575337575042454941574d5a474638494343454b33413630375a354948455441574f5145464c4f334739443450545557325645465741594c4a4c5733334650475845554c445a435353484e334f4f504d514b3659433848314532333754494e443849534e32343357484d423459504e5744414f3947354a4a4658424d503851355653444857475037435a3349465a564a4739
# s.sendall(unhexlify('57cb01000a746573742f68656c6c6f375849394b37535231575a495946445654444d5a5753484e4c31373439364e49573741514c5637503755385a32444136505a4c4334324642394a425a38555434505158434c3655424d4e4e3643525247484e354a5754425a51363759385a395a43584a4355374243354c5a5142574a4757364850424d3846434c383038454935'))
data = s.recv(1024)
s.close()
print('Received', repr(data))