#pragma once

#include "PropertyDescription.h"


class IsChestedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~IsChestedDescription();
    IsChestedDescription();
};
