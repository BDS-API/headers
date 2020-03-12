#pragma once

#include <string>


namespace Crypto {

    namespace Hash {

        class HMAC {

        public:
//          HMAC(Crypto::Hash::HashType, std::string const&, int); //TODO: incomplete function definition
            ~HMAC();
            void signAndAppend(std::string const&, std::string &, unsigned long);
            void resultSize()const;
        };
    }
}
