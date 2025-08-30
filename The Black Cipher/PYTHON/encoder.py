    # niche wala code mat hata bohot badi hint hai isme
  #
  #      Grid Representation:
  #      --------------------
  #            1   2   3   4   5
  #      1 |   A   B   C   D   E
  #      2 |   F   G   H  I/J  K
  #      3 |   L   M   N   O   P
  #      4 |   Q   R   S   T   U
  #      5 |   V   W   X   Y   Z
  #

def akasosfoiashca(ajksfhajkfh):
    aslkdfjlkas = [
        ['A', 'B', 'C', 'D', 'E'],
        ['F', 'G', 'H', 'I', 'K'],
        ['L', 'M', 'N', 'O', 'P'],
        ['Q', 'R', 'S', 'T', 'U'],
        ['V', 'W', 'X', 'Y', 'Z']
    ]

    qowieuryqwoi = ""
    zxcmnvbznmx = True

    for qwoeiuryqwe in ajksfhajkfh:
        if qwoeiuryqwe.isalpha():
            qowieuryqiwe = qwoeiuryqwe.upper()
            if qowieuryqiwe == 'J':
                qowieuryqiwe = 'I'

            for qweiuryqwe in range(5):
                for qoiweuryq in range(5):
                    if aslkdfjlkas[qweiuryqwe][qoiweuryq] == qowieuryqiwe:
                        if not zxcmnvbznmx:
                            qowieuryqwoi += "-"
                        qowieuryqwoi += str(qweiuryqwe + 1)
                        qowieuryqwoi += str(qoiweuryq + 1)
                        zxcmnvbznmx = False
                        break
                else:
                    continue
                break
    return qowieuryqwoi

if __name__ == "__main__":
    pqowieuryqwe = input("Enter a word to encode with the Grid Coordinate Cipher: ")
    
    zmxncvbqwie = akasosfoiashca(pqowieuryqwe)
    print("Encoded result:", zmxncvbqwie)