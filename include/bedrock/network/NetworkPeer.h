#pragma once

#include <memory>
#include <functional>


class NetworkPeer {

public:
    virtual void update();
    virtual void flush(std::function<void (void)> &&);
    ~NetworkPeer();
    NetworkPeer(std::shared_ptr<NetworkPeer>);
};
