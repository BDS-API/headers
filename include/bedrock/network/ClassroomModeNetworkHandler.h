#pragma once

#include "../../unmapped/NetworkIdentifier.h"
#include "./NetEventCallback.h"
#include <functional>
#include "../../unmapped/AutomationClient.h"
#include <string>


class ClassroomModeNetworkHandler : NetEventCallback {

public:
    virtual ~ClassroomModeNetworkHandler();
//  virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds); //TODO: incomplete function definition
//  virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>); //TODO: incomplete function definition

    void setAutomationClient(Automation::AutomationClient *);
    void setTenantId(std::string const&);
    ClassroomModeNetworkHandler(bool);
    void _connect(std::string const&);
};
