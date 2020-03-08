#pragma once

#include "../bedrock/command/CommandRegistry"
#include "../bedrock/ServerInstance"
#include "../bedrock/resourcepack/ResourcePackStack"
#include "../bedrock/actor/unmapped/ActorFactory"
#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/actor/Player"
#include "../bedrock/resourcepack/ResourcePackRepository"
#include "../bedrock/level/Level"


class VanillaGameModuleServer : GameModuleServer {

public:
    VanillaGameModuleServer::~VanillaGameModuleServer()
    virtual void init(ServerInstance &, Level &);
    virtual void shutdown();
    virtual void initializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&);
    virtual void configureLevel(Level &, ResourcePackManager &);
    virtual void configureNewPlayer(Player &);
    virtual void configureDocumentation(IGameModuleDocumentation &);
    virtual void tick();
    virtual void setupCommands(CommandRegistry &);

    VanillaGameModuleServer(void);
    void _configureEntitySystems(EntitySystems &, ResourcePackManager &);
    void _configureEntityInitializer(ActorFactory &);
    void _configureActorData(ResourcePackManager &);
    void _configureWorldGen(IWorldRegistriesProvider &, ResourcePackManager &);
};
