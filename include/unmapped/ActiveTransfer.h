#pragma once



using namespace ClientBlobCache::Server;

class ActiveTransfer {

public:

    ActiveTransfer(ClientBlobCache::Server::ActiveTransfer&&);
    ActiveTransfer(void);
    ActiveTransfer(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
    void onAckReceived(unsigned long);
    void shouldBeSent(void)const;
    bool isDone(void)const;
};
