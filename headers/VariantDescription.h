#pragma once

class VariantDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~VariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void VariantDescription(void);
};
