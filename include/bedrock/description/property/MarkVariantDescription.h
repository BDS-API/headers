#pragma once

#include "PropertyDescription.h"


class MarkVariantDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~MarkVariantDescription();
    virtual void deserializeData(Json::Value &);
    MarkVariantDescription();
};
