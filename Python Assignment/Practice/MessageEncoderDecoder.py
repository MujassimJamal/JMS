import random 

def countChar(msg):
    count = 0 
    for char in msg:
        if char.isalpha():
            count += 1
    return True if count>=3 else False

def encode(msg):
    enMsg = ""
    if (countChar(msg)):
        enMsg = msg[1:] + msg[0]
        for i in range(3):
            enMsg = chr(random.randint(97, 122)) + enMsg + chr(random.randint(97, 122))
    else:
        enMsg = msg[::-1]

    return enMsg

def decode(enMsg):
    decMsg = ""
    if (not countChar(msg)):
        decMsg = enMsg[::-1]
    else:
        decMsg = enMsg[3:-3]
        decMsg = decMsg[-1] + decMsg[:-1]

    return decMsg


msg = input("Enter you message: ")

encodeMsg = encode(msg)
print("Encoding: " + encodeMsg)

decodeMsg = decode(msg)
print("Decoding: " + decodeMsg)
