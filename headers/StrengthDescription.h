#pragma once

class StrengthDescription : AttributeDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~StrengthDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void StrengthDescription(void);
};
