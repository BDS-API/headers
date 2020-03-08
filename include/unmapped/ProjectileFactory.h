#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/level/Level"
#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"
#include "../json/Value"


class ProjectileFactory {

public:
    static long mSubcomponentMap[abi:cxx11];


    ProjectileFactory(Level &);
    void initFactory();
    void shutdown();
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3);
    void createSubcomponent(Json::Value &, std::string const&);
};
