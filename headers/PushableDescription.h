#pragma once

class PushableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~PushableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void PushableDescription(void);
};
