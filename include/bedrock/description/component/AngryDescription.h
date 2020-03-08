#pragma once

#include "../../../json/Value"


class AngryDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual AngryDescription::~AngryDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AngryDescription(void);
};
