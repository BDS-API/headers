#pragma once

#include "PropertyDescription.h"


class IsShearedDescription : PropertyDescription {

public:
    ~IsShearedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    IsShearedDescription();
};
