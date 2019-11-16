#pragma once

class FireImmuneDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~FireImmuneDescription();
    virtual void ~FireImmuneDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
