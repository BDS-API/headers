#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class SpawnActorDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~SpawnActorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SpawnActorDescription();
    void _parseSpawnEntry(Json::Value &);
};
