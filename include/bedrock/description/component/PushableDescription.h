#pragma once

#include "../../../json/Value"


class PushableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual PushableDescription::~PushableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PushableDescription(void);
};
