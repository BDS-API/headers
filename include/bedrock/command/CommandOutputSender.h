#pragma once

#include <functional>
#include <vector>


class CommandOutputSender {

public:
    ~CommandOutputSender(); // _ZN19CommandOutputSenderD2Ev
    virtual void send(CommandOrigin const&, CommandOutput const&); // _ZN19CommandOutputSender4sendERK13CommandOriginRK13CommandOutput
    virtual void registerOutputCallback(std::function<void (AutomationCmdOutput &)> const&); // _ZN19CommandOutputSender22registerOutputCallbackERKSt8functionIFvR19AutomationCmdOutputEE
    CommandOutputSender(Automation::AutomationClient &); // _ZN19CommandOutputSenderC2ERN10Automation16AutomationClientE
    void _sendOverWebsocket(CommandOrigin const&, CommandOutput const&); // _ZN19CommandOutputSender18_sendOverWebsocketERK13CommandOriginRK13CommandOutput
    void _toJson(CommandOutput const&)const; // _ZNK19CommandOutputSender7_toJsonERK13CommandOutput
//  void sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel); //TODO: incomplete function definition // _ZN19CommandOutputSender12sendToAdminsERK13CommandOriginRK13CommandOutput22CommandPermissionLevel
    void translate(std::vector<std::string> const&); // _ZN19CommandOutputSender9translateERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
};
