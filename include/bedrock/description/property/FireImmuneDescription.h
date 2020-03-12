#pragma once

#include "PropertyDescription.h"


class FireImmuneDescription : PropertyDescription {

public:
    ~FireImmuneDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    FireImmuneDescription();
};
