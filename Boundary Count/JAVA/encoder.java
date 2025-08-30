import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class encoder {
    private static Map<Character, String> MORSE_CODE_MAP = new HashMap<Character, String>() {{
        put('A', ".-"); put('B', "-..."); put('C', "-.-."); put('D', "-.."); put('E', ".");
        put('F', "..-."); put('G', "--."); put('H', "...."); put('I', ".."); put('J', ".---");
        put('K', "-.-"); put('L', ".-.."); put('M', "--"); put('N', "-."); put('O', "---");
        put('P', ".--."); put('Q', "--.-"); put('R', ".-."); put('S', "..."); put('T', "-");
        put('U', "..-"); put('V', "...-"); put('W', ".--"); put('X', "-..-"); put('Y', "-.--");
        put('Z', "--..");
    }};

    public static String encode(String message) {
        String encoded_message = "";
        for (char ch : message.toCharArray()) {
            if (ch == ' ') {
                continue;
            }
            char upper_ch = Character.toUpperCase(ch);
            if (MORSE_CODE_MAP.containsKey(upper_ch)) {
                String morse = MORSE_CODE_MAP.get(upper_ch);
                int ascii_val = upper_ch;
                encoded_message += morse + upper_ch + String.valueOf(ascii_val);
            }
        }
        return encoded_message;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a word to encode: ");
        String user_input = scanner.nextLine();
        String encoded_result = encode(user_input);
        System.out.println("Encoded result: " + encoded_result);
        scanner.close();
    }
}