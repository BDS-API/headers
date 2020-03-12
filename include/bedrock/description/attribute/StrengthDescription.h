#pragma once

#include "AttributeDescription.h"


class StrengthDescription : AttributeDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~StrengthDescription();
    StrengthDescription();
};
