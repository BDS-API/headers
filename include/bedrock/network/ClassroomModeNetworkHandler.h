#pragma once

#include <functional>
#include <string>
#include "NetEventCallback.h"


class ClassroomModeNetworkHandler : public NetEventCallback {

public:
    virtual ~ClassroomModeNetworkHandler(); // _ZN27ClassroomModeNetworkHandlerD2Ev
    virtual void __fake_function0(); // fake
    virtual void allowIncomingPacketId__incomplete0(NetworkIdentifier const&, long); //TODO: incomplete function definition // _ZN27ClassroomModeNetworkHandler21allowIncomingPacketIdERK17NetworkIdentifier18MinecraftPacketIds
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>); // _ZN27ClassroomModeNetworkHandler18onWebsocketRequestERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_St8functionIFvvEE
    void setAutomationClient(Automation::AutomationClient *); // _ZN27ClassroomModeNetworkHandler19setAutomationClientEPN10Automation16AutomationClientE
    void setTenantId(std::string const&); // _ZN27ClassroomModeNetworkHandler11setTenantIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ClassroomModeNetworkHandler(bool); // _ZN27ClassroomModeNetworkHandlerC2Eb
    void _connect(std::string const&); // _ZN27ClassroomModeNetworkHandler8_connectERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
