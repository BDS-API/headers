#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsStunnedDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~IsStunnedDescription();
    IsStunnedDescription();
};
