#pragma once

#include <functional>
#include <memory>
#include <vector>
#include "./CommandOutput.h"
#include "orgin/CommandOrigin.h"
#include "../../unmapped/AutomationClient.h"
#include <string>


class CommandOutputSender {

public:
    virtual ~CommandOutputSender();
    virtual void send(CommandOrigin const&, CommandOutput const&);
//  virtual void registerOutputCallback(std::function<void (AutomationCmdOutput &)> const&); //TODO: incomplete function definition

    CommandOutputSender(Automation::AutomationClient &);
    void _sendOverWebsocket(CommandOrigin const&, CommandOutput const&);
    void _toJson(CommandOutput const&)const;
//  void sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel); //TODO: incomplete function definition
    void translate(std::vector<std::string, std::allocator<std::string>> const&);
};
