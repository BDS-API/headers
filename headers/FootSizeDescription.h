#pragma once

class FootSizeDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~FootSizeDescription();
    virtual void ~FootSizeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
