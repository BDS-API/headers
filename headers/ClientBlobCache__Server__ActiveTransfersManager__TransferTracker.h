#pragma once

class ClientBlobCache::Server::ActiveTransfersManager::TransferTracker {

public:

    void TransferTracker(NetworkIdentifier const&, ClientBlobCache::Server::ActiveTransfersManager&);
    void onAckReceived(unsigned long);
    void updateNetworkConditions(NetworkHandler &);
    void tryStartTransfer(void)const;
};
