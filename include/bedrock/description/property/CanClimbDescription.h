#pragma once

#include "PropertyDescription.h"


class CanClimbDescription : PropertyDescription {

public:
    ~CanClimbDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    CanClimbDescription();
};
