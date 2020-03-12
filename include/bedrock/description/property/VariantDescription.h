#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class VariantDescription : PropertyDescription {

public:
    ~VariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    VariantDescription();
};
