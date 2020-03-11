#pragma once

#include "./ActiveTransfersManager.h"
#include "./NetworkIdentifier.h"
#include "./NetworkHandler.h"


namespace ClientBlobCache::Server::ActiveTransfersManager {

class TransferTracker {

public:

    TransferTracker(NetworkIdentifier const&, ClientBlobCache::Server::ActiveTransfersManager &);
    void onAckReceived(unsigned long);
    void updateNetworkConditions(NetworkHandler &);
    ~TransferTracker();
    void tryStartTransfer()const;
};

}