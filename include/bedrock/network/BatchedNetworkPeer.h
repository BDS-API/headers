#pragma once

#include <string>
#include <memory>
#include "NetworkPeer.h"
#include <functional>


class BatchedNetworkPeer : NetworkPeer {

public:
    class DataCallback;

    virtual void getNetworkStatus();
    virtual void update();
    ~BatchedNetworkPeer();
    virtual void flush(std::function<void (void)> &&);
//  virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
    virtual void receivePacket(std::string &);
    void getCompressibleState(unsigned long)const;
    void setAsyncEnabled(bool);
    void _startSendTask();
    BatchedNetworkPeer(std::shared_ptr<NetworkPeer>, Scheduler &);
    class DataCallback {

    public:
        ~DataCallback();
        DataCallback();
        DataCallback(BatchedNetworkPeer::DataCallback &&);
    };
};
