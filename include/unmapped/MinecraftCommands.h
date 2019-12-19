#pragma once

class MinecraftCommands {

public:

    void setOpPermissionLevel(CommandPermissionLevel);
    void getOpPermissionLevel(void)const;
    MinecraftCommands(Minecraft &, Automation::AutomationClient &);
    void initCoreEnums(bool, BaseGameVersion const&);
    void getRegistry(void);
    void getRegistry(void)const;
    void requestCommandExecution(std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, std::string const&, int, bool)const;
    void getOutputType(CommandOrigin const&);
    void handleOutput(CommandOrigin const&, CommandOutput const&)const;
    void executeCommand(std::shared_ptr<CommandContext>, bool)const;
    void setRegistryNetworkUpdateCallback(std::function<void ()(Packet const&)>)const;
    void runCommand(HashedString const&, CommandOrigin &, CurrentCmdVersion);
    void registerChatPermissionsCallback(std::function<bool ()(void)>);
    void setOutputSender(std::unique_ptr<CommandOutputSender, std::default_delete<CommandOutputSender>>);
    void getOutputSender(void);
};
