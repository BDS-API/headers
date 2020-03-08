#pragma once

#include "../../../json/Value"


class DwellerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    DwellerDescription::~DwellerDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DwellerDescription(void);
};
