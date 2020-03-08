#pragma once

#include "../../unmapped/AutomationClient"
#include "orgin/CommandOrigin"


class CommandOutputSender {

public:
    virtual CommandOutputSender::~CommandOutputSender()
    virtual void send(CommandOrigin const&, CommandOutput const&);
    virtual void registerOutputCallback(std::function<void ()(AutomationCmdOutput &)> const&);

    CommandOutputSender(Automation::AutomationClient &);
    void _sendOverWebsocket(CommandOrigin const&, CommandOutput const&);
    void _toJson(CommandOutput const&)const;
    void sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel);
    void translate(std::vector<std::string, std::allocator<std::string>> const&);
};
