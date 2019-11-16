#pragma once

class DefaultLookAngleDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~DefaultLookAngleDescription();
    virtual void ~DefaultLookAngleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
