#pragma once

class SittableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~SittableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void SittableDescription(void);
};
