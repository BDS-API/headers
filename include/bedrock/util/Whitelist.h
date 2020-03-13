#pragma once

#include <string>
#include "../../unmapped/IJsonSerializable.h"
#include <functional>


class Whitelist : IJsonSerializable {

public:
    class WhitelistEntryMatcher;

    ~Whitelist(); // _ZN9WhitelistD2Ev
    virtual void serialize(Json::Value &); // _ZN9Whitelist9serializeERN4Json5ValueE
    virtual void deserialize(Json::Value &); // _ZN9Whitelist11deserializeERN4Json5ValueE
    Whitelist(std::function<void (void)>); // _ZN9WhitelistC2ESt8functionIFvvEE
    bool isAllowed(mce::UUID const&, std::string const&)const; // _ZNK9Whitelist9isAllowedERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isIgnoringPlayerLimit(mce::UUID const&, std::string const&)const; // _ZNK9Whitelist21isIgnoringPlayerLimitERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clear(); // _ZN9Whitelist5clearEv
    void getEntries()const; // _ZNK9Whitelist10getEntriesEv
    void addEntry(WhitelistEntry const&); // _ZN9Whitelist8addEntryERK14WhitelistEntry
    void removeByName(std::string const&); // _ZN9Whitelist12removeByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tryUpdateEntries(mce::UUID const&, std::string const&, std::string const&); // _ZN9Whitelist16tryUpdateEntriesERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_
    class WhitelistEntryMatcher {

    public:
        WhitelistEntryMatcher(std::string, std::string); // _ZN9Whitelist21WhitelistEntryMatcherC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_
        ~WhitelistEntryMatcher(); // _ZN9Whitelist21WhitelistEntryMatcherD2Ev
        WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher const&); // _ZN9Whitelist21WhitelistEntryMatcherC2ERKS0_
        void operator()(WhitelistEntry &); // _ZN9Whitelist21WhitelistEntryMatcherclER14WhitelistEntry
        WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher &&); // _ZN9Whitelist21WhitelistEntryMatcherC2EOS0_
    };
};
