#pragma once



using namespace RakNet::ReliabilityLayer;

class DatagramHistoryNode {

public:

    DatagramHistoryNode(RakNet::ReliabilityLayer::MessageNumberNode *, unsigned long);
    DatagramHistoryNode(void);
};
