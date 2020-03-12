#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsBabyDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~IsBabyDescription();
    IsBabyDescription();
};
