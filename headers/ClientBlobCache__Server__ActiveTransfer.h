#pragma once

class ClientBlobCache::Server::ActiveTransfer {

public:

    void ActiveTransfer(ClientBlobCache::Server::ActiveTransfer&&);
    void ActiveTransfer(void);
    void ActiveTransfer(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
    void onAckReceived(unsigned long);
    void shouldBeSent(void)const;
    bool isDone(void)const;
};
