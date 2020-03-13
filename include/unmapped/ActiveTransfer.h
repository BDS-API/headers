#pragma once



namespace ClientBlobCache {

    namespace Server {

        class ActiveTransfer {

        public:
            ~ActiveTransfer(); // _ZN15ClientBlobCache6Server14ActiveTransferD2Ev
            ActiveTransfer(ClientBlobCache::Server::ActiveTransfer &&); // _ZN15ClientBlobCache6Server14ActiveTransferC2EOS1_
            ActiveTransfer(); // _ZN15ClientBlobCache6Server14ActiveTransferC2Ev
            ActiveTransfer(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&); // _ZN15ClientBlobCache6Server14ActiveTransferC2ERNS0_22ActiveTransfersManagerERK17NetworkIdentifier
            void onAckReceived(unsigned long); // _ZN15ClientBlobCache6Server14ActiveTransfer13onAckReceivedEm
            void shouldBeSent()const; // _ZNK15ClientBlobCache6Server14ActiveTransfer12shouldBeSentEv
            bool isDone()const; // _ZNK15ClientBlobCache6Server14ActiveTransfer6isDoneEv
        };
    }
}
