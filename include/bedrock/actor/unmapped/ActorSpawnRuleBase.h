#pragma once

#include <string>
#include <unordered_map>
#include <functional>


class ActorSpawnRuleBase {

public:
    ~ActorSpawnRuleBase();
    void _registerSpawnRules(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, MobSpawnRules const&, Json::Value &, std::string const&);
    void _readJsonHeader(std::string &&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    ActorSpawnRuleBase();
    void _applySpawnCondition(std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, Json::Value &, MobSpawnRules const&, std::string const&);
    void _getResources(ResourcePackManager &, MobSpawnRules const&, std::function<void (std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>);
};
