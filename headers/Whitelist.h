#pragma once

class Whitelist : IJsonSerializable {

    virtual void ~Whitelist();
    virtual void ~Whitelist();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
}
