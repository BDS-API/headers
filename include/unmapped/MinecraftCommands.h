#pragma once

#include <string>
#include <memory>
#include <functional>


class MinecraftCommands {

public:
//  void setOpPermissionLevel(CommandPermissionLevel); //TODO: incomplete function definition // _ZN17MinecraftCommands20setOpPermissionLevelE22CommandPermissionLevel
    void getOpPermissionLevel()const; // _ZNK17MinecraftCommands20getOpPermissionLevelEv
    MinecraftCommands(Minecraft &, Automation::AutomationClient &); // _ZN17MinecraftCommandsC2ER9MinecraftRN10Automation16AutomationClientE
    void initCoreEnums(bool, BaseGameVersion const&); // _ZN17MinecraftCommands13initCoreEnumsEbRK15BaseGameVersion
    void getRegistry(); // _ZN17MinecraftCommands11getRegistryEv
    void getRegistry()const; // _ZNK17MinecraftCommands11getRegistryEv
    void requestCommandExecution(std::unique_ptr<CommandOrigin>, std::string const&, int, bool)const; // _ZNK17MinecraftCommands23requestCommandExecutionESt10unique_ptrI13CommandOriginSt14default_deleteIS1_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void getOutputType(CommandOrigin const&); // _ZN17MinecraftCommands13getOutputTypeERK13CommandOrigin
    void handleOutput(CommandOrigin const&, CommandOutput const&)const; // _ZNK17MinecraftCommands12handleOutputERK13CommandOriginRK13CommandOutput
    void executeCommand(std::shared_ptr<CommandContext>, bool)const; // _ZNK17MinecraftCommands14executeCommandESt10shared_ptrI14CommandContextEb
    void setRegistryNetworkUpdateCallback(std::function<void (Packet const&)>)const; // _ZNK17MinecraftCommands32setRegistryNetworkUpdateCallbackESt8functionIFvRK6PacketEE
//  void runCommand(HashedString const&, CommandOrigin &, CurrentCmdVersion); //TODO: incomplete function definition // _ZN17MinecraftCommands10runCommandERK12HashedStringR13CommandOrigin17CurrentCmdVersion
    void registerChatPermissionsCallback(std::function<bool (void)>); // _ZN17MinecraftCommands31registerChatPermissionsCallbackESt8functionIFbvEE
    void setOutputSender(std::unique_ptr<CommandOutputSender>); // _ZN17MinecraftCommands15setOutputSenderESt10unique_ptrI19CommandOutputSenderSt14default_deleteIS1_EE
    void getOutputSender(); // _ZN17MinecraftCommands15getOutputSenderEv
    ~MinecraftCommands(); // _ZN17MinecraftCommandsD2Ev
};
