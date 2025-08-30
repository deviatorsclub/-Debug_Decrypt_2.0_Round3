import java.util.*;

public class Main {
    public static String decodeString(Map<Character, Integer> mapping, int encodedResult) {
        String decodedStr = "";
        while (encodedResult > 0) {
            int index = encodedResult % 5;
            for (Map.Entry<Character, Integer> pair : mapping.entrySet()) {
                if (pair.getValue() == index) {
                    decodedStr = pair.getKey() + decodedStr;
                    break;
                }
            }
            encodedResult /= 5;
        }
        return decodedStr;
    }

    public static void main(String[] args) {
        Map<Character, Integer> vowelMapping = new HashMap<>();
        vowelMapping.put('a', 0);
        vowelMapping.put('e', 1);
        vowelMapping.put('i', 2);
        vowelMapping.put('o', 3);
        vowelMapping.put('u', 4);

        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();

        String decodedResult = decodeString(vowelMapping, number);
        System.out.println(decodedResult);
    }
}
