#pragma once

class ClientBlobCache::Server::TransferBuilder {

public:

    void TransferBuilder(void);
    void TransferBuilder(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
    void add(unsigned long, std::string &);
};
