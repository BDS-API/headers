#pragma once

#include "../../../json/Value"


class SittableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual SittableDescription::~SittableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SittableDescription(void);
};
