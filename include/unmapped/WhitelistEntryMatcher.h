#pragma once



using namespace Whitelist;

class WhitelistEntryMatcher {

public:

    WhitelistEntryMatcher(std::string, std::string);
    WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher const&);
    void operator();
    WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher&&);
};
