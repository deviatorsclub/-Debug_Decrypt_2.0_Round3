#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>

#define __ string
#define ___ int
#define ____ cout
#define _____ cin
#define ______ endl
#define _______ to_string

using namespace std;

__ qwertyuiop(const __& asdfghjkl) {
    __ zxcvbnm = "";
    
    for(char mnbvcxz : asdfghjkl) {
        ___ poiuytrewq = (___)mnbvcxz;
        __ lkjhgfdsa = "";
        
        for(___ qazwsxedc = 7; qazwsxedc >= 0; qazwsxedc--) {
            lkjhgfdsa += ((poiuytrewq >> qazwsxedc) & 1) ? '1' : '0';
        }
        
        for(char rfvtgbyhn : lkjhgfdsa) {
            if(rfvtgbyhn == '1') {
                zxcvbnm += _______(mnbvcxz - 'A' + 1);
            } else {
                zxcvbnm += 'X';
            }
        }
    }
    
    return zxcvbnm;
}

___ main() {
    __ yhnujmikol;
    ____ << "Enter string to encode: ";
    _____ >> yhnujmikol;
    
    __ plmokn = qwertyuiop(yhnujmikol);
    ____ << "Encoded: " << plmokn << ______;
    
    return 0;
}