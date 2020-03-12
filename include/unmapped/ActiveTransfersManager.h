#pragma once

#include "NetworkHandler.h"
#include "NetworkIdentifier.h"
#include <string>


namespace ClientBlobCache {

    namespace Server {

        class ActiveTransfersManager {

        public:
            class TransferTracker;

            void tryStartTransfer(NetworkIdentifier const&)const;
            void onPeerDisconnected(NetworkIdentifier const&);
            void updateNetworkConditions(NetworkHandler &);
            void enableCacheFor(NetworkIdentifier const&);
            ~ActiveTransfersManager();
            bool isCacheEnabledFor(NetworkIdentifier const&)const;
            void dropBlobFor(NetworkIdentifier const&, unsigned long);
            void rememberBlob(unsigned long, std::string &);
            void getTrackerFor(NetworkIdentifier const&)const;
            ActiveTransfersManager();
            class TransferTracker {

            public:
                void tryStartTransfer()const;
                TransferTracker(NetworkIdentifier const&, ClientBlobCache::Server::ActiveTransfersManager &);
                void updateNetworkConditions(NetworkHandler &);
                ~TransferTracker();
                void onAckReceived(unsigned long);
            };
        };
    }
}
