#pragma once

#include "../../../json/Value"


class SpawnActorDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual SpawnActorDescription::~SpawnActorDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SpawnActorDescription(void);
    void _parseSpawnEntry(Json::Value &);
};
