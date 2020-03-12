#pragma once

#include <string>
#include "../../unmapped/IJsonSerializable.h"
#include "../../json/Value.h"
#include "../../mce/UUID.h"
#include <functional>
#include "../../unmapped/WhitelistEntry.h"


class Whitelist : IJsonSerializable {

public:
    class WhitelistEntryMatcher;

    ~Whitelist();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
    void getEntries()const;
    Whitelist(std::function<void (void)>);
    void clear();
    void tryUpdateEntries(mce::UUID const&, std::string const&, std::string const&);
    bool isAllowed(mce::UUID const&, std::string const&)const;
    void addEntry(WhitelistEntry const&);
    bool isIgnoringPlayerLimit(mce::UUID const&, std::string const&)const;
    void removeByName(std::string const&);
    class WhitelistEntryMatcher {

    public:
        WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher &&);
        void operator()(WhitelistEntry &);
        WhitelistEntryMatcher(std::string, std::string);
        ~WhitelistEntryMatcher();
        WhitelistEntryMatcher(Whitelist::WhitelistEntryMatcher const&);
    };
};
