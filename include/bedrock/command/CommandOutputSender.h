#pragma once

#include <string>
#include "../../unmapped/AutomationClient.h"
#include <functional>
#include "origin/CommandOrigin.h"
#include <vector>
#include "CommandOutput.h"


class CommandOutputSender {

public:
    virtual void send(CommandOrigin const&, CommandOutput const&);
    ~CommandOutputSender();
//  virtual void registerOutputCallback(std::function<void (AutomationCmdOutput &)> const&); //TODO: incomplete function definition
    void _toJson(CommandOutput const&)const;
//  void sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel); //TODO: incomplete function definition
    CommandOutputSender(Automation::AutomationClient &);
    void translate(std::vector<std::string> const&);
    void _sendOverWebsocket(CommandOrigin const&, CommandOutput const&);
};
