#pragma once

#include "../../../json/Value"


class DanceDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    DanceDescription::~DanceDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

};
