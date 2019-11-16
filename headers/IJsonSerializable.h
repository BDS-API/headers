#pragma once

class IJsonSerializable {

    virtual ~IJsonSerializable();
    virtual ~IJsonSerializable();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
}
