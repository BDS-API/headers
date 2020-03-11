#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsTamedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsTamedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsTamedDescription();
};
