#pragma once

#include "../mce/UUID.h"
#include "IJsonSerializable.h"
#include <string>


class WhitelistEntry : IJsonSerializable {

public:
    ~WhitelistEntry(); // _ZN14WhitelistEntryD2Ev
    virtual void serialize(Json::Value &); // _ZN14WhitelistEntry9serializeERN4Json5ValueE
    virtual void deserialize(Json::Value &); // _ZN14WhitelistEntry11deserializeERN4Json5ValueE
    WhitelistEntry(WhitelistEntry const&); // _ZN14WhitelistEntryC2ERKS_
    WhitelistEntry(WhitelistEntry &&); // _ZN14WhitelistEntryC2EOS_
    WhitelistEntry(Json::Value &); // _ZN14WhitelistEntryC2ERN4Json5ValueE
    WhitelistEntry(std::string, mce::UUID, std::string, bool); // _ZN14WhitelistEntryC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN3mce4UUIDES5_b
    WhitelistEntry(std::string); // _ZN14WhitelistEntryC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
