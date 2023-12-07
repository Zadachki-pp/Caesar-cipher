#include <iostream>
#include <string>
#include <fstream>

#include "caesar_cipher.h"


const int SEED = 666;


int main() {
    std::string input_text;
    int key;
    std::string result;
    char input_variant;

    std::ifstream in("input.txt");
    std::getline(in, input_text);


    std::cout << "Key: ";
    std::cin >> key;

    std::cout << "Crypt(C)/Decrypt(D): ";
    std::cin >> input_variant;


    if (input_variant == 'C') {
        result = caesar_cipher::crypt_with_random_insertion(input_text, key, SEED);
    } else {
        result = caesar_cipher::decrypt_with_random_insertion(input_text, key, SEED);
    }

    std::ofstream out("output.txt");

    out << result << std::endl;

    return 0;
}
