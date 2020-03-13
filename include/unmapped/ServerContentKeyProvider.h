#pragma once

#include <string>
#include "IContentAccessibilityProvider.h"
#include <unordered_map>


class ServerContentKeyProvider : IContentAccessibilityProvider {

public:
    ~ServerContentKeyProvider(); // _ZN24ServerContentKeyProviderD2Ev
    virtual std::string getContentKey(ContentIdentity const&)const; // _ZNK24ServerContentKeyProvider13getContentKeyB5cxx11ERK15ContentIdentity
    virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const&); // _ZN24ServerContentKeyProvider18setTempContentKeysERKSt13unordered_mapI15ContentIdentityNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S7_EEE
    virtual void clearTempContentKeys(); // _ZN24ServerContentKeyProvider20clearTempContentKeysEv
    virtual bool canAccess(ContentIdentity const&)const; // _ZNK24ServerContentKeyProvider9canAccessERK15ContentIdentity
    ServerContentKeyProvider(); // _ZN24ServerContentKeyProviderC2Ev
};
