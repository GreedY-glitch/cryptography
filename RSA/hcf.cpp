#include "RSA.hpp"

using eight_bytes = unsigned long long;

// extern eight_bytes gcd(eight_bytes, eight_bytes);

eight_bytes hcf(eight_bytes a, eight_bytes b)
{
    return (a * b) / gcd(a, b);
}