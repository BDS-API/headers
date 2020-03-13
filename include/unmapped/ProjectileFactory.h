#pragma once

#include <string>
#include "../bedrock/util/Vec3.h"


class ProjectileFactory {

public:
    static std::string mSubcomponentMap;

    ProjectileFactory(Level &); // _ZN17ProjectileFactoryC2ER5Level
    void initFactory(); // _ZN17ProjectileFactory11initFactoryEv
    void shutdown(); // _ZN17ProjectileFactory8shutdownEv
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3); // _ZN17ProjectileFactory29shootProjectileFromDefinitionERK25ActorDefinitionIdentifierP3Mob4Vec3
    void createSubcomponent(Json::Value &, std::string const&); // _ZN17ProjectileFactory18createSubcomponentERN4Json5ValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
