#pragma once

class AngryDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~AngryDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void AngryDescription(void);
};
