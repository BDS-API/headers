#pragma once

#include "../../../json/Value"


class FloatsInLiquidDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    FloatsInLiquidDescription::~FloatsInLiquidDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FloatsInLiquidDescription(void);
};
