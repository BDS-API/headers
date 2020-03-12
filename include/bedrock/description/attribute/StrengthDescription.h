#pragma once

#include "../../../json/Value.h"
#include "AttributeDescription.h"


class StrengthDescription : AttributeDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~StrengthDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    StrengthDescription();
};
