#pragma once

class IsStackableDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsStackableDescription();
    virtual void ~IsStackableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
