#pragma once

#include <string>
#include "../../../unmapped/WebSocketPacketData.h"
#include "Packet.h"


class VideoStreamConnectPacket : public Packet {

public:
    virtual ~VideoStreamConnectPacket(); // _ZN24VideoStreamConnectPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK24VideoStreamConnectPacket5getIdEv
    virtual std::string getName()const; // _ZNK24VideoStreamConnectPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24VideoStreamConnectPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24VideoStreamConnectPacket4readER20ReadOnlyBinaryStream
    VideoStreamConnectPacket(); // _ZN24VideoStreamConnectPacketC2Ev
//    VideoStreamConnectPacket(WebSocketPacketData, float, long, int, int); //TODO: incomplete function definition // _ZN24VideoStreamConnectPacketC2E19WebSocketPacketDatafNS_6ActionEii
//    VideoStreamConnectPacket(long); //TODO: incomplete function definition // _ZN24VideoStreamConnectPacketC2ENS_6ActionE
    VideoStreamConnectPacket(WebSocketPacketData, float, int, int); // _ZN24VideoStreamConnectPacketC2E19WebSocketPacketDatafii
};
