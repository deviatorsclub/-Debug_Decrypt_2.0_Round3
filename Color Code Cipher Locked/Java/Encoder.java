import java.util.*;

public class Encoder {
    public static int[] qwertyuiopasdfghjklzxcvbnm(String mnbvcxzlkjhgfdsapoiuytrewq) {
        int[] asdfghjklqwertyuiop = new int[mnbvcxzlkjhgfdsapoiuytrewq.length()];
        
        for(int qwertyasdfgh = 0; qwertyasdfgh < mnbvcxzlkjhgfdsapoiuytrewq.length(); qwertyasdfgh++) {
            char zxcvbnmlkjhgfdsa = mnbvcxzlkjhgfdsapoiuytrewq.charAt(qwertyasdfgh);
            int qazwsxedcrfvtgbyhnujmikolp = zxcvbnmlkjhgfdsa - 'A';
            asdfghjklqwertyuiop[qwertyasdfgh] = qazwsxedcrfvtgbyhnujmikolp;
        }
        
        return asdfghjklqwertyuiop;
    }
    
    public static int[] plmoknjibvhugcyfxtdrzeaswq(int[] yhgtfrdeswaqqazxswedcvfrtgbnhyujm) {
        int[] rfvbgtyhnmjuiklopmqazwsxedc = new int[yhgtfrdeswaqqazxswedcvfrtgbnhyujm.length];
        
        for(int qwertyuiop = 0; qwertyuiop < yhgtfrdeswaqqazxswedcvfrtgbnhyujm.length; qwertyuiop++) {
            rfvbgtyhnmjuiklopmqazwsxedc[qwertyuiop] = yhgtfrdeswaqqazxswedcvfrtgbnhyujm[yhgtfrdeswaqqazxswedcvfrtgbnhyujm.length - 1 - qwertyuiop];
        }
        
        return rfvbgtyhnmjuiklopmqazwsxedc;
    }
    
    public static int[] zaqxswcdevfrbgtnhymjukilop(int[] wqertyuiopasdfghjklzxcvbnm) {
        int[] qscwdvefbrgtnhymjuik = new int[wqertyuiopasdfghjklzxcvbnm.length];
        
        for(int plokimjunhybgtvfrcdxeszwaq = 0; plokimjunhybgtvfrcdxeszwaq < wqertyuiopasdfghjklzxcvbnm.length; plokimjunhybgtvfrcdxeszwaq++) {
            int mnhbgvfcdxsza = wqertyuiopasdfghjklzxcvbnm[plokimjunhybgtvfrcdxeszwaq] * (plokimjunhybgtvfrcdxeszwaq + 1);
            qscwdvefbrgtnhymjuik[plokimjunhybgtvfrcdxeszwaq] = mnhbgvfcdxsza;
        }
        
        return qscwdvefbrgtnhymjuik;
    }
    
    public static void polikujmyhntgbrfvedcwsxzaq() {
        Scanner ____________________________________________ = new Scanner(System.in);
        System.out.print("Enter string to encode: ");
        String qwaszxerdfcvtyghbnujikolpm = ____________________________________________.nextLine();
        
        int[] xswedrftgyhujikolpmnbvcxz = qwertyuiopasdfghjklzxcvbnm(qwaszxerdfcvtyghbnujikolpm);
        int[] cxdseawqrfvbgtyhnujmikol = plmoknjibvhugcyfxtdrzeaswq(xswedrftgyhujikolpmnbvcxz);
        int[] qazxswedcvfrbgtnhyjumkilop = zaqxswcdevfrbgtnhymjukilop(cxdseawqrfvbgtyhnujmikol);
        
        System.out.print("Encoded: ");
        for(int bhgfvcdxszaqwerty = 0; bhgfvcdxszaqwerty < qazxswedcvfrbgtnhyjumkilop.length; bhgfvcdxszaqwerty++) {
            System.out.print(qazxswedcvfrbgtnhyjumkilop[bhgfvcdxszaqwerty]);
            if(bhgfvcdxszaqwerty < qazxswedcvfrbgtnhyjumkilop.length - 1) 
                System.out.print(" ");
        }
        System.out.println();
        
        ____________________________________________.close();
    }
    
    public static void main(String[] args) {
        polikujmyhntgbrfvedcwsxzaq();
    }
}