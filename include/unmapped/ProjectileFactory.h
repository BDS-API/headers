#pragma once

#include "../bedrock/level/Level.h"
#include <string>
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include "../json/Value.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class ProjectileFactory {

public:
    static std::string mSubcomponentMap;

    ProjectileFactory(Level &);
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3);
    void createSubcomponent(Json::Value &, std::string const&);
    void shutdown();
    void initFactory();
};
