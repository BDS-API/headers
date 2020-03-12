#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorSpawnRuleBase.h"
#include <unordered_map>


class SpawnGroupRegistry : ActorSpawnRuleBase {

public:
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    virtual std::string getFileType();
    ~SpawnGroupRegistry();
    virtual std::string getRootKey();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
    SpawnGroupRegistry(ResourcePackManager &);
    void _addSpawnRules(std::string const&, MobSpawnRules &);
    void getSpawnGroup(std::string const&)const;
};
