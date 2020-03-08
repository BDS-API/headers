#pragma once

#include "../bedrock/actor/unmapped/ActorSpawnRuleBase"
#include "../json/Value"
#include "../bedrock/pack/ResourcePackManager"


class SpawnGroupRegistry : ActorSpawnRuleBase {

public:
    virtual SpawnGroupRegistry::~SpawnGroupRegistry()
    virtual void getRootKey();
    virtual void getFileType();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);

    SpawnGroupRegistry(ResourcePackManager &);
    void getSpawnGroup(std::string const&)const;
    void _addSpawnRules(std::string const&, MobSpawnRules &);
};
