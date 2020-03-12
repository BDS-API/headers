#pragma once

#include "ActiveTransfersManager.h"
#include "NetworkIdentifier.h"
#include <string>


namespace ClientBlobCache {

    namespace Server {

        class TransferBuilder {

        public:
            TransferBuilder(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
            ~TransferBuilder();
            void add(unsigned long, std::string &);
            TransferBuilder();
        };
    }
}
