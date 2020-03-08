#pragma once

#include "../actor/Actor"
#include "../level/Level"
#include "../actor/unmapped/ActorUniqueID"
#include "../../json/Value"


using namespace ScriptApi;

class WORKAROUNDS {

public:

    void cacheActors(entt::Registry<unsigned int> &, Level &);
    void helpGetActorRegistryID(entt::Registry<unsigned int> &, ActorUniqueID const&, unsigned int &);
    void helpGetActorRegistryID(entt::Registry<unsigned int> &, Actor const&, unsigned int &);
    void helpRegisterActor(entt::Registry<unsigned int> &, ActorUniqueID const&, unsigned int &);
    void helpRegisterActor(entt::Registry<unsigned int> &, Actor const&, unsigned int &);
    void helpRegisterLevel(entt::Registry<unsigned int> &, unsigned int &);
    void helpGetLevelRegistryID(entt::Registry<unsigned int> &, unsigned int &);
    void helpCheckIsLevel(entt::Registry<unsigned int> const&, unsigned int);
    void helpGetActorUniqueID(entt::Registry<unsigned int> const&, unsigned int, ActorUniqueID &);
    void helpGetActorFromRegistyID(entt::Registry<unsigned int> const&, unsigned int, Level const&, Actor **);
    void helpUpdateRegistryID(entt::Registry<unsigned int> &, unsigned int, ActorUniqueID const&);
    void helpRemoveEntity(entt::Registry<unsigned int> &, Level &, unsigned int);
    void helpClearEcsID(Json::Value &);
    void helpPopulateEcsID(entt::Registry<unsigned int> &, Level &, Json::Value &);
};
