#pragma once

#include <string>
#include "NetEventCallback.h"
#include <functional>
#include "../../unmapped/NetworkIdentifier.h"
#include "../../unmapped/AutomationClient.h"


class ClassroomModeNetworkHandler : NetEventCallback {

public:
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>);
//  virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds); //TODO: incomplete function definition
    ~ClassroomModeNetworkHandler();
    void setAutomationClient(Automation::AutomationClient *);
    void _connect(std::string const&);
    void setTenantId(std::string const&);
    ClassroomModeNetworkHandler(bool);
};
