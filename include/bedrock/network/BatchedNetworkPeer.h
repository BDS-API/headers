#pragma once

#include "../Scheduler"


class BatchedNetworkPeer : NetworkPeer {

public:
    virtual BatchedNetworkPeer::~BatchedNetworkPeer()
    virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility);
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();
    virtual void update();
    virtual void flush(std::function<void ()(void)> &&);

    BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, Scheduler &);
    void setAsyncEnabled(bool);
    void getCompressibleState(unsigned long)const;
    void _startSendTask();
};
