#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
    // niche wala code mat hata bohot badi hint hai isme
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

char* akasosfoiashca(const char* ajksfhajkfh) {
    char aslkdfjlkas[5][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'K'},
        {'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z'}
    };

    char* qowieuryqwoi = (char*)malloc(1000 * sizeof(char));
    strcpy(qowieuryqwoi, "");
    int first = 1;

    for (int i = 0; i < strlen(ajksfhajkfh); i++) {
        char qwoeiuryqwe = ajksfhajkfh[i];
        if (isalpha(qwoeiuryqwe)) {
            char qowieuryqiwe = toupper(qwoeiuryqwe);
            if (qowieuryqiwe == 'J') {
                qowieuryqiwe = 'I';
            }

            for (int row = 0; row < 5; ++row) {
                for (int col = 0; col < 5; ++col) {
                    if (aslkdfjlkas[row][col] == qowieuryqiwe) {
                        if (!first) {
                            strcat(qowieuryqwoi, "-");
                        }
                        char temp[3];
                        sprintf(temp, "%d%d", row + 1, col + 1);
                        strcat(qowieuryqwoi, temp);
                        first = 0;
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
    char pqowieuryqwe[1000];
    printf("Enter a word to encode with the Grid Coordinate Cipher: ");
    fgets(pqowieuryqwe, sizeof(pqowieuryqwe), stdin);
    
    // Remove newline if present
    pqowieuryqwe[strcspn(pqowieuryqwe, "\n")] = 0;

    char* zmxncvbqwie = akasosfoiashca(pqowieuryqwe);
    printf("Encoded result: %s\n", zmxncvbqwie);

    free(zmxncvbqwie);
    return 0;
}
