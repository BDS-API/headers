#pragma once

#include "../../../json/Value"


class ScaleDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ScaleDescription::~ScaleDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ScaleDescription(void);
};
