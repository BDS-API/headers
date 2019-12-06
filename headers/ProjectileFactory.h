#pragma once

class ProjectileFactory {

public:

    void ProjectileFactory(Level &);
    void initFactory(void);
    void shutdown(void);
    void shootProjectileFromDefinition(ActorDefinitionIdentifier const&, Mob *, Vec3);
    void createSubcomponent(Json::Value &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};