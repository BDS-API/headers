#pragma once

#include "../../pack/ResourcePackManager.h"
#include <string>
#include "../../util/Random.h"
#include "ActorSpawnRuleBase.h"
#include "../../../unmapped/MobSpawnRules.h"
#include <unordered_map>
#include "../../../unmapped/IWorldRegistriesProvider.h"
#include <functional>
#include "../../util/Tick.h"
#include <memory>
#include "../../../json/Value.h"
#include "ActorDefinitionIdentifier.h"
#include <utility>


class ActorSpawnRuleGroup : ActorSpawnRuleBase {

public:
    virtual std::string getFileType();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
    ~ActorSpawnRuleGroup();
    virtual std::string getRootKey();
//  virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    void getActorSpawnPool(ActorDefinitionIdentifier const&)const;
    ActorSpawnRuleGroup(ResourcePackManager &, IWorldRegistriesProvider &);
    void resetDelayEnd(MobSpawnRules, unsigned long, Random &);
    void offSetDelayByCurrentTick(Tick const&);
    void getDelayEnd(std::string)const;
};
