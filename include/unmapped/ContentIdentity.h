#pragma once

#include <string>


class ContentIdentity {

public:
    static long EMPTY;

    ContentIdentity(mce::UUID const&); // _ZN15ContentIdentityC2ERKN3mce4UUIDE
    void _setValidFlag(); // _ZN15ContentIdentity13_setValidFlagEv
    ContentIdentity(); // _ZN15ContentIdentityC2Ev
    ContentIdentity(ContentIdentity const&); // _ZN15ContentIdentityC2ERKS_
    ContentIdentity(ContentIdentity &&); // _ZN15ContentIdentityC2EOS_
    void getAsUUID()const; // _ZNK15ContentIdentity9getAsUUIDEv
    void setUUID(mce::UUID const&); // _ZN15ContentIdentity7setUUIDERKN3mce4UUIDE
    std::string asString()const; // _ZNK15ContentIdentity8asStringB5cxx11Ev
    bool isValid()const; // _ZNK15ContentIdentity7isValidEv
    void operator==(ContentIdentity const&)const; // _ZNK15ContentIdentityeqERKS_
    void operator!=(ContentIdentity const&)const; // _ZNK15ContentIdentityneERKS_
    void operator<(ContentIdentity const&)const; // _ZNK15ContentIdentityltERKS_
    void fromString(std::string const&); // _ZN15ContentIdentity10fromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
