#pragma once

#include <string>


namespace Crypto {

    namespace Hash {

        class Hash {

        public:
            void getUUID();
            ~Hash();
//          Hash(Crypto::Hash::HashType); //TODO: incomplete function definition
            void update(void const*, unsigned int);
            std::string final();
        };
    }
}
