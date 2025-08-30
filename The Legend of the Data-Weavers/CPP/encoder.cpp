#include <iostream>
#include <string>
#include <vector>
using namespace std;

using __ = std::string;
using ___ = int;
using ____ = std::vector<___>;

__ _(const __& ____) {
    vector<int> primes = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
        43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101
    };

    __ result = "";
    ___ i = 0;

    while (i < ____.size()) {
        bool matched = false;
        for (int L = 3; L >= 1; --L) {
            if (i + L <= ____.size()) {
                ___ num = stoi(____.substr(i, L));
                for (___ j = 0; j < primes.size(); ++j) {
                    if (primes[j] == num) {
                        result += (char)('A' + j);
                        i += L;
                        matched = true;
                        break;
                    }
                }
                if (matched) break;
            }
        }
        if (!matched) {
            throw runtime_error("Invalid cipher at position " + to_string(i));
        }
    }

    return result;
}

___ main() {
    __ input;
    cout << "Enter a Prime Number Cipher to decode: ";
    getline(cin, input);

    __ output = _(input);
    cout << "Decoded word: " << output << endl;

    return 0;
}
