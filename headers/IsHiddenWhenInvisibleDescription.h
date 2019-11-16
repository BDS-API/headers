#pragma once

class IsHiddenWhenInvisibleDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~IsHiddenWhenInvisibleDescription();
    virtual ~IsHiddenWhenInvisibleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
