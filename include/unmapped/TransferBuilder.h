#pragma once

#include "./ActiveTransfersManager.h"
#include "./NetworkIdentifier.h"
#include <string>


namespace ClientBlobCache::Server {

class TransferBuilder {

public:

    TransferBuilder();
    TransferBuilder(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
    void add(unsigned long, std::string &);
    ~TransferBuilder();
};

}