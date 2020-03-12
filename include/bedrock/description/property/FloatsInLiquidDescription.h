#pragma once

#include "PropertyDescription.h"


class FloatsInLiquidDescription : PropertyDescription {

public:
    ~FloatsInLiquidDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    FloatsInLiquidDescription();
};
