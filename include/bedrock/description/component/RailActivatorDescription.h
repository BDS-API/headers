#pragma once

#include "../../../json/Value"


class RailActivatorDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual RailActivatorDescription::~RailActivatorDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RailActivatorDescription(void);
};
