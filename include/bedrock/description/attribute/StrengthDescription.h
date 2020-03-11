#pragma once

#include "./AttributeDescription.h"
#include "../../../json/Value.h"


class StrengthDescription : AttributeDescription {

public:
    virtual void getJsonName()const;
    virtual ~StrengthDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    StrengthDescription();
};
