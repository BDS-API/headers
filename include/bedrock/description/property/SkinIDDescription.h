#pragma once

#include "PropertyDescription.h"


class SkinIDDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~SkinIDDescription();
    SkinIDDescription();
};
