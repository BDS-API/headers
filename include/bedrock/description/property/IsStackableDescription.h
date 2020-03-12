#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsStackableDescription : PropertyDescription {

public:
    ~IsStackableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    IsStackableDescription();
};
