#include <type_traits>


using eight_bytes = unsigned long long;


static eight_bytes min(eight_bytes a, eight_bytes b) {
    return (a >= b) ? a : b;
}


eight_bytes gcd(eight_bytes a, eight_bytes b) {
    eight_bytes res = min(a, b);

    while (res-- > 0) {
        if (a % res == 0 && b % res == 0)
            break;
    } 

    return res;   
}