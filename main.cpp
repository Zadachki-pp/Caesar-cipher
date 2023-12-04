#include <iostream>
#include "caesar_cipher.h"



int main() {
    std::cout << caesar_cipher::crypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 2) << std::endl;
    std::cout << caesar_cipher::crypt_with_random_insertion("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 2, 666) << std::endl;
    return 0;
}
