#pragma once

class ProjectileFactory {

public:
    static long mSubcomponentMap[abi:cxx11];


    ProjectileFactory(Level &);
    void initFactory(void);
    void shutdown(void);
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3);
    void createSubcomponent(Json::Value &, std::string const&);
};
