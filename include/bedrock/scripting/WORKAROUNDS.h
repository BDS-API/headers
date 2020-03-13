#pragma once



namespace ScriptApi {

    namespace WORKAROUNDS {

//      void cacheActors(entt::Registry<unsigned int> &, Level &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS11cacheActorsERN4entt8RegistryIjEER5Level
//      void helpGetActorRegistryID(entt::Registry<unsigned int> &, ActorUniqueID const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS22helpGetActorRegistryIDERN4entt8RegistryIjEERK13ActorUniqueIDRj
//      void helpGetActorRegistryID(entt::Registry<unsigned int> &, Actor const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS22helpGetActorRegistryIDERN4entt8RegistryIjEERK5ActorRj
//      void helpRegisterActor(entt::Registry<unsigned int> &, ActorUniqueID const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpRegisterActorERN4entt8RegistryIjEERK13ActorUniqueIDRj
//      void helpRegisterActor(entt::Registry<unsigned int> &, Actor const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpRegisterActorERN4entt8RegistryIjEERK5ActorRj
//      void helpRegisterLevel(entt::Registry<unsigned int> &, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpRegisterLevelERN4entt8RegistryIjEERj
//      void helpGetLevelRegistryID(entt::Registry<unsigned int> &, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS22helpGetLevelRegistryIDERN4entt8RegistryIjEERj
//      void helpCheckIsLevel(entt::Registry<unsigned int> const&, unsigned int); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS16helpCheckIsLevelERKN4entt8RegistryIjEEj
//      void helpGetActorUniqueID(entt::Registry<unsigned int> const&, unsigned int, ActorUniqueID &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS20helpGetActorUniqueIDERKN4entt8RegistryIjEEjR13ActorUniqueID
//      void helpGetActorFromRegistyID(entt::Registry<unsigned int> const&, unsigned int, Level const&, Actor **); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS25helpGetActorFromRegistyIDERKN4entt8RegistryIjEEjRK5LevelPP5Actor
//      void helpUpdateRegistryID(entt::Registry<unsigned int> &, unsigned int, ActorUniqueID const&); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS20helpUpdateRegistryIDERN4entt8RegistryIjEEjRK13ActorUniqueID
//      void helpRemoveEntity(entt::Registry<unsigned int> &, Level &, unsigned int); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS16helpRemoveEntityERN4entt8RegistryIjEER5Levelj
        void helpClearEcsID(Json::Value &); // _ZN9ScriptApi11WORKAROUNDS14helpClearEcsIDERN4Json5ValueE
//      void helpPopulateEcsID(entt::Registry<unsigned int> &, Level &, Json::Value &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpPopulateEcsIDERN4entt8RegistryIjEER5LevelRN4Json5ValueE
    };
}
