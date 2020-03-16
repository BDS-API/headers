#pragma once

#include <string>
#include "../../../unmapped/WebSocketPacketData.h"
#include "Packet.h"


class AutomationClientConnectPacket : public Packet {

public:
    virtual ~AutomationClientConnectPacket(); // _ZN29AutomationClientConnectPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK29AutomationClientConnectPacket5getIdEv
    virtual std::string getName()const; // _ZNK29AutomationClientConnectPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK29AutomationClientConnectPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN29AutomationClientConnectPacket4readER20ReadOnlyBinaryStream
    AutomationClientConnectPacket(); // _ZN29AutomationClientConnectPacketC2Ev
    AutomationClientConnectPacket(WebSocketPacketData); // _ZN29AutomationClientConnectPacketC2E19WebSocketPacketData
};
