#pragma once

class DwellerDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void DwellerDescription::~DwellerDescription();
    virtual void DwellerDescription::~DwellerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
