#pragma once

#include <string>


namespace ClientBlobCache {

    namespace Server {

        class ActiveTransfersManager {

        public:
            class TransferTracker;

            ActiveTransfersManager(); // _ZN15ClientBlobCache6Server22ActiveTransfersManagerC2Ev
            ~ActiveTransfersManager(); // _ZN15ClientBlobCache6Server22ActiveTransfersManagerD2Ev
            void enableCacheFor(NetworkIdentifier const&); // _ZN15ClientBlobCache6Server22ActiveTransfersManager14enableCacheForERK17NetworkIdentifier
            bool isCacheEnabledFor(NetworkIdentifier const&)const; // _ZNK15ClientBlobCache6Server22ActiveTransfersManager17isCacheEnabledForERK17NetworkIdentifier
            void onPeerDisconnected(NetworkIdentifier const&); // _ZN15ClientBlobCache6Server22ActiveTransfersManager18onPeerDisconnectedERK17NetworkIdentifier
            void tryStartTransfer(NetworkIdentifier const&)const; // _ZNK15ClientBlobCache6Server22ActiveTransfersManager16tryStartTransferERK17NetworkIdentifier
            void getTrackerFor(NetworkIdentifier const&)const; // _ZNK15ClientBlobCache6Server22ActiveTransfersManager13getTrackerForERK17NetworkIdentifier
            void rememberBlob(unsigned long, std::string &); // _ZN15ClientBlobCache6Server22ActiveTransfersManager12rememberBlobEmRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            void dropBlobFor(NetworkIdentifier const&, unsigned long); // _ZN15ClientBlobCache6Server22ActiveTransfersManager11dropBlobForERK17NetworkIdentifierm
            void updateNetworkConditions(NetworkHandler &); // _ZN15ClientBlobCache6Server22ActiveTransfersManager23updateNetworkConditionsER14NetworkHandler
            class TransferTracker {

            public:
                TransferTracker(NetworkIdentifier const&, ClientBlobCache::Server::ActiveTransfersManager &); // _ZN15ClientBlobCache6Server22ActiveTransfersManager15TransferTrackerC2ERK17NetworkIdentifierRS1_
                void onAckReceived(unsigned long); // _ZN15ClientBlobCache6Server22ActiveTransfersManager15TransferTracker13onAckReceivedEm
                void updateNetworkConditions(NetworkHandler &); // _ZN15ClientBlobCache6Server22ActiveTransfersManager15TransferTracker23updateNetworkConditionsER14NetworkHandler
                ~TransferTracker(); // _ZN15ClientBlobCache6Server22ActiveTransfersManager15TransferTrackerD2Ev
                void tryStartTransfer()const; // _ZNK15ClientBlobCache6Server22ActiveTransfersManager15TransferTracker16tryStartTransferEv
            };
        };
    }
}
