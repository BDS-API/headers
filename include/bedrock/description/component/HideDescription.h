#pragma once

#include "../../../json/Value"


class HideDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual HideDescription::~HideDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    HideDescription(void);
};
