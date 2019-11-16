#pragma once

class CommandOutputSender {

    virtual ~CommandOutputSender();
    virtual ~CommandOutputSender();
    virtual void send(CommandOrigin const&, CommandOutput const&);
    virtual void registerOutputCallback(std::function<void ()(AutomationCmdOutput &)> const&);
}
