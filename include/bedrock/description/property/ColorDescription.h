#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class ColorDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~ColorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ColorDescription();
};
