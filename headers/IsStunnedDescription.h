#pragma once

class IsStunnedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsStunnedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsStunnedDescription(void);
};
