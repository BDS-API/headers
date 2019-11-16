#pragma once

class VanillaGameModuleServer : GameModuleServer {

    virtual ~VanillaGameModuleServer();
    virtual ~VanillaGameModuleServer();
    virtual void init(ServerInstance &, Level &);
    virtual void shutdown(void);
    virtual void initializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&);
    virtual void configureLevel(Level &, ResourcePackManager &);
    virtual void configureNewPlayer(Player &);
    virtual void configureDocumentation(IGameModuleDocumentation &);
    virtual void tick(void);
    virtual void setupCommands(CommandRegistry &);
}
