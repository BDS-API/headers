#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class FloatsInLiquidDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~FloatsInLiquidDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FloatsInLiquidDescription();
};
