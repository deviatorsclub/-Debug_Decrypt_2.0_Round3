#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* _____(char* ______) {
    int _______[26] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
        43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101
    };

    char* ________ = (char*)malloc(1000 * sizeof(char));
    strcpy(________, "");

    int i = 0;
    int len = strlen(______);

    while (i < len) {
        int matched = 0;
        for (int L = 3; L >= 1; L--) {
            if (i + L <= len) {
                char temp[4];
                strncpy(temp, ______ + i, L);
                temp[L] = '\0';
                int num = atoi(temp);

                for (int j = 0; j < 26; j++) {
                    if (_______[j] == num) {
                        char c[2] = {(char)('A' + j), '\0'};
                        strcat(________, c);
                        i += L;
                        matched = 1;
                        break;
                    }
                }
                if (matched) break;
            }
        }
        if (!matched) {
            printf("Invalid cipher at position %d\n", i);
            free(________);
            return NULL;
        }
    }

    return ________;
}

int main() {
    char ____________[1000];
    printf("Enter a Prime Number Cipher to decode: ");
    fgets(____________, sizeof(____________), stdin);

    // Remove newline if present
    ____________[strcspn(____________, "\n")] = 0;

    char* _____________ = _____(____________);
    if (_____________ != NULL) {
        printf("Decoded word: %s\n", _____________);
        free(_____________);
    }

    return 0;
}
