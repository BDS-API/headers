#pragma once

class ClassroomModeNetworkHandler : NetEventCallback {

public:
    virtual ~ClassroomModeNetworkHandler();
    virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds);
    virtual void onWebsocketRequest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(void)>);

    void setAutomationClient(Automation::AutomationClient *);
    void setTenantId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ClassroomModeNetworkHandler(bool);
    void _connect(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
