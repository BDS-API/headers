#pragma once

class NetworkPeer {

public:
    virtual ~NetworkPeer();
    virtual void update(void);
    virtual void flush(std::function<void ()(void)> &&);

    void NetworkPeer(std::shared_ptr<NetworkPeer>);
};
