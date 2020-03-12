#pragma once

#include <string>
#include "../../../unmapped/MobSpawnRules.h"
#include <unordered_map>
#include "ActorSpawnRuleBase.h"


class ActorSpawnRuleGroup : ActorSpawnRuleBase {

public:
    virtual std::string getRootKey();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    ~ActorSpawnRuleGroup();
    virtual std::string getFileType();
    ActorSpawnRuleGroup(ResourcePackManager &, IWorldRegistriesProvider &);
    void offSetDelayByCurrentTick(Tick const&);
    void resetDelayEnd(MobSpawnRules, unsigned long, Random &);
    void getActorSpawnPool(ActorDefinitionIdentifier const&)const;
    void getDelayEnd(std::string)const;
};
