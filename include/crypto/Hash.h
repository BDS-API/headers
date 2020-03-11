#pragma once

#include <string>


namespace Crypto::Hash {

class Hash {

public:

//  void update(void const*, unsigned int); //TODO: incomplete function definition
    ~Hash();
    void getUUID();
//  Hash(Crypto::Hash::HashType); //TODO: incomplete function definition
    std::string final();
//  void update(void const*, unsigned int); //TODO: incomplete function definition
    ~Hash();
    void getUUID();
//  Hash(Crypto::Hash::HashType); //TODO: incomplete function definition
    std::string final();
};

}