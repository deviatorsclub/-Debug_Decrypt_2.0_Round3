#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define __ char*
#define ___ int
#define ____ printf
#define _____ scanf
#define ______ "\n"
#define _______ itoa_custom

__ itoa_custom(___ num) {
    static char buffer[20];
    sprintf(buffer, "%d", num);
    return buffer;
}

__ qwertyuiop(const char* asdfghjkl) {
    static char zxcvbnm[10000] = "";
    zxcvbnm[0] = '\0';
    ___ result_pos = 0;
    
    for(___ i = 0; i < strlen(asdfghjkl); i++) {
        char mnbvcxz = asdfghjkl[i];
        ___ poiuytrewq = (___)mnbvcxz;
        char lkjhgfdsa[9] = "";
        
        for(___ qazwsxedc = 7; qazwsxedc >= 0; qazwsxedc--) {
            lkjhgfdsa[7 - qazwsxedc] = ((poiuytrewq >> qazwsxedc) & 1) ? '1' : '0';
        }
        lkjhgfdsa[8] = '\0';
        
        for(___ j = 0; j < 8; j++) {
            char rfvtgbyhn = lkjhgfdsa[j];
            if(rfvtgbyhn == '1') {
                __ num_str = _______(mnbvcxz - 'A' + 1);
                strcat(zxcvbnm, num_str);
            } else {
                strcat(zxcvbnm, "X");
            }
        }
    }
    
    return zxcvbnm;
}

___ main() {
    char yhnujmikol[1000];
    ____ ("Enter string to encode: ");
    _____ ("%s", yhnujmikol);
    
    __ plmokn = qwertyuiop(yhnujmikol);
    ____ ("Encoded: %s%s", plmokn, ______);
    
    return 0;
}