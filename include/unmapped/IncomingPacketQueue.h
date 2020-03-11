#pragma once

#include "../bedrock/network/NetEventCallback.h"


namespace NetworkHandler {

class IncomingPacketQueue {

public:

    IncomingPacketQueue(NetEventCallback &);
};

}