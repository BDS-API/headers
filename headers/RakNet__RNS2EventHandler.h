#pragma once

class RakNet::RNS2EventHandler {

    virtual void ~RNS2EventHandler();
    virtual void ~RNS2EventHandler();
    virtual void Startup(unsigned int, RakNet::SocketDescriptor *, unsigned int, int);
    virtual void InitializeSecurity(char const*, char const*, bool);
    virtual void DisableSecurity(void);
}
