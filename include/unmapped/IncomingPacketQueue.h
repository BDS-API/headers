#pragma once

#include "../bedrock/network/NetEventCallback"


using namespace NetworkHandler;

class IncomingPacketQueue {

public:

    IncomingPacketQueue(NetEventCallback &);
};
