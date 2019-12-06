#pragma once

class IsHiddenWhenInvisibleDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsHiddenWhenInvisibleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsHiddenWhenInvisibleDescription(void);
};
