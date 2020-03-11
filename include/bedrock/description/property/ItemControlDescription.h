#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class ItemControlDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~ItemControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ItemControlDescription();
};
