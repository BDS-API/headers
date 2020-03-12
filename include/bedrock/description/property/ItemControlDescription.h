#pragma once

#include "PropertyDescription.h"


class ItemControlDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~ItemControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ItemControlDescription();
};
