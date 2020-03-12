#pragma once

#include "PropertyDescription.h"


class VariantDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~VariantDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    VariantDescription();
};
