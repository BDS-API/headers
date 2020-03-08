#pragma once



using namespace ClientBlobCache::Server;

class TransferBuilder {

public:

    TransferBuilder(void);
    TransferBuilder(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
    void add(unsigned long, std::string &);
};
