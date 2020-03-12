#pragma once

#include "PropertyDescription.h"


class IsBabyDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~IsBabyDescription();
    virtual void getJsonName()const;
    IsBabyDescription();
};
