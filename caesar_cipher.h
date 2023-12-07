#include "string"


namespace caesar_cipher {
    std::string crypt(const std::string& text, long key);
    std::string decrypt(const std::string& text, long key);
    std::string crypt_with_random_insertion(const std::string& text, unsigned key, unsigned seed);
    std::string decrypt_with_random_insertion(const std::string& text, unsigned key, unsigned seed);
}