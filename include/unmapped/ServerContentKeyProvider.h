#pragma once

#include <string>
#include <unordered_map>
#include "IContentAccessibilityProvider.h"


class ServerContentKeyProvider : IContentAccessibilityProvider {

public:
    virtual bool canAccess(ContentIdentity const&)const;
    virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const&);
    virtual std::string getContentKey(ContentIdentity const&)const;
    virtual void clearTempContentKeys();
    ~ServerContentKeyProvider();
    ServerContentKeyProvider();
};
