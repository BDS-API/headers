#pragma once

class IJsonSerializable {

    virtual void IJsonSerializable::~IJsonSerializable();
    virtual void IJsonSerializable::~IJsonSerializable();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);
}
