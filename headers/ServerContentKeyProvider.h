#pragma once

class ServerContentKeyProvider : IContentAccessibilityProvider {

    virtual void ~ServerContentKeyProvider();
    virtual void ~ServerContentKeyProvider();
    virtual void _ZNK24ServerContentKeyProvider13getContentKeyB5cxx11ERK15ContentIdentity;
    virtual void _ZNK19IContentKeyProvider22getAlternateContentKeyB5cxx11ERK15ContentIdentity;
    virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<ContentIdentity>, std::equal_to<ContentIdentity>, std::allocator<std::pair<ContentIdentity const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&);
    virtual void clearTempContentKeys(void);
    virtual void canAccess(ContentIdentity const&)const;
}
