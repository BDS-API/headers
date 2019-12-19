#pragma once

class DespawnDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual DespawnDescription::~DespawnDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DespawnDescription(void);
};
