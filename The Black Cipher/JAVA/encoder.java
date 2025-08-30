import java.util.Scanner;
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


public class encoder {
    public static String akasosfoiashca(String ajksfhajkfh) {
        char[][] aslkdfjlkas = {
            {'A', 'B', 'C', 'D', 'E'},
            {'F', 'G', 'H', 'I', 'K'},
            {'L', 'M', 'N', 'O', 'P'},
            {'Q', 'R', 'S', 'T', 'U'},
            {'V', 'W', 'X', 'Y', 'Z'}
        };

        StringBuilder qowieuryqwoi = new StringBuilder();
        boolean first = true;

        for (char qwoeiuryqwe : ajksfhajkfh.toCharArray()) {
            if (Character.isLetter(qwoeiuryqwe)) {
                char qowieuryqiwe = Character.toUpperCase(qwoeiuryqwe);
                if (qowieuryqiwe == 'J') {
                    qowieuryqiwe = 'I';
                }

                for (int row = 0; row < 5; row++) {
                    for (int col = 0; col < 5; col++) {
                        if (aslkdfjlkas[row][col] == qowieuryqiwe) {
                            if (!first) {
                                qowieuryqwoi.append("-");
                            }
                            qowieuryqwoi.append(row + 1);
                            qowieuryqwoi.append(col + 1);
                            first = false;
                            break;
                        }
                    }
                }
            }
        }
        return qowieuryqwoi.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a word to encode with the Grid Coordinate Cipher: ");
        String input = scanner.nextLine();

        String result = akasosfoiashca(input);
        System.out.println("Encoded result: " + result);

        scanner.close();
    }
}
