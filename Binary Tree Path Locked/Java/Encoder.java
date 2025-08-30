package Q3.Java;
import java.util.Scanner;
public class Encoder {
    static String __ = "";
    static int ___ = 0;
    static java.io.PrintStream ____ = System.out;
    static Scanner _____ = new Scanner(System.in);
    static String ______ = "\n";
    
    static String _______(int num) {
        return String.valueOf(num);
    }
    
    static String qwertyuiop(String asdfghjkl) {
        String zxcvbnm = "";
        
        for(char mnbvcxz : asdfghjkl.toCharArray()) {
            int poiuytrewq = (int)mnbvcxz;
            String lkjhgfdsa = "";
            
            for(int qazwsxedc = 7; qazwsxedc >= 0; qazwsxedc--) {
                lkjhgfdsa += ((poiuytrewq >> qazwsxedc) & 1) == 1 ? '1' : '0';
            }
            
            for(char rfvtgbyhn : lkjhgfdsa.toCharArray()) {
                if(rfvtgbyhn == '1') {
                    zxcvbnm += _______(mnbvcxz - 'A' + 1);
                } else {
                    zxcvbnm += 'X';
                }
            }
        }
        
        return zxcvbnm;
    }
    
    public static void main(String[] args) {
        System.out.print("Enter string to encode: ");
        String yhnujmikol = _____.nextLine();
        
        String plmokn = qwertyuiop(yhnujmikol);
        System.out.println("Encoded: " + plmokn);
        
        _____.close();
    }

}
