#pragma once

#include "../../../json/Value"


class DespawnDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual DespawnDescription::~DespawnDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DespawnDescription(void);
};
