#pragma once

#include <string>
#include "../../unmapped/IJsonSerializable.h"
#include <functional>


class Whitelist : IJsonSerializable {

public:
    class WhitelistEntryMatcher;

    ~Whitelist();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
    Whitelist(std::function<void (void)>);
    void removeByName(std::string const&);
    bool isIgnoringPlayerLimit(mce::UUID const&, std::string const&)const;
    void addEntry(WhitelistEntry const&);
    void tryUpdateEntries(mce::UUID const&, std::string const&, std::string const&);
    void getEntries()const;
    void clear();
    bool isAllowed(mce::UUID const&, std::string const&)const;
    class WhitelistEntryMatcher {

    public:
        WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher const&);
        void operator()(WhitelistEntry &);
        WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher &&);
        WhitelistEntryMatcher(std::string, std::string);
        ~WhitelistEntryMatcher();
    };
};
