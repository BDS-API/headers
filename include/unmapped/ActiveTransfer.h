#pragma once



namespace ClientBlobCache {

    namespace Server {

        class ActiveTransfer {

        public:
            void onAckReceived(unsigned long);
            ActiveTransfer(ClientBlobCache::Server::ActiveTransfer &&);
            bool isDone()const;
            ActiveTransfer(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&);
            void shouldBeSent()const;
            ~ActiveTransfer();
            ActiveTransfer();
        };
    }
}
