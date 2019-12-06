#pragma once

class CommandOutputSender {

public:
    virtual ~CommandOutputSender();
    virtual void send(CommandOrigin const&, CommandOutput const&);
    virtual void registerOutputCallback(std::function<void ()(AutomationCmdOutput &)> const&);

    void CommandOutputSender(Automation::AutomationClient &);
    void _sendOverWebsocket(CommandOrigin const&, CommandOutput const&);
    void _toJson(CommandOutput const&)const;
    void sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel);
    void translate(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
};
