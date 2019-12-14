#pragma once

class ClassroomModeNetworkHandler : NetEventCallback {

public:
    virtual ~ClassroomModeNetworkHandler();
    virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds);
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()(void)>);

    void setAutomationClient(Automation::AutomationClient *);
    void setTenantId(std::string const&);
    void ClassroomModeNetworkHandler(bool);
    void _connect(std::string const&);
};
