#pragma once

#include <memory>
#include <functional>


class NetworkPeer {

public:
    ~NetworkPeer(); // _ZN11NetworkPeerD2Ev
    virtual void update(); // _ZN11NetworkPeer6updateEv
    virtual void flush(std::function<void (void)> &&); // _ZN11NetworkPeer5flushEOSt8functionIFvvEE
    NetworkPeer(std::shared_ptr<NetworkPeer>); // _ZN11NetworkPeerC2ESt10shared_ptrIS_E
};
