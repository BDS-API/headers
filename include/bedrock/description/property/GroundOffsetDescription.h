#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class GroundOffsetDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~GroundOffsetDescription();
    virtual void deserializeData(Json::Value &);
    GroundOffsetDescription();
};
