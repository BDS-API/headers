#pragma once

#include "../../../json/Value"


class WASDControlledDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    WASDControlledDescription::~WASDControlledDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WASDControlledDescription(void);
};
