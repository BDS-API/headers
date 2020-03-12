#pragma once

#include "IContentAccessibilityProvider.h"
#include <string>
#include <unordered_map>
#include "ContentIdentity.h"
#include <functional>
#include <memory>
#include <utility>


class ServerContentKeyProvider : IContentAccessibilityProvider {

public:
    virtual std::string getContentKey(ContentIdentity const&)const;
    virtual void clearTempContentKeys();
    virtual bool canAccess(ContentIdentity const&)const;
//  virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const&); //TODO: incomplete function definition
    ~ServerContentKeyProvider();
    ServerContentKeyProvider();
};
