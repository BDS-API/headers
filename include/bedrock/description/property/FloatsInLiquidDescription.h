#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class FloatsInLiquidDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ~FloatsInLiquidDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    FloatsInLiquidDescription();
};
