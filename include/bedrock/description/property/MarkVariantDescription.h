#pragma once

#include "../../../json/Value"


class MarkVariantDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual MarkVariantDescription::~MarkVariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MarkVariantDescription(void);
};
