#pragma once

#include "PropertyDescription.h"


class FrictionModifierDescription : PropertyDescription {

public:
    ~FrictionModifierDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    FrictionModifierDescription();
};
