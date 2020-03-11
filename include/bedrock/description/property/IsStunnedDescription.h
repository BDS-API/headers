#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsStunnedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsStunnedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsStunnedDescription();
};
