#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class DyeableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~DyeableDescription();
    DyeableDescription();
};
