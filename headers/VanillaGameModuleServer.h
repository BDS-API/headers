#pragma once

class VanillaGameModuleServer : GameModuleServer {

    virtual void Vanilla~VanillaGameModuleServer();
    virtual void Vanilla~VanillaGameModuleServer();
    virtual void Vanillainit(ServerInstance &, Level &);
    virtual void Vanillashutdown(void);
    virtual void VanillainitializeBehaviorStack(GameRules const&, ResourcePackRepository &, ResourcePackStack &, BaseGameVersion const&);
    virtual void VanillaconfigureLevel(Level &, ResourcePackManager &);
    virtual void VanillaconfigureNewPlayer(Player &);
    virtual void VanillaconfigureDocumentation(IGameModuleDocumentation &);
    virtual void Vanillatick(void);
    virtual void VanillasetupCommands(CommandRegistry &);
}
