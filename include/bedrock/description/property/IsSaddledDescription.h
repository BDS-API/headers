#pragma once

#include "../../../json/Value"


class IsSaddledDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsSaddledDescription::~IsSaddledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsSaddledDescription(void);
};
