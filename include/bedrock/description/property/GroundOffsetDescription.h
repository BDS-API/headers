#pragma once

#include "PropertyDescription.h"


class GroundOffsetDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~GroundOffsetDescription();
    GroundOffsetDescription();
};
