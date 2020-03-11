#pragma once

#include "../mce/UUID.h"
#include "../json/Value.h"
#include "./IJsonSerializable.h"
#include "./WhitelistEntry.h"
#include <string>


class WhitelistEntry : IJsonSerializable {

public:
    virtual ~WhitelistEntry();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);

    WhitelistEntry(WhitelistEntry const&);
    WhitelistEntry(WhitelistEntry &&);
    WhitelistEntry(Json::Value &);
    WhitelistEntry(std::string, mce::UUID, std::string, bool);
    WhitelistEntry(std::string);
};
