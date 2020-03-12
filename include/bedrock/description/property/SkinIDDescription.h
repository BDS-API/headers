#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class SkinIDDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~SkinIDDescription();
    virtual void serializeData(Json::Value &)const;
    SkinIDDescription();
};
