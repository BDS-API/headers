#pragma once

class WhitelistEntry : IJsonSerializable {

    virtual void ~WhitelistEntry();
    virtual void ~WhitelistEntry();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
}
