#pragma once

#include "AttributeDescription.h"


class AttackDescription : AttributeDescription {

public:
    virtual void getJsonName()const;
    ~AttackDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    AttackDescription();
};
