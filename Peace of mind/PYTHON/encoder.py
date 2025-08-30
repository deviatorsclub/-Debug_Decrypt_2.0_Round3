def decode_string(mapping, encoded_result):
    decoded_str = ""
    while encoded_result > 0:
        index = encoded_result % 5
        for char, val in mapping.items():
            if val == index:
                decoded_str = char + decoded_str
                break
        encoded_result //= 5
    return decoded_str


if __name__ == "__main__":
    vowel_mapping = {'a': 0, 'e': 1, 'i': 2, 'o': 3, 'u': 4}
    number = int(input())
    decoded_result = decode_string(vowel_mapping, number)
    print(decoded_result)
