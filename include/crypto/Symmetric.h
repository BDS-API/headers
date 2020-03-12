#pragma once

#include <string>


namespace Crypto {

    namespace Symmetric {

        class Symmetric {

        public:
            void decrypt(std::string const&, std::string &);
            void getBlockSize()const;
            void getKeySize()const;
//          Symmetric(Crypto::Symmetric::System, Crypto::Symmetric::OperationMode); //TODO: incomplete function definition
            void init(std::string const&, std::string const&);
            ~Symmetric();
        };
    }
}
