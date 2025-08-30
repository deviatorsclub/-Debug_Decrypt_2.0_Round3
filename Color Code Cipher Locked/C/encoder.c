#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _________________________________________________________________________ int*
#define _____________________________________________________________ char*
#define ________________________________________________________ int
#define ________________________________________________ printf
#define ____________________________________________ scanf
#define _______________________________________ "\n"
#define _________________________________ malloc
#define ____________________________ strlen
#define _________________________ free

_________________________________________________________________________  qwertyuiopasdfghjklzxcvbnm(_____________________________________________________________ mnbvcxzlkjhgfdsapoiuytrewq, ________________________________________________________ *plmnjhbgvfcdxsza) {
    ________________________________________________________ zxcvbnmlkjhgfdsaqwerty = ____________________________(mnbvcxzlkjhgfdsapoiuytrewq);
    _________________________________________________________________________ asdfghjklqwertyuiop = (________________________________________________________ *)_________________________________(zxcvbnmlkjhgfdsaqwerty * sizeof(________________________________________________________));
    
    for(________________________________________________________ qwertyasdfgh = 0; qwertyasdfgh < zxcvbnmlkjhgfdsaqwerty; qwertyasdfgh++) {
        ________________________________________________________ qazwsxedcrfvtgbyhnujmikolp = mnbvcxzlkjhgfdsapoiuytrewq[qwertyasdfgh] - 'A';
        asdfghjklqwertyuiop[qwertyasdfgh] = qazwsxedcrfvtgbyhnujmikolp;
    }
    
    *plmnjhbgvfcdxsza = zxcvbnmlkjhgfdsaqwerty;
    return asdfghjklqwertyuiop;
}

_________________________________________________________________________ plmoknjibvhugcyfxtdrzeaswq(_________________________________________________________________________ yhgtfrdeswaqqazxswedcvfrtgbnhyujm, ________________________________________________________ mnbvcxzaqwerty) {
    _________________________________________________________________________ rfvbgtyhnmjuiklopmqazwsxedc = (________________________________________________________ *)_________________________________(mnbvcxzaqwerty * sizeof(________________________________________________________));
    
    for(________________________________________________________ qwertyuiop = 0; qwertyuiop < mnbvcxzaqwerty; qwertyuiop++) {
        rfvbgtyhnmjuiklopmqazwsxedc[qwertyuiop] = yhgtfrdeswaqqazxswedcvfrtgbnhyujm[mnbvcxzaqwerty - 1 - qwertyuiop];
    }
    
    return rfvbgtyhnmjuiklopmqazwsxedc;
}

_________________________________________________________________________ zaqxswcdevfrbgtnhymjukilop(_________________________________________________________________________ wqertyuiopasdfghjklzxcvbnm, ________________________________________________________ asdfghjklzxc) {
    _________________________________________________________________________ qscwdvefbrgtnhymjuik = (________________________________________________________ *)_________________________________(asdfghjklzxc * sizeof(________________________________________________________));
    
    for(________________________________________________________ plokimjunhybgtvfrcdxeszwaq = 0; plokimjunhybgtvfrcdxeszwaq < asdfghjklzxc; plokimjunhybgtvfrcdxeszwaq++) {
        ________________________________________________________ mnhbgvfcdxsza = wqertyuiopasdfghjklzxcvbnm[plokimjunhybgtvfrcdxeszwaq] * (plokimjunhybgtvfrcdxeszwaq + 1);
        qscwdvefbrgtnhymjuik[plokimjunhybgtvfrcdxeszwaq] = mnhbgvfcdxsza;
    }
    
    return qscwdvefbrgtnhymjuik;
}

void polikujmyhntgbrfvedcwsxzaq() {
    _____________________________________________________________ qwaszxerdfcvtyghbnujikolpm = (_____________________________________________________________ )_________________________________(100 * sizeof(char));
    ________________________________________________("Enter string to encode: ");
    ____________________________________________("%s", qwaszxerdfcvtyghbnujikolpm);
    
    ________________________________________________________ qwertyuioplength;
    _________________________________________________________________________ xswedrftgyhujikolpmnbvcxz = qwertyuiopasdfghjklzxcvbnm(qwaszxerdfcvtyghbnujikolpm, &qwertyuioplength);
    _________________________________________________________________________ cxdseawqrfvbgtyhnujmikol = plmoknjibvhugcyfxtdrzeaswq(xswedrftgyhujikolpmnbvcxz, qwertyuioplength);
    _________________________________________________________________________ qazxswedcvfrbgtnhyjumkilop = zaqxswcdevfrbgtnhymjukilop(cxdseawqrfvbgtyhnujmikol, qwertyuioplength);
    
    ________________________________________________("Encoded: ");
    for(________________________________________________________ bhgfvcdxszaqwerty = 0; bhgfvcdxszaqwerty < qwertyuioplength; bhgfvcdxszaqwerty++) {
        ________________________________________________("%d", qazxswedcvfrbgtnhyjumkilop[bhgfvcdxszaqwerty]);
        if(bhgfvcdxszaqwerty < qwertyuioplength - 1) 
            ________________________________________________(" ");
    }
    ________________________________________________(_______________________________________);
    
    _________________________(qwaszxerdfcvtyghbnujikolpm);
    _________________________(xswedrftgyhujikolpmnbvcxz);
    _________________________(cxdseawqrfvbgtyhnujmikol);
    _________________________(qazxswedcvfrbgtnhyjumkilop);
}

________________________________________________________ main() {
    polikujmyhntgbrfvedcwsxzaq();
    return 0;
}