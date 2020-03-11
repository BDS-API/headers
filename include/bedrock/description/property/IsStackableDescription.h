#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsStackableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsStackableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsStackableDescription();
};
