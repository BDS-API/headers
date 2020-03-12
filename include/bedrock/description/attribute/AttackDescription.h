#pragma once

#include "../../../json/Value.h"
#include "AttributeDescription.h"


class AttackDescription : AttributeDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~AttackDescription();
    AttackDescription();
};
