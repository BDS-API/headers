#pragma once



using namespace ClientBlobCache::Server;

class ActiveTransfersManager {

public:

    ActiveTransfersManager(void);
    void enableCacheFor(NetworkIdentifier const&);
    bool isCacheEnabledFor(NetworkIdentifier const&)const;
    void onPeerDisconnected(NetworkIdentifier const&);
    void tryStartTransfer(NetworkIdentifier const&)const;
    void getTrackerFor(NetworkIdentifier const&)const;
    void rememberBlob(unsigned long, std::string &);
    void dropBlobFor(NetworkIdentifier const&, unsigned long);
    void updateNetworkConditions(NetworkHandler &);
};
