#pragma once

#include "ActiveTransfersManager.h"
#include "NetworkIdentifier.h"


namespace ClientBlobCache {

    namespace Server {

        class ActiveTransfer {

        public:
            bool isDone()const;
            void onAckReceived(unsigned long);
            ActiveTransfer(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
            ~ActiveTransfer();
            ActiveTransfer();
            void shouldBeSent()const;
            ActiveTransfer(ClientBlobCache::Server::ActiveTransfer &&);
        };
    }
}
