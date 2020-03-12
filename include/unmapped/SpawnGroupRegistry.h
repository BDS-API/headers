#pragma once

#include "../bedrock/actor/unmapped/ActorSpawnRuleBase.h"
#include <string>
#include <unordered_map>
#include "MobSpawnRules.h"
#include "../json/Value.h"
#include <functional>
#include "../bedrock/pack/ResourcePackManager.h"
#include <memory>
#include <utility>


class SpawnGroupRegistry : ActorSpawnRuleBase {

public:
    virtual std::string getRootKey();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
    virtual std::string getFileType();
//  virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    ~SpawnGroupRegistry();
    SpawnGroupRegistry(ResourcePackManager &);
    void getSpawnGroup(std::string const&)const;
    void _addSpawnRules(std::string const&, MobSpawnRules &);
};
