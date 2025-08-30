#include <iostream>
#include <string>
#include <vector>
#include <cctype>
    niche wala code mat hata bohot badi hint hai isme
  /*
        Grid Representation:
        --------------------
              1   2   3   4   5
        1 |   A   B   C   D   E
        2 |   F   G   H  I/J  K
        3 |   L   M   N   O   P
        4 |   Q   R   S   T   U
        5 |   V   W   X   Y   Z
    */

std::string akasosfoiashca(const std::string& ajksfhajkfh) {
    char aslkdfjlkas[5][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'K'},
        {'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z'}
    };

    std::string qowieuryqwoi = "";
    bool zxcmnvbznmx = true;

    for (char qwoeiuryqwe : ajksfhajkfh) {
        if (isalpha(qwoeiuryqwe)) {
            char qowieuryqiwe = toupper(qwoeiuryqwe);
            if (qowieuryqiwe == 'J') {
                qowieuryqiwe = 'I';
            }

            for (int qweiuryqwe = 0; qweiuryqwe < 5; ++qweiuryqwe) {
                for (int qoiweuryq = 0; qoiweuryq < 5; ++qoiweuryq) {
                    if (aslkdfjlkas[qweiuryqwe][qoiweuryq] == qowieuryqiwe) {
                        if (!zxcmnvbznmx) {
                            qowieuryqwoi += "-";
                        }
                        qowieuryqwoi += std::to_string(qweiuryqwe + 1);
                        qowieuryqwoi += std::to_string(qoiweuryq + 1);
                        zxcmnvbznmx = false;
                        goto next_char;
                    }
                }
            }
        }
        next_char:;
    }
    return qowieuryqwoi;
}

int main() {
    std::string pqowieuryqwe;
    std::cout << "Enter a word to encode with the Grid Coordinate Cipher: ";
    std::getline(std::cin, pqowieuryqwe);

    std::string zmxncvbqwie = akasosfoiashca(pqowieuryqwe);
    std::cout << "Encoded result: " << zmxncvbqwie << std::endl;

    return 0;
}
