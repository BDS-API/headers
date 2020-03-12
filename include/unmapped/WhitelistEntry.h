#pragma once

#include <string>
#include "../mce/UUID.h"
#include "IJsonSerializable.h"
#include "../json/Value.h"


class WhitelistEntry : IJsonSerializable {

public:
    virtual void serialize(Json::Value &);
    ~WhitelistEntry();
    virtual void deserialize(Json::Value &);
    WhitelistEntry(WhitelistEntry &&);
    WhitelistEntry(std::string);
    WhitelistEntry(std::string, mce::UUID, std::string, bool);
    WhitelistEntry(WhitelistEntry const&);
    WhitelistEntry(Json::Value &);
};
