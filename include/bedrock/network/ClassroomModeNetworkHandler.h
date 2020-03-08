#pragma once

#include "../../unmapped/AutomationClient"
#include "../../unmapped/NetworkIdentifier"


class ClassroomModeNetworkHandler : NetEventCallback {

public:
    ClassroomModeNetworkHandler::~ClassroomModeNetworkHandler()
    virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds);
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()(void)>);

    void setAutomationClient(Automation::AutomationClient *);
    void setTenantId(std::string const&);
    ClassroomModeNetworkHandler(bool);
    void _connect(std::string const&);
};
