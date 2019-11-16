#pragma once

class SittableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void SittableDescription::~SittableDescription();
    virtual void SittableDescription::~SittableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
