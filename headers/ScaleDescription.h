#pragma once

class ScaleDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~ScaleDescription();
    virtual void ~ScaleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
