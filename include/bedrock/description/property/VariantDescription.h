#pragma once

#include "../../../json/Value"


class VariantDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    VariantDescription::~VariantDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    VariantDescription(void);
};
