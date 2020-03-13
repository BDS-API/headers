#pragma once

#include <string>


namespace mce {

    class UUID {

    public:
        UUID(); // _ZN3mce4UUIDC2Ev
        void operator!=(mce::UUID const&)const; // _ZNK3mce4UUIDneERKS0_
        void operator==(mce::UUID const&)const; // _ZNK3mce4UUIDeqERKS0_
        void getMostSignificantBits()const; // _ZNK3mce4UUID22getMostSignificantBitsEv
        void getLeastSignificantBits()const; // _ZNK3mce4UUID23getLeastSignificantBitsEv
        void getHash()const; // _ZNK3mce4UUID7getHashEv
        UUID(unsigned long, unsigned long); // _ZN3mce4UUIDC2Emm
        void operator<(mce::UUID const&)const; // _ZNK3mce4UUIDltERKS0_
        void fromString(std::string const&); // _ZN3mce4UUID10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void seedFromString(std::string const&); // _ZN3mce4UUID14seedFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        std::string asString()const; // _ZNK3mce4UUID8asStringB5cxx11Ev
        bool isEmpty()const; // _ZNK3mce4UUID7isEmptyEv
    };
}
