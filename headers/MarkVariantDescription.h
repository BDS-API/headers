#pragma once

class MarkVariantDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~MarkVariantDescription();
    virtual ~MarkVariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
