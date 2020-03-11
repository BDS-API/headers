#pragma once

#include "../bedrock/command/CommandContext.h"
#include "../bedrock/network/packet/Packet.h"
#include "./HashedString.h"
#include "../bedrock/command/CommandOutput.h"
#include <memory>
#include "../bedrock/command/orgin/CommandOrigin.h"
#include "../bedrock/Minecraft.h"
#include "./BaseGameVersion.h"
#include "./AutomationClient.h"
#include <functional>
#include "../bedrock/command/CommandOutputSender.h"
#include <string>


class MinecraftCommands {

public:

//  void setOpPermissionLevel(CommandPermissionLevel); //TODO: incomplete function definition
    void getOpPermissionLevel()const;
    MinecraftCommands(Minecraft &, Automation::AutomationClient &);
    void initCoreEnums(bool, BaseGameVersion const&);
    void getRegistry();
    void getRegistry()const;
    void requestCommandExecution(std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, std::string const&, int, bool)const;
    void getOutputType(CommandOrigin const&);
    void handleOutput(CommandOrigin const&, CommandOutput const&)const;
    void executeCommand(std::shared_ptr<CommandContext>, bool)const;
//  void setRegistryNetworkUpdateCallback(std::function<void (Packet const&)>)const; //TODO: incomplete function definition
//  void runCommand(HashedString const&, CommandOrigin &, CurrentCmdVersion); //TODO: incomplete function definition
//  void registerChatPermissionsCallback(std::function<bool (void)>); //TODO: incomplete function definition
    void setOutputSender(std::unique_ptr<CommandOutputSender, std::default_delete<CommandOutputSender>>);
    void getOutputSender();
    ~MinecraftCommands();
};
