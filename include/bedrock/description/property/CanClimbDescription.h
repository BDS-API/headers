#pragma once

#include "../../../json/Value"


class CanClimbDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    CanClimbDescription::~CanClimbDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CanClimbDescription(void);
};
