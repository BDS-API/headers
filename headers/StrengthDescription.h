#pragma once

class StrengthDescription : AttributeDescription {

    virtual void getJsonName(void)const;
    virtual void ~StrengthDescription();
    virtual void ~StrengthDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
