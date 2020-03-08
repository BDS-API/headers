#pragma once

#include "../../../json/Value"


class ColorDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ColorDescription::~ColorDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ColorDescription(void);
};
