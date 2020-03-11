#pragma once

#include <utility>
#include <unordered_map>
#include "../../../unmapped/BiomeFilterGroup.h"
#include <memory>
#include "../../pack/ResourcePackManager.h"
#include "../../../json/Value.h"
#include "../../../unmapped/MobSpawnRules.h"
#include <functional>
#include <string>


class ActorSpawnRuleBase {

public:
    virtual ~ActorSpawnRuleBase();

    ActorSpawnRuleBase();
//  void _registerSpawnRules(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, MobSpawnRules const&, Json::Value &, std::string const&); //TODO: incomplete function definition
//  void _applySpawnCondition(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, Json::Value &, MobSpawnRules const&, std::string const&); //TODO: incomplete function definition
//  void _readJsonHeader(std::string &&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
//  void _getResources(ResourcePackManager &, MobSpawnRules const&, std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>); //TODO: incomplete function definition
};
