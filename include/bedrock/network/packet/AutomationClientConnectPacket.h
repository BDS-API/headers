#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../../unmapped/WebSocketPacketData.h"
#include <string>


class AutomationClientConnectPacket : Packet {

public:
    virtual ~AutomationClientConnectPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AutomationClientConnectPacket();
    AutomationClientConnectPacket(WebSocketPacketData);
};
