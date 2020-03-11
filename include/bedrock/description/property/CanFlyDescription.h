#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class CanFlyDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~CanFlyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CanFlyDescription();
};
