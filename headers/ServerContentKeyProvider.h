#pragma once

class ServerContentKeyProvider : IContentAccessibilityProvider {

public:
    virtual ~ServerContentKeyProvider();
    virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
    virtual void clearTempContentKeys(void);
    virtual bool canAccess(ContentIdentity const&)const;

    void ServerContentKeyProvider(void);
};
