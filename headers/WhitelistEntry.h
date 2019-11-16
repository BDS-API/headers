#pragma once

class WhitelistEntry : IJsonSerializable {

    virtual ~WhitelistEntry();
    virtual ~WhitelistEntry();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
}
