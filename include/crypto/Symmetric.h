#pragma once

#include <string>


namespace Crypto {

    namespace Symmetric {

        class Symmetric {

        public:
//          Symmetric(Crypto::Symmetric::System, Crypto::Symmetric::OperationMode); //TODO: incomplete function definition // ._ZN6Crypto9Symmetric9SymmetricC1ENS0_6SystemENS0_13OperationModeE
            void getBlockSize()const; // ._ZNK6Crypto9Symmetric9Symmetric12getBlockSizeEv
            void init(std::string const&, std::string const&); // ._ZN6Crypto9Symmetric9Symmetric4initERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_
            ~Symmetric(); // ._ZN6Crypto9Symmetric9SymmetricD1Ev
            void decrypt(std::string const&, std::string &); // ._ZN6Crypto9Symmetric9Symmetric7decryptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS7_
            void getKeySize()const; // ._ZNK6Crypto9Symmetric9Symmetric10getKeySizeEv
        };
    }
}
