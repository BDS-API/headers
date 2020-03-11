#pragma once

#include "./AttributeDescription.h"
#include "../../../json/Value.h"


class AttackDescription : AttributeDescription {

public:
    virtual void getJsonName()const;
    virtual ~AttackDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AttackDescription();
};
