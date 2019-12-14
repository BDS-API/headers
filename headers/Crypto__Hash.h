#pragma once

class Crypto::Hash {

public:

    void hash(Crypto::Hash::HashType, std::string const&);
    void generateUUID(void const*, unsigned int, Crypto::Hash::HashType);
    void hash(Crypto::Hash::HashType, std::string const&);
    void generateUUID(void const*, unsigned int, Crypto::Hash::HashType);
};
