#pragma once

#include "../bedrock/util/Vec3.h"
#include "../json/Value.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/level/Level.h"
#include <string>


class ProjectileFactory {

public:
    static std::string mSubcomponentMap;


    ProjectileFactory(Level &);
    void initFactory();
    void shutdown();
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3);
    void createSubcomponent(Json::Value &, std::string const&);
};
