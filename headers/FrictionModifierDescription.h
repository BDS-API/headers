#pragma once

class FrictionModifierDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void FrictionModifierDescription::~FrictionModifierDescription();
    virtual void FrictionModifierDescription::~FrictionModifierDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
