__ = str
___ = int
____ = print
_____ = input
______ = "\n"
_______ = str

def qwertyuiop(asdfghjkl):
    zxcvbnm = ""
    
    for mnbvcxz in asdfghjkl:
        poiuytrewq = ___(ord(mnbvcxz))
        lkjhgfdsa = ""
        
        for qazwsxedc in range(7, -1, -1):
            lkjhgfdsa += '1' if ((poiuytrewq >> qazwsxedc) & 1) else '0'
        
        for rfvtgbyhn in lkjhgfdsa:
            if rfvtgbyhn == '1':
                zxcvbnm += _______(ord(mnbvcxz) - ord('A') + 1)
            else:
                zxcvbnm += 'X'
    
    return zxcvbnm

def main():
    yhnujmikol = _____ ("Enter string to encode: ")
    
    plmokn = qwertyuiop(yhnujmikol)
    ____ (f"Encoded: {plmokn}")

if __name__ == "__main__":
    main()