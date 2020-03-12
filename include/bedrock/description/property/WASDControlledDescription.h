#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class WASDControlledDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~WASDControlledDescription();
    WASDControlledDescription();
};
