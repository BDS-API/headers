#pragma once

#include "GameModuleServer.h"


class VanillaGameModuleServer : GameModuleServer {

public:
    virtual void init(ServerInstance &, Level &);
    virtual void configureLevel(Level &, ResourcePackManager &);
    virtual void configureNewPlayer(Player &);
    virtual void setupCommands(CommandRegistry &);
    virtual void initializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&);
    ~VanillaGameModuleServer();
    virtual void shutdown();
    virtual void tick();
//  virtual void configureDocumentation(IGameModuleDocumentation &); //TODO: incomplete function definition
    void _configureEntityInitializer(ActorFactory &);
    void _configureWorldGen(IWorldRegistriesProvider &, ResourcePackManager &);
    void _configureEntitySystems(EntitySystems &, ResourcePackManager &);
    VanillaGameModuleServer();
    void _configureActorData(ResourcePackManager &);
};
