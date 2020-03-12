#pragma once

#include "../../pack/ResourcePackManager.h"
#include <string>
#include "../../../unmapped/MobSpawnRules.h"
#include <unordered_map>
#include <functional>
#include "../../../unmapped/BiomeFilterGroup.h"
#include <memory>
#include "../../../json/Value.h"
#include <utility>


class ActorSpawnRuleBase {

public:
    ~ActorSpawnRuleBase();
//  void _readJsonHeader(std::string &&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    void _applySpawnCondition(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, Json::Value &, MobSpawnRules const&, std::string const&);
    void _registerSpawnRules(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, MobSpawnRules const&, Json::Value &, std::string const&);
    void _getResources(ResourcePackManager &, MobSpawnRules const&, std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>);
    ActorSpawnRuleBase();
};
