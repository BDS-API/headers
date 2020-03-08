#pragma once

#include "../../../json/Value"


class DynamicJumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    DynamicJumpControlDescription::~DynamicJumpControlDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DynamicJumpControlDescription(void);
};
