#pragma once

#include "../../../json/Value"


class AttackDescription : AttributeDescription {

public:
    virtual void getJsonName()const;
    virtual AttackDescription::~AttackDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AttackDescription(void);
};
