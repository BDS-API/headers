#pragma once

class MarkVariantDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~MarkVariantDescription();
    virtual void ~MarkVariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
