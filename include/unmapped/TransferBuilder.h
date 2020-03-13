#pragma once

#include <string>


namespace ClientBlobCache {

    namespace Server {

        class TransferBuilder {

        public:
            TransferBuilder(); // _ZN15ClientBlobCache6Server15TransferBuilderC2Ev
            TransferBuilder(ClientBlobCache::Server::ActiveTransfersManager &, NetworkIdentifier const&); // _ZN15ClientBlobCache6Server15TransferBuilderC2ERNS0_22ActiveTransfersManagerERK17NetworkIdentifier
            void add(unsigned long, std::string &); // _ZN15ClientBlobCache6Server15TransferBuilder3addEmRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
            ~TransferBuilder(); // _ZN15ClientBlobCache6Server15TransferBuilderD2Ev
        };
    }
}
