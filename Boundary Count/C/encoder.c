#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* get_morse_code(char ch) {
    switch(ch) {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: return "";
    }
}

char* encode(const char* message) {
    char* encoded_message = (char*)malloc(10000 * sizeof(char));
    strcpy(encoded_message, "");
    
    for (int i = 0; i < strlen(message); i++) {
        char ch = message[i];
        if (ch == ' ') {
            continue;
        }
        char upper_ch = toupper(ch);
        char* morse = get_morse_code(upper_ch);
        if (strlen(morse) > 0) {
            int ascii_val = upper_ch;
            strcat(encoded_message, morse);
            char temp[2] = {upper_ch, '\0'};
            strcat(encoded_message, temp);
            char ascii_str[10];
            sprintf(ascii_str, "%d", ascii_val);
            strcat(encoded_message, ascii_str);
        }
    }
    return encoded_message;
}

int main() {
    char user_input[1000];
    printf("Enter a word to encode: ");
    fgets(user_input, sizeof(user_input), stdin);
    
    // Remove newline if present
    user_input[strcspn(user_input, "\n")] = 0;
    
    char* encoded_result = encode(user_input);
    printf("Encoded result: %s\n", encoded_result);
    
    free(encoded_result);
    return 0;
}