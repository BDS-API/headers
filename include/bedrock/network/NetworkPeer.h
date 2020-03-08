#pragma once



class NetworkPeer {

public:
    virtual NetworkPeer::~NetworkPeer()
    virtual void update();
    virtual void flush(std::function<void ()(void)> &&);

    NetworkPeer(std::shared_ptr<NetworkPeer>);
};
