#pragma once

#include "../bedrock/ServerInstance.h"
#include "../bedrock/actor/Player.h"
#include "IWorldRegistriesProvider.h"
#include "EntitySystems.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/command/CommandRegistry.h"
#include "GameRules.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "../bedrock/resourcepack/ResourcePackRepository.h"
#include "GameModuleServer.h"
#include "BaseGameVersion.h"
#include "../bedrock/resourcepack/ResourcePackStack.h"
#include "../bedrock/actor/unmapped/ActorFactory.h"


class VanillaGameModuleServer : GameModuleServer {

public:
    virtual void configureLevel(Level &, ResourcePackManager &);
//  virtual void configureDocumentation(IGameModuleDocumentation &); //TODO: incomplete function definition
    virtual void initializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&);
    virtual void init(ServerInstance &, Level &);
    ~VanillaGameModuleServer();
    virtual void configureNewPlayer(Player &);
    virtual void setupCommands(CommandRegistry &);
    virtual void shutdown();
    virtual void tick();
    VanillaGameModuleServer();
    void _configureWorldGen(IWorldRegistriesProvider &, ResourcePackManager &);
    void _configureActorData(ResourcePackManager &);
    void _configureEntityInitializer(ActorFactory &);
    void _configureEntitySystems(EntitySystems &, ResourcePackManager &);
};
