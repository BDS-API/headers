#pragma once

#include <string>


namespace Crypto {

    namespace Symmetric {

        class Symmetric {

        public:
//          Symmetric(Crypto::Symmetric::System, Crypto::Symmetric::OperationMode); //TODO: incomplete function definition
            void getKeySize()const;
            void getBlockSize()const;
            void init(std::string const&, std::string const&);
            ~Symmetric();
            void decrypt(std::string const&, std::string &);
        };
    }
}
