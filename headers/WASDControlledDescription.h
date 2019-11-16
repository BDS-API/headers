#pragma once

class WASDControlledDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~WASDControlledDescription();
    virtual ~WASDControlledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
