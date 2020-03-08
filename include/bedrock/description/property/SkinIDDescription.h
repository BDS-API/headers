#pragma once

#include "../../../json/Value"


class SkinIDDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual SkinIDDescription::~SkinIDDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SkinIDDescription(void);
};
