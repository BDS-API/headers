#pragma once

class VariantDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual VariantDescription::~VariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    VariantDescription(void);
};
