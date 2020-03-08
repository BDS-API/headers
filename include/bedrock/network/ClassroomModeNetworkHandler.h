#pragma once

#include "../../unmapped/NetworkIdentifier"
#include "../../unmapped/AutomationClient"


class ClassroomModeNetworkHandler : NetEventCallback {

public:
    virtual ClassroomModeNetworkHandler::~ClassroomModeNetworkHandler()
    virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds);
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()(void)>);

    void setAutomationClient(Automation::AutomationClient *);
    void setTenantId(std::string const&);
    ClassroomModeNetworkHandler(bool);
    void _connect(std::string const&);
};
