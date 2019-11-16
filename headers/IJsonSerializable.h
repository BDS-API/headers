#pragma once

class IJsonSerializable {

    virtual void ~IJsonSerializable();
    virtual void ~IJsonSerializable();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
}
