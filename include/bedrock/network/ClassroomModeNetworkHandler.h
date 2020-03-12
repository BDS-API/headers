#pragma once

#include <string>
#include "NetEventCallback.h"
#include <functional>


class ClassroomModeNetworkHandler : NetEventCallback {

public:
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>);
//  virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds); //TODO: incomplete function definition
    ~ClassroomModeNetworkHandler();
    void _connect(std::string const&);
    ClassroomModeNetworkHandler(bool);
    void setTenantId(std::string const&);
    void setAutomationClient(Automation::AutomationClient *);
};
