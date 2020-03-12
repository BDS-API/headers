#pragma once

#include "PropertyDescription.h"


class IsStackableDescription : PropertyDescription {

public:
    ~IsStackableDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    IsStackableDescription();
};
