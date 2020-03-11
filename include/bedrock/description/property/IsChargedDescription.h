#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsChargedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsChargedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsChargedDescription();
};
