#pragma once

#include <memory>
#include "./NetworkPeer.h"
#include "../Scheduler.h"
#include <functional>
#include <string>


class BatchedNetworkPeer : NetworkPeer {

public:
    virtual ~BatchedNetworkPeer();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void receivePacket(std::string &);
    virtual void getNetworkStatus();
    virtual void update();
//  virtual void flush(std::function<void (void)> &&); //TODO: incomplete function definition

    BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, Scheduler &);
    void setAsyncEnabled(bool);
    void getCompressibleState(unsigned long)const;
    void _startSendTask();
};
