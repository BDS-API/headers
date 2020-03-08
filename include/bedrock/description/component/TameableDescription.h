#pragma once

#include "../../../json/Value"


class TameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TameableDescription::~TameableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TameableDescription(void);
};
