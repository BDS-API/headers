#pragma once

#include <string>


namespace Crypto {

    namespace Hash {

        class HMAC {

        public:
            void resultSize()const; // ._ZNK6Crypto4Hash4HMAC10resultSizeEv
            void signAndAppend(std::string const&, std::string &, unsigned long); // ._ZN6Crypto4Hash4HMAC13signAndAppendERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS7_m
            ~HMAC(); // ._ZN6Crypto4Hash4HMACD1Ev
//          HMAC(Crypto::Hash::HashType, std::string const&, int); //TODO: incomplete function definition // ._ZN6Crypto4Hash4HMACC1ENS0_8HashTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
        };
    }
}
