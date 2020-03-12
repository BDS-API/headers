#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class FireImmuneDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~FireImmuneDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    FireImmuneDescription();
};
