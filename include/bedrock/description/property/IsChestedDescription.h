#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsChestedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~IsChestedDescription();
    virtual void serializeData(Json::Value &)const;
    IsChestedDescription();
};
