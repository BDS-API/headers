#pragma once

class CommandOutputSender {

    virtual void ~CommandOutputSender();
    virtual void ~CommandOutputSender();
    virtual void send(CommandOrigin const&, CommandOutput const&);
    virtual void registerOutputCallback(std::function<void ()(AutomationCmdOutput &)> const&);
}
