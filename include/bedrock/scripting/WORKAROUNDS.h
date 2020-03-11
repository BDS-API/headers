#pragma once

#include "../actor/unmapped/ActorUniqueID.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../../json/Value.h"


namespace ScriptApi {

class WORKAROUNDS {

public:

//  void cacheActors(entt::Registry<unsigned int> &, Level &); //TODO: incomplete function definition
//  void helpGetActorRegistryID(entt::Registry<unsigned int> &, ActorUniqueID const&, unsigned int &); //TODO: incomplete function definition
//  void helpGetActorRegistryID(entt::Registry<unsigned int> &, Actor const&, unsigned int &); //TODO: incomplete function definition
//  void helpRegisterActor(entt::Registry<unsigned int> &, ActorUniqueID const&, unsigned int &); //TODO: incomplete function definition
//  void helpRegisterActor(entt::Registry<unsigned int> &, Actor const&, unsigned int &); //TODO: incomplete function definition
//  void helpRegisterLevel(entt::Registry<unsigned int> &, unsigned int &); //TODO: incomplete function definition
//  void helpGetLevelRegistryID(entt::Registry<unsigned int> &, unsigned int &); //TODO: incomplete function definition
//  void helpCheckIsLevel(entt::Registry<unsigned int> const&, unsigned int); //TODO: incomplete function definition
//  void helpGetActorUniqueID(entt::Registry<unsigned int> const&, unsigned int, ActorUniqueID &); //TODO: incomplete function definition
//  void helpGetActorFromRegistyID(entt::Registry<unsigned int> const&, unsigned int, Level const&, Actor **); //TODO: incomplete function definition
//  void helpUpdateRegistryID(entt::Registry<unsigned int> &, unsigned int, ActorUniqueID const&); //TODO: incomplete function definition
//  void helpRemoveEntity(entt::Registry<unsigned int> &, Level &, unsigned int); //TODO: incomplete function definition
    void helpClearEcsID(Json::Value &);
//  void helpPopulateEcsID(entt::Registry<unsigned int> &, Level &, Json::Value &); //TODO: incomplete function definition
};

}