#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class GroundOffsetDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~GroundOffsetDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    GroundOffsetDescription();
};
