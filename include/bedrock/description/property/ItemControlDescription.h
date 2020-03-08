#pragma once

#include "../../../json/Value"


class ItemControlDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ItemControlDescription::~ItemControlDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ItemControlDescription(void);
};
