#pragma once

class VanillaGameModuleServer : GameModuleServer {

public:
    virtual ~VanillaGameModuleServer();
    virtual void init(ServerInstance &, Level &);
    virtual void shutdown(void);
    virtual void initializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&);
    virtual void configureLevel(Level &, ResourcePackManager &);
    virtual void configureNewPlayer(Player &);
    virtual void configureDocumentation(IGameModuleDocumentation &);
    virtual void tick(void);
    virtual void setupCommands(CommandRegistry &);

    void VanillaGameModuleServer(void);
    void _configureEntitySystems(EntitySystems &, ResourcePackManager &);
    void _configureEntityInitializer(ActorFactory &);
    void _configureActorData(ResourcePackManager &);
    void _configureWorldGen(IWorldRegistriesProvider &, ResourcePackManager &);
};
