#pragma once

class SpawnGroupRegistry : ActorSpawnRuleBase {

public:
    virtual ~SpawnGroupRegistry();
    virtual void processPopulationControl(std::string const&, Json::Value &);
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);

    void SpawnGroupRegistry(ResourcePackManager &);
    void getSpawnGroup(std::string const&)const;
    void _addSpawnRules(std::string const&, MobSpawnRules &);
};
