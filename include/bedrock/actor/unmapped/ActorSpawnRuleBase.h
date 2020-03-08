#pragma once

#include "../../../unmapped/MobSpawnRules"
#include "../../../json/Value"
#include "../../pack/ResourcePackManager"


class ActorSpawnRuleBase {

public:
    virtual ActorSpawnRuleBase::~ActorSpawnRuleBase()

    ActorSpawnRuleBase(void);
    void _registerSpawnRules(std::function<void ()(std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, MobSpawnRules const&, Json::Value &, std::string const&);
    void _applySpawnCondition(std::function<void ()(std::string const&, int, BiomeFilterGroup &, MobSpawnRules &)>, Json::Value &, MobSpawnRules const&, std::string const&);
    void _readJsonHeader(std::string &&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    void _getResources(ResourcePackManager &, MobSpawnRules const&, std::function<void ()(std::string const&, int, BiomeFilterGroup &, MobSpawnRules&)>);
};
