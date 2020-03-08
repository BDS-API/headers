#pragma once



using namespace Crypto::Hash;

class Hash {

public:

    void update(void const*, unsigned int);
    void getUUID(void);
    Hash(Crypto::Hash::HashType);
    void update(void const*, unsigned int);
    void getUUID(void);
    Hash(Crypto::Hash::HashType);
};
