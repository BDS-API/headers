#pragma once



class ServerContentKeyProvider : IContentAccessibilityProvider {

public:
    virtual ServerContentKeyProvider::~ServerContentKeyProvider()
    virtual void getContentKey(ContentIdentity const&)const;
    virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::string, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::string>>> const&);
    virtual void clearTempContentKeys();
    virtual bool canAccess(ContentIdentity const&)const;

    ServerContentKeyProvider(void);
};
