#pragma once

class MinecraftCommands {

public:

    void setOpPermissionLevel(CommandPermissionLevel);
    void getOpPermissionLevel(void)const;
    void MinecraftCommands(Minecraft &, Automation::AutomationClient &);
    void initCoreEnums(bool, BaseGameVersion const&);
    void getRegistry(void);
    void getRegistry(void)const;
    void requestCommandExecution(std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool)const;
    void getOutputType(CommandOrigin const&);
    void handleOutput(CommandOrigin const&, CommandOutput const&)const;
    void executeCommand(std::shared_ptr<CommandContext>, bool)const;
    void setRegistryNetworkUpdateCallback(std::function<void ()(Packet const&)>)const;
    void runCommand(HashedString const&, CommandOrigin &, CurrentCmdVersion);
    void registerChatPermissionsCallback(std::function<bool ()(void)>);
    void setOutputSender(std::unique_ptr<CommandOutputSender, std::default_delete<CommandOutputSender>>);
    void getOutputSender(void);
};
