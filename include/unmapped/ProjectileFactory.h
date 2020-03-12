#pragma once

#include <string>
#include "../bedrock/util/Vec3.h"


class ProjectileFactory {

public:
    static std::string mSubcomponentMap;

    void initFactory();
    void shutdown();
    void createSubcomponent(Json::Value &, std::string const&);
    ProjectileFactory(Level &);
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3);
};
