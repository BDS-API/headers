#pragma once

#include <utility>
#include <unordered_map>
#include "./ContentIdentity.h"
#include <memory>
#include "./IContentAccessibilityProvider.h"
#include <functional>
#include <string>


class ServerContentKeyProvider : IContentAccessibilityProvider {

public:
    virtual ~ServerContentKeyProvider();
    virtual std::string getContentKey(ContentIdentity const&)const;
//  virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const&); //TODO: incomplete function definition
    virtual void clearTempContentKeys();
    virtual bool canAccess(ContentIdentity const&)const;

    ServerContentKeyProvider();
};
