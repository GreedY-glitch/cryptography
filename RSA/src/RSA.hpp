#pragma once


#ifndef RSA
#define RSA

#include "rsa.cpp"
#include "gcd.cpp"
#include "euler_function.cpp"
#include "hcf.cpp"


using eight_bytes = unsigned long long;

extern eight_bytes gcd(eight_bytes, eight_bytes);
extern eight_bytes hcf(eight_bytes, eight_bytes);

// rsa();

extern eight_bytes euler_function(eight_bytes);


#endif // RSA