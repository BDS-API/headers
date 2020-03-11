#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class VariantDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~VariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    VariantDescription();
};
