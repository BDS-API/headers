#pragma once



namespace ScriptApi {

    namespace WORKAROUNDS {

//        void cacheActors(long &, Level &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS11cacheActorsERN4entt8RegistryIjEER5Level
//        void helpGetActorRegistryID(long &, ActorUniqueID const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS22helpGetActorRegistryIDERN4entt8RegistryIjEERK13ActorUniqueIDRj
//        void helpGetActorRegistryID(long &, Actor const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS22helpGetActorRegistryIDERN4entt8RegistryIjEERK5ActorRj
//        void helpRegisterActor(long &, ActorUniqueID const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpRegisterActorERN4entt8RegistryIjEERK13ActorUniqueIDRj
//        void helpRegisterActor(long &, Actor const&, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpRegisterActorERN4entt8RegistryIjEERK5ActorRj
//        void helpRegisterLevel(long &, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpRegisterLevelERN4entt8RegistryIjEERj
//        void helpGetLevelRegistryID(long &, unsigned int &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS22helpGetLevelRegistryIDERN4entt8RegistryIjEERj
//        void helpCheckIsLevel(long const&, unsigned int); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS16helpCheckIsLevelERKN4entt8RegistryIjEEj
//        void helpGetActorUniqueID(long const&, unsigned int, ActorUniqueID &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS20helpGetActorUniqueIDERKN4entt8RegistryIjEEjR13ActorUniqueID
//        void helpGetActorFromRegistyID(long const&, unsigned int, Level const&, Actor **); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS25helpGetActorFromRegistyIDERKN4entt8RegistryIjEEjRK5LevelPP5Actor
//        void helpUpdateRegistryID(long &, unsigned int, ActorUniqueID const&); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS20helpUpdateRegistryIDERN4entt8RegistryIjEEjRK13ActorUniqueID
//        void helpRemoveEntity(long &, Level &, unsigned int); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS16helpRemoveEntityERN4entt8RegistryIjEER5Levelj
        void helpClearEcsID(Json::Value &); // _ZN9ScriptApi11WORKAROUNDS14helpClearEcsIDERN4Json5ValueE
//        void helpPopulateEcsID(long &, Level &, Json::Value &); //TODO: incomplete function definition // _ZN9ScriptApi11WORKAROUNDS17helpPopulateEcsIDERN4entt8RegistryIjEER5LevelRN4Json5ValueE
    };
}
