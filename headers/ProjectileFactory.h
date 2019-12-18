#pragma once

class ProjectileFactory {

public:
    static long ProjectileFactory::mSubcomponentMap[abi:cxx11];


    void ProjectileFactory(Level &);
    void initFactory(void);
    void shutdown(void);
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3);
    void createSubcomponent(Json::Value &, std::string const&);
};
