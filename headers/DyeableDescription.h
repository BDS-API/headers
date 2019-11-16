#pragma once

class DyeableDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~DyeableDescription();
    virtual ~DyeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
