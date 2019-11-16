#pragma once

class IsHiddenWhenInvisibleDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsHiddenWhenInvisibleDescription();
    virtual void ~IsHiddenWhenInvisibleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
