#pragma once

#include "ComponentDescription.h"


class SpawnActorDescription : ComponentDescription {

public:
    ~SpawnActorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    void _parseSpawnEntry(Json::Value &);
    SpawnActorDescription();
};
