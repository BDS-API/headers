#pragma once

#include "../bedrock/Minecraft.h"
#include "../bedrock/command/CommandContext.h"
#include "AutomationClient.h"
#include "../bedrock/command/CommandOutputSender.h"
#include "../bedrock/network/packet/Packet.h"
#include <string>
#include "../bedrock/command/origin/CommandOrigin.h"
#include <functional>
#include <memory>
#include "HashedString.h"
#include "../bedrock/command/CommandOutput.h"
#include "BaseGameVersion.h"


class MinecraftCommands {

public:
    void registerChatPermissionsCallback(std::function<bool (void)>);
    void setRegistryNetworkUpdateCallback(std::function<void (Packet const&)>)const;
    void getOutputSender();
    ~MinecraftCommands();
    void requestCommandExecution(std::unique_ptr<CommandOrigin>, std::string const&, int, bool)const;
    void setOutputSender(std::unique_ptr<CommandOutputSender>);
    void initCoreEnums(bool, BaseGameVersion const&);
    void getRegistry()const;
    void getOutputType(CommandOrigin const&);
//  void runCommand(HashedString const&, CommandOrigin &, CurrentCmdVersion); //TODO: incomplete function definition
    void getRegistry();
    void executeCommand(std::shared_ptr<CommandContext>, bool)const;
    MinecraftCommands(Minecraft &, Automation::AutomationClient &);
    void handleOutput(CommandOrigin const&, CommandOutput const&)const;
//  void setOpPermissionLevel(CommandPermissionLevel); //TODO: incomplete function definition
    void getOpPermissionLevel()const;
};
