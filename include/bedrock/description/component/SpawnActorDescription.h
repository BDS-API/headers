#pragma once

#include "ComponentDescription.h"


class SpawnActorDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK21SpawnActorDescription11getJsonNameEv
    virtual ~SpawnActorDescription(); // _ZN21SpawnActorDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN21SpawnActorDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21SpawnActorDescription13serializeDataERN4Json5ValueE
    SpawnActorDescription(); // _ZN21SpawnActorDescriptionC2Ev
    void _parseSpawnEntry(Json::Value &); // _ZN21SpawnActorDescription16_parseSpawnEntryERN4Json5ValueE
};
