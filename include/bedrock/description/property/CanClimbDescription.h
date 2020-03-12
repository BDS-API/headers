#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class CanClimbDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~CanClimbDescription();
    virtual void serializeData(Json::Value &)const;
    CanClimbDescription();
};
