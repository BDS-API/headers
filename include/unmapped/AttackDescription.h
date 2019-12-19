#pragma once

class AttackDescription : AttributeDescription {

public:
    virtual void getJsonName(void)const;
    virtual AttackDescription::~AttackDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AttackDescription(void);
};
