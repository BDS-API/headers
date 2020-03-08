#pragma once

#include "../../../json/Value"


class FrictionModifierDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual FrictionModifierDescription::~FrictionModifierDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FrictionModifierDescription(void);
};
