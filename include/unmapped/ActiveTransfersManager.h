#pragma once

#include "./NetworkIdentifier.h"
#include "./NetworkHandler.h"
#include <string>


namespace ClientBlobCache::Server {

class ActiveTransfersManager {

public:

    ActiveTransfersManager();
    ~ActiveTransfersManager();
    void enableCacheFor(NetworkIdentifier const&);
    bool isCacheEnabledFor(NetworkIdentifier const&)const;
    void onPeerDisconnected(NetworkIdentifier const&);
    void tryStartTransfer(NetworkIdentifier const&)const;
    void getTrackerFor(NetworkIdentifier const&)const;
    void rememberBlob(unsigned long, std::string &);
    void dropBlobFor(NetworkIdentifier const&, unsigned long);
    void updateNetworkConditions(NetworkHandler &);
};

}