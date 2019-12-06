#pragma once

class MarkVariantDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~MarkVariantDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void MarkVariantDescription(void);
};
