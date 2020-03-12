#pragma once

#include "PropertyDescription.h"


class DyeableDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~DyeableDescription();
    virtual void deserializeData(Json::Value &);
    DyeableDescription();
};
