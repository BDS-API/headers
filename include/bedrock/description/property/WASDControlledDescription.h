#pragma once

#include "PropertyDescription.h"


class WASDControlledDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~WASDControlledDescription();
    virtual void deserializeData(Json::Value &);
    WASDControlledDescription();
};
