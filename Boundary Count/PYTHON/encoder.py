MORSE_CODE_MAP = {
    'A': ".-", 'B': "-...", 'C': "-.-.", 'D': "-..", 'E': ".",
    'F': "..-.", 'G': "--.", 'H': "....", 'I': "..", 'J': ".---",
    'K': "-.-", 'L': ".-..", 'M': "--", 'N': "-.", 'O': "---",
    'P': ".--.", 'Q': "--.-", 'R': ".-.", 'S': "...", 'T': "-",
    'U': "..-", 'V': "...-", 'W': ".--", 'X': "-..-", 'Y': "-.--",
    'Z': "--.."
}

def encode(message):
    encoded_message = ""
    for ch in message:
        if ch == ' ':
            continue
        upper_ch = ch.upper()
        if upper_ch in MORSE_CODE_MAP:
            morse = MORSE_CODE_MAP[upper_ch]
            ascii_val = ord(upper_ch)
            encoded_message += morse + upper_ch + str(ascii_val)
    return encoded_message

if __name__ == "__main__":
    user_input = input("Enter a word to encode: ")
    encoded_result = encode(user_input)
    print("Encoded result:", encoded_result)