#include <iostream>
#include "RSA.hpp"



int main(int argc, char** argv) 
{
    std::cout << "GCD: " << gcd(1000, 500) << std::endl;
    std::cout << "HCF: " << hcf(1000, 500) << std::endl;

    const bool correct = (euler_function(36) == 12);
    if (correct) { std::cout << "Log: All works correct\n"; }
    else {
        std::cout << "Log: Something went wrong\n";
    }

    std::cout << "Compilation ran successfully\n";

    return EXIT_SUCCESS;
}