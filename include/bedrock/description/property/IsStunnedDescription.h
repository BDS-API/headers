#pragma once

#include "PropertyDescription.h"


class IsStunnedDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~IsStunnedDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    IsStunnedDescription();
};
