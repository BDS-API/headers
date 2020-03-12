#pragma once

#include <string>


namespace ClientBlobCache {

    namespace Server {

        class TransferBuilder {

        public:
            void add(unsigned long, std::string &);
            ~TransferBuilder();
            TransferBuilder(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
            TransferBuilder();
        };
    }
}
