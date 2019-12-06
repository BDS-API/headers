#pragma once

class Whitelist::WhitelistEntryMatcher {

public:

    void WhitelistEntryMatcher(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher const&);
    void operator()(WhitelistEntry &);
    void WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher&&);
};
