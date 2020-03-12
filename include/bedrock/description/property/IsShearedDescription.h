#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsShearedDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~IsShearedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    IsShearedDescription();
};
