#pragma once

#include "../../../json/Value"


class JumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual JumpControlDescription::~JumpControlDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    JumpControlDescription(void);
};
