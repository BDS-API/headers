#pragma once

class Whitelist::WhitelistEntryMatcher {

public:

    void WhitelistEntryMatcher(std::string, std::string);
    void WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher const&);
    void operator()(WhitelistEntry &);
    void WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher&&);
};
