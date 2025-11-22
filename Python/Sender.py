import serial

com = 'COM5'
ser = serial.Serial(com, 115200)

ser.write(b'Hello Arduino!')

response = ser.readline()

decResponse = response.decode('utf-8')

ser.close()
print(decResponse)