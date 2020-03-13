#pragma once

#include <string>


namespace Util {

    class HashString {

    public:
        class HashFunc;

        ~HashString(); // _ZN4Util10HashStringD2Ev
        HashString(Util::HashString const&); // _ZN4Util10HashStringC2ERKS0_
        HashString(); // _ZN4Util10HashStringC2Ev
        HashString(std::string const&); // _ZN4Util10HashStringC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void operator==(Util::HashString const&)const; // _ZNK4Util10HashStringeqERKS0_
        void operator!=(Util::HashString const&)const; // _ZNK4Util10HashStringneERKS0_
        void operator<(Util::HashString const&)const; // _ZNK4Util10HashStringltERKS0_
        std::string getString()const; // _ZNK4Util10HashString9getStringB5cxx11Ev
        class HashFunc {

        public:
            void operator()(Util::HashString const&, Util::HashString const&)const; // _ZNK4Util10HashString8HashFuncclERKS0_S3_
            void operator()(Util::HashString const&)const; // _ZNK4Util10HashString8HashFuncclERKS0_
        };
    };
}
