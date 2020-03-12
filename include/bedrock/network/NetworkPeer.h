#pragma once

#include <functional>
#include <memory>


class NetworkPeer {

public:
    ~NetworkPeer();
    virtual void update();
    virtual void flush(std::function<void (void)> &&);
    NetworkPeer(std::shared_ptr<NetworkPeer>);
};
