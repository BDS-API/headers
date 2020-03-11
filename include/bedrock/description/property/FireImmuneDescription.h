#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class FireImmuneDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~FireImmuneDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FireImmuneDescription();
};
