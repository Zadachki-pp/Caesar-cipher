//
// Created by lev145 on 04.12.23.
//

#include <string>
#include <random>

#include "caesar_cipher.h"


namespace caesar_cipher {
    const std::string DICTIONARY = " .?!,;:-ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::string crypt(const std::string& text, unsigned key) {
        std::string result;

        for (auto i: text) {
            auto new_index = (DICTIONARY.find(i) + key) % DICTIONARY.length();
            result += DICTIONARY[new_index];
        }

        return result;
    }

    std::string crypt_with_random_insertion(const std::string& text, unsigned key, unsigned seed) {
        std::string result;

        std::random_device random_device;
        std::mt19937 generator(random_device());
        generator.seed(seed);
        std::uniform_int_distribution<> distribution(0, DICTIONARY.length() - 1);

        for (auto i: text) {
            if (distribution(generator) % 2 == 0) {
                result += DICTIONARY[distribution(generator)];
            }

            auto new_index = (DICTIONARY.find(i) + key) % DICTIONARY.length();
            result += DICTIONARY[new_index];
        }

        return result;
    }
}