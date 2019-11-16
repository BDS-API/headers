#pragma once

class FireImmuneDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~FireImmuneDescription();
    virtual ~FireImmuneDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
