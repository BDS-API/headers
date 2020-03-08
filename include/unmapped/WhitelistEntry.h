#pragma once

#include "../mce/UUID"
#include "../json/Value"


class WhitelistEntry : IJsonSerializable {

public:
    virtual WhitelistEntry::~WhitelistEntry()
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);

    WhitelistEntry(WhitelistEntry const&);
    WhitelistEntry(WhitelistEntry&&);
    WhitelistEntry(Json::Value &);
    WhitelistEntry(std::string, mce::UUID, std::string, bool);
    WhitelistEntry(std::string);
};
