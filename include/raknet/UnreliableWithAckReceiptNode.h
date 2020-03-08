#pragma once



using namespace RakNet::ReliabilityLayer;

class UnreliableWithAckReceiptNode {

public:

    UnreliableWithAckReceiptNode(RakNet::uint24_t, unsigned int, unsigned long);
    UnreliableWithAckReceiptNode(void);
};
