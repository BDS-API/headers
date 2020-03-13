#pragma once

#include "GameModuleServer.h"


class VanillaGameModuleServer : GameModuleServer {

public:
    ~VanillaGameModuleServer(); // _ZN23VanillaGameModuleServerD2Ev
    virtual void init(ServerInstance &, Level &); // _ZN23VanillaGameModuleServer4initER14ServerInstanceR5Level
    virtual void shutdown(); // _ZN23VanillaGameModuleServer8shutdownEv
    virtual void initializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&); // _ZN23VanillaGameModuleServer23initializeBehaviorStackERK9GameRulesR22ResourcePackRepositoryR17ResourcePackStackRK15BaseGameVersion
    virtual void configureLevel(Level &, ResourcePackManager &); // _ZN23VanillaGameModuleServer14configureLevelER5LevelR19ResourcePackManager
    virtual void configureNewPlayer(Player &); // _ZN23VanillaGameModuleServer18configureNewPlayerER6Player
//  virtual void configureDocumentation(IGameModuleDocumentation &); //TODO: incomplete function definition // _ZN23VanillaGameModuleServer22configureDocumentationER24IGameModuleDocumentation
    virtual void tick(); // _ZN23VanillaGameModuleServer4tickEv
    virtual void setupCommands(CommandRegistry &); // _ZN23VanillaGameModuleServer13setupCommandsER15CommandRegistry
    VanillaGameModuleServer(); // _ZN23VanillaGameModuleServerC2Ev
    void _configureEntitySystems(EntitySystems &, ResourcePackManager &); // _ZN23VanillaGameModuleServer23_configureEntitySystemsER13EntitySystemsR19ResourcePackManager
    void _configureEntityInitializer(ActorFactory &); // _ZN23VanillaGameModuleServer27_configureEntityInitializerER12ActorFactory
    void _configureActorData(ResourcePackManager &); // _ZN23VanillaGameModuleServer19_configureActorDataER19ResourcePackManager
    void _configureWorldGen(IWorldRegistriesProvider &, ResourcePackManager &); // _ZN23VanillaGameModuleServer18_configureWorldGenER24IWorldRegistriesProviderR19ResourcePackManager
};
