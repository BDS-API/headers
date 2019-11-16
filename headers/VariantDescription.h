#pragma once

class VariantDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~VariantDescription();
    virtual ~VariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
