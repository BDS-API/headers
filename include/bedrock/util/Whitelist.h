#pragma once

#include "../../mce/UUID"
#include "../../unmapped/WhitelistEntry"
#include "../../unmapped/IJsonSerializable"
#include "../../json/Value"


class Whitelist : IJsonSerializable {

public:
    virtual Whitelist::~Whitelist()
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);

    Whitelist(std::function<void ()(void)>);
    bool isAllowed(mce::UUID const&, std::string const&)const;
    bool isIgnoringPlayerLimit(mce::UUID const&, std::string const&)const;
    void clear();
    void getEntries()const;
    void addEntry(WhitelistEntry const&);
    void removeByName(std::string const&);
    void tryUpdateEntries(mce::UUID const&, std::string const&, std::string const&);
};
