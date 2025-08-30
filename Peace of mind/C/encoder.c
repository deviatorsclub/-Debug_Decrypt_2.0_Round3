#include <stdio.h>
#include <string.h>

char* decode_string(int encoded_result) {
    static char decoded_str[1000];
    int len = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    while (encoded_result > 0) {
        int index = encoded_result % 5;
        decoded_str[len++] = vowels[index];
        encoded_result /= 5;
    }

    for (int i = 0; i < len / 2; i++) {
        char temp = decoded_str[i];
        decoded_str[i] = decoded_str[len - i - 1];
        decoded_str[len - i - 1] = temp;
    }
    decoded_str[len] = '\0';
    return decoded_str;
}

int main() {
    int number;
    scanf("%d", &number);

    char* result = decode_string(number);
    printf("%s\n", result);

    return 0;
}
