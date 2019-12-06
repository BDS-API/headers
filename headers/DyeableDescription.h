#pragma once

class DyeableDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~DyeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void DyeableDescription(void);
};
