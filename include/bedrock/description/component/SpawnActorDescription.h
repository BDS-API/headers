#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class SpawnActorDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~SpawnActorDescription();
    SpawnActorDescription();
    void _parseSpawnEntry(Json::Value &);
};
