#pragma once

class Whitelist : IJsonSerializable {

    virtual ~Whitelist();
    virtual ~Whitelist();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
}
