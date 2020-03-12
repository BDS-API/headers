#pragma once

#include "PropertyDescription.h"


class ColorDescription : PropertyDescription {

public:
    ~ColorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ColorDescription();
};
