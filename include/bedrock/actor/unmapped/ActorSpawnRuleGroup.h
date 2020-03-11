#pragma once

#include "../../util/Random.h"
#include <utility>
#include <unordered_map>
#include "./ActorDefinitionIdentifier.h"
#include <memory>
#include "./ActorSpawnRuleBase.h"
#include "../../pack/ResourcePackManager.h"
#include "../../util/Tick.h"
#include "../../../json/Value.h"
#include "../../../unmapped/MobSpawnRules.h"
#include "../../../unmapped/IWorldRegistriesProvider.h"
#include <functional>
#include <string>


class ActorSpawnRuleGroup : ActorSpawnRuleBase {

public:
    virtual ~ActorSpawnRuleGroup();
    virtual std::string getRootKey();
    virtual std::string getFileType();
    virtual bool processPopulationControl(std::string const&, Json::Value &);
//  virtual void readResourceFiles(ResourcePackManager &, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition

    ActorSpawnRuleGroup(ResourcePackManager &, IWorldRegistriesProvider &);
    void getActorSpawnPool(ActorDefinitionIdentifier const&)const;
    void getDelayEnd(std::string)const;
    void resetDelayEnd(MobSpawnRules, unsigned long, Random &);
    void offSetDelayByCurrentTick(Tick const&);
};
