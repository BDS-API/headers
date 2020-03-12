#pragma once

#include <memory>
#include <string>
#include <functional>


class MinecraftCommands {

public:
    void getRegistry()const;
    void setRegistryNetworkUpdateCallback(std::function<void (Packet const&)>)const;
    void getOutputType(CommandOrigin const&);
    void requestCommandExecution(std::unique_ptr<CommandOrigin>, std::string const&, int, bool)const;
    void registerChatPermissionsCallback(std::function<bool (void)>);
    void getRegistry();
    MinecraftCommands(Minecraft &, Automation::AutomationClient &);
    void getOutputSender();
    void executeCommand(std::shared_ptr<CommandContext>, bool)const;
//  void setOpPermissionLevel(CommandPermissionLevel); //TODO: incomplete function definition
//  void runCommand(HashedString const&, CommandOrigin &, CurrentCmdVersion); //TODO: incomplete function definition
    void setOutputSender(std::unique_ptr<CommandOutputSender>);
    void initCoreEnums(bool, BaseGameVersion const&);
    void getOpPermissionLevel()const;
    void handleOutput(CommandOrigin const&, CommandOutput const&)const;
    ~MinecraftCommands();
};
