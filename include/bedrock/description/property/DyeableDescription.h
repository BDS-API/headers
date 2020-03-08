#pragma once

#include "../../../json/Value"


class DyeableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual DyeableDescription::~DyeableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DyeableDescription(void);
};
