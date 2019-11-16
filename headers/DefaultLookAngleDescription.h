#pragma once

class DefaultLookAngleDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~DefaultLookAngleDescription();
    virtual ~DefaultLookAngleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
