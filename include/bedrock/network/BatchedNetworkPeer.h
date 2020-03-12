#pragma once

#include <string>
#include <functional>
#include <memory>
#include "../Scheduler.h"
#include "NetworkPeer.h"


class BatchedNetworkPeer : NetworkPeer {

public:
    class DataCallback;

    virtual void update();
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void getNetworkStatus();
    virtual void receivePacket(std::string &);
    ~BatchedNetworkPeer();
    virtual void flush(std::function<void (void)> &&);
    void setAsyncEnabled(bool);
    void getCompressibleState(unsigned long)const;
    BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, Scheduler &);
    void _startSendTask();
    class DataCallback {

    public:
        DataCallback();
        ~DataCallback();
        DataCallback(BatchedNetworkPeer::DataCallback &&);
    };
};
