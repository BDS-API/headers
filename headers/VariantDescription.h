#pragma once

class VariantDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void VariantDescription::~VariantDescription();
    virtual void VariantDescription::~VariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
