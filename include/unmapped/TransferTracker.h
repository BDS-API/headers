#pragma once



using namespace ClientBlobCache::Server::ActiveTransfersManager;

class TransferTracker {

public:

    TransferTracker(NetworkIdentifier const&, ClientBlobCache::Server::ActiveTransfersManager&);
    void onAckReceived(unsigned long);
    void updateNetworkConditions(NetworkHandler &);
    void tryStartTransfer()const;
};
