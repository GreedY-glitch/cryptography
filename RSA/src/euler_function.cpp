#include "RSA.hpp"


using eight_bytes = unsigned long long;


eight_bytes euler_function(eight_bytes a) 
{
    eight_bytes prime_gcd_counter = 0;
    eight_bytes begin_intr = 1;

    while (begin_intr <= a) 
    {
        /* Chech the both prime */
        if (gcd(a, begin_intr++) == 1) { ++prime_gcd_counter; }
    }
    
    return prime_gcd_counter;
}