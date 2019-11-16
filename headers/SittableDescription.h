#pragma once

class SittableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~SittableDescription();
    virtual ~SittableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
