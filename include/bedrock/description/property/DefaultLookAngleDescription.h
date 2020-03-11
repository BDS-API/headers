#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class DefaultLookAngleDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~DefaultLookAngleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DefaultLookAngleDescription();
};
