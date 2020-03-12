#pragma once

#include <string>


namespace ClientBlobCache {

    namespace Server {

        class ActiveTransfersManager {

        public:
            class TransferTracker;

            ActiveTransfersManager();
            ~ActiveTransfersManager();
            void getTrackerFor(NetworkIdentifier const&)const;
            void updateNetworkConditions(NetworkHandler &);
            bool isCacheEnabledFor(NetworkIdentifier const&)const;
            void tryStartTransfer(NetworkIdentifier const&)const;
            void onPeerDisconnected(NetworkIdentifier const&);
            void enableCacheFor(NetworkIdentifier const&);
            void dropBlobFor(NetworkIdentifier const&, unsigned long);
            void rememberBlob(unsigned long, std::string &);
            class TransferTracker {

            public:
                void tryStartTransfer()const;
                ~TransferTracker();
                void onAckReceived(unsigned long);
                TransferTracker(NetworkIdentifier const&, ClientBlobCache::Server::ActiveTransfersManager &);
                void updateNetworkConditions(NetworkHandler &);
            };
        };
    }
}
