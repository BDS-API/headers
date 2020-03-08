#pragma once

#include "../../../unmapped/MobSpawnRules"
#include "../../util/Random"
#include "../../util/Tick"
#include "../../../unmapped/IWorldRegistriesProvider"
#include "../../../json/Value"
#include "../../pack/ResourcePackManager"


class ActorSpawnRuleGroup : ActorSpawnRuleBase {

public:
    virtual ActorSpawnRuleGroup::~ActorSpawnRuleGroup()
    virtual void getRootKey();
    virtual void getFileType();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
    virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);

    ActorSpawnRuleGroup(ResourcePackManager &, IWorldRegistriesProvider &);
    void getActorSpawnPool(ActorDefinitionIdentifier const&)const;
    void getDelayEnd(std::string)const;
    void resetDelayEnd(MobSpawnRules, unsigned long, Random &);
    void offSetDelayByCurrentTick(Tick const&);
};
