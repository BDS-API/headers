#pragma once

#include "./ActiveTransfer.h"
#include "./ActiveTransfersManager.h"
#include "./NetworkIdentifier.h"


namespace ClientBlobCache::Server {

class ActiveTransfer {

public:

    ~ActiveTransfer();
    ActiveTransfer(ClientBlobCache::Server::ActiveTransfer &&);
    ActiveTransfer();
    ActiveTransfer(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
    void onAckReceived(unsigned long);
    void shouldBeSent()const;
    bool isDone()const;
};

}