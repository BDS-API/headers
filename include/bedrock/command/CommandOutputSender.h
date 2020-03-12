#pragma once

#include <vector>
#include <functional>


class CommandOutputSender {

public:
    ~CommandOutputSender();
    virtual void registerOutputCallback(std::function<void (AutomationCmdOutput &)> const&);
    virtual void send(CommandOrigin const&, CommandOutput const&);
    void _sendOverWebsocket(CommandOrigin const&, CommandOutput const&);
    void _toJson(CommandOutput const&)const;
    void translate(std::vector<std::string> const&);
    CommandOutputSender(Automation::AutomationClient &);
//  void sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel); //TODO: incomplete function definition
};
