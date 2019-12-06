#pragma once

class FrictionModifierDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~FrictionModifierDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void FrictionModifierDescription(void);
};
