#pragma once

class CanFlyDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~CanFlyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void CanFlyDescription(void);
};
