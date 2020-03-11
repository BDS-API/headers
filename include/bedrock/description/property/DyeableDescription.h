#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class DyeableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~DyeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DyeableDescription();
};
