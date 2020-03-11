#pragma once

#include "../bedrock/resourcepack/ResourcePackRepository.h"
#include "./IWorldRegistriesProvider.h"
#include "../bedrock/resourcepack/ResourcePackStack.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "../bedrock/command/CommandRegistry.h"
#include "./GameRules.h"
#include "./EntitySystems.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/ServerInstance.h"
#include "../bedrock/actor/Player.h"
#include "./BaseGameVersion.h"
#include "../bedrock/actor/unmapped/ActorFactory.h"
#include "./GameModuleServer.h"


class VanillaGameModuleServer : GameModuleServer {

public:
    virtual ~VanillaGameModuleServer();
    virtual void init(ServerInstance &, Level &);
    virtual void shutdown();
    virtual void initializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&);
    virtual void configureLevel(Level &, ResourcePackManager &);
    virtual void configureNewPlayer(Player &);
//  virtual void configureDocumentation(IGameModuleDocumentation &); //TODO: incomplete function definition
    virtual void tick();
    virtual void setupCommands(CommandRegistry &);

    VanillaGameModuleServer();
    void _configureEntitySystems(EntitySystems &, ResourcePackManager &);
    void _configureEntityInitializer(ActorFactory &);
    void _configureActorData(ResourcePackManager &);
    void _configureWorldGen(IWorldRegistriesProvider &, ResourcePackManager &);
};
