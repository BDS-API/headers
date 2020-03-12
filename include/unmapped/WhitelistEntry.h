#pragma once

#include <string>
#include "IJsonSerializable.h"
#include "../mce/UUID.h"


class WhitelistEntry : IJsonSerializable {

public:
    ~WhitelistEntry();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
    WhitelistEntry(WhitelistEntry const&);
    WhitelistEntry(Json::Value &);
    WhitelistEntry(std::string, mce::UUID, std::string, bool);
    WhitelistEntry(std::string);
    WhitelistEntry(WhitelistEntry &&);
};
