#pragma once

#include <string>


namespace Crypto {

    namespace Hash {

        class Hash {

        public:
            void update(void const*, unsigned int); // ._ZN6Crypto4Hash4Hash6updateEPKvj
            ~Hash(); // ._ZN6Crypto4Hash4HashD1Ev
            void getUUID(); // ._ZN6Crypto4Hash4Hash7getUUIDEv
//          Hash(Crypto::Hash::HashType); //TODO: incomplete function definition // ._ZN6Crypto4Hash4HashC1ENS0_8HashTypeE
            std::string final(); // ._ZN6Crypto4Hash4Hash5finalB5cxx11Ev
        };
    }
}
