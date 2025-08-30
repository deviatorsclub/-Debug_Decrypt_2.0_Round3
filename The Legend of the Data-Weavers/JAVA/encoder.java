import java.util.Scanner;

public class decoder {
    public static String _____(String ______) {
        int[] _______ = {
            2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
            43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101
        };

        StringBuilder ________ = new StringBuilder();
        int ___ = 0;

        while (___ < ______.length()) {
            boolean ____ = false;
            for (int __ = 3; __ >= 1; __--) { 
                if (___ + __ <= ______.length()) {
                    int _________ = Integer.parseInt(______.substring(___, ___ + __));
                    for (int i = 0; i < _______.length; i++) {
                        if (_______[i] == _________) {
                            ________.append((char) ('A' + i));
                            ___ += __;
                            ____ = true;
                            break;
                        }
                    }
                    if (____) break;
                }
            }
            if (!____) {
                throw new IllegalArgumentException("Invalid cipher at position " + ___);
            }
        }

        return ________.toString();
    }

    public static void main(String[] args) {
        Scanner ____________ = new Scanner(System.in);
        System.out.print("Enter a Prime Number Cipher to decode: ");
        String __________ = ____________.nextLine();
        String ___________ = _____(__________);
        System.out.println("Decoded word: " + ___________);
        ____________.close();
    }
}
