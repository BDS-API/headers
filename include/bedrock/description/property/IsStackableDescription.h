#pragma once

#include "../../../json/Value"


class IsStackableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    IsStackableDescription::~IsStackableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsStackableDescription(void);
};
