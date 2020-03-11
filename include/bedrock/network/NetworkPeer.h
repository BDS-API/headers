#pragma once

#include <functional>
#include <memory>
#include "./NetworkPeer.h"


class NetworkPeer {

public:
    virtual ~NetworkPeer();
    virtual void update();
//  virtual void flush(std::function<void (void)> &&); //TODO: incomplete function definition

    NetworkPeer(std::shared_ptr<NetworkPeer>);
};
