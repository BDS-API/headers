#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class MarkVariantDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~MarkVariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MarkVariantDescription();
};
