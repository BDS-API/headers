#pragma once

#include "../../../json/Value"


class FrictionModifierDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual FrictionModifierDescription::~FrictionModifierDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FrictionModifierDescription(void);
};
