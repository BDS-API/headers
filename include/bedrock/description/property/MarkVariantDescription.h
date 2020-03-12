#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class MarkVariantDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~MarkVariantDescription();
    MarkVariantDescription();
};
