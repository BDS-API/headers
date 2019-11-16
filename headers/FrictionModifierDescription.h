#pragma once

class FrictionModifierDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~FrictionModifierDescription();
    virtual ~FrictionModifierDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
