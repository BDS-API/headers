#pragma once

class TameableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TameableDescription(void);
};
