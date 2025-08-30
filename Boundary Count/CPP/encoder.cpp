#include <iostream>
#include <string>
#include <map>
#include <cctype>

std::map<char, std::string> MORSE_CODE_MAP = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."}
};

std::string encode(const std::string& message) {
    std::string encoded_message = "";
    for (char ch : message) {
        if (ch == ' ') {
            continue;
        }
        char upper_ch = toupper(ch);
        auto it = MORSE_CODE_MAP.find(upper_ch);
        if (it != MORSE_CODE_MAP.end()) {
            std::string morse = it->second;
            int ascii_val = upper_ch;
            encoded_message += morse + upper_ch + std::to_string(ascii_val);
        }
    }
    return encoded_message;
}

int main() {
    std::string user_input;
    std::cout << "Enter a word to encode: ";
    std::getline(std::cin, user_input);
    std::string encoded_result = encode(user_input);
    std::cout << "Encoded result: " << encoded_result << std::endl;
    return 0;
}
