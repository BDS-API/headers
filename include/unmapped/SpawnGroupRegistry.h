#pragma once

#include <utility>
#include <unordered_map>
#include "./MobSpawnRules.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "../bedrock/actor/unmapped/ActorSpawnRuleBase.h"
#include "../json/Value.h"
#include <memory>
#include <functional>
#include <string>


class SpawnGroupRegistry : ActorSpawnRuleBase {

public:
    virtual ~SpawnGroupRegistry();
    virtual std::string getRootKey();
    virtual std::string getFileType();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
//  virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition

    SpawnGroupRegistry(ResourcePackManager &);
    void getSpawnGroup(std::string const&)const;
    void _addSpawnRules(std::string const&, MobSpawnRules &);
};
