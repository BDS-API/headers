#pragma once

#include <string>
#include "../unmapped/AppIsland.h"
#include "IMinecraftApp.h"


class DedicatedServer : IMinecraftApp, BedrockEngine::AppIsland {

public:
    ~DedicatedServer(); // _ZN15DedicatedServerD2Ev
    virtual void getPrimaryMinecraft(); // _ZN15DedicatedServer19getPrimaryMinecraftEv
    virtual void getAutomationClient()const; // _ZNK15DedicatedServer19getAutomationClientEv
    virtual bool isEduMode()const; // _ZNK15DedicatedServer9isEduModeEv
    virtual bool isDedicatedServer()const; // _ZNK15DedicatedServer17isDedicatedServerEv
    virtual void onNetworkMaxPlayersChanged(unsigned int); // _ZN15DedicatedServer26onNetworkMaxPlayersChangedEj
    virtual void getGameModule(); // _ZN15DedicatedServer13getGameModuleEv
    virtual void stop(); // _ZN15DedicatedServer4stopEv
    DedicatedServer(); // _ZN15DedicatedServerC2Ev
    void initalizeAppConfigs(); // _ZN15DedicatedServer19initalizeAppConfigsEv
    void initializeLogging(); // _ZN15DedicatedServer17initializeLoggingEv
    void start(std::string const&); // _ZN15DedicatedServer5startERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _forceContentLogEnabled(); // _ZN15DedicatedServer23_forceContentLogEnabledEv
};
