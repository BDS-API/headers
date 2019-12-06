#pragma once

class CanClimbDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~CanClimbDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void CanClimbDescription(void);
};
