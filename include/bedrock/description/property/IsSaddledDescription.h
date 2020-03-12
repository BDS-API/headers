#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsSaddledDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~IsSaddledDescription();
    IsSaddledDescription();
};
