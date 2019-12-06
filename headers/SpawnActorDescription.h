#pragma once

class SpawnActorDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~SpawnActorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void SpawnActorDescription(void);
    void _parseSpawnEntry(Json::Value &);
};
