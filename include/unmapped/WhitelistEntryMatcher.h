#pragma once

#include "./WhitelistEntryMatcher.h"
#include "./WhitelistEntry.h"
#include <string>


namespace Whitelist {

class WhitelistEntryMatcher {

public:

    WhitelistEntryMatcher(std::string, std::string);
    ~WhitelistEntryMatcher();
    WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher const&);
    void operator()(WhitelistEntry &);
    WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher &&);
};

}