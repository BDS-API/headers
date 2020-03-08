#pragma once

#include "../../../unmapped/WebSocketPacketData"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class VideoStreamConnectPacket : Packet {

public:
    VideoStreamConnectPacket::~VideoStreamConnectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    VideoStreamConnectPacket(void);
    VideoStreamConnectPacket(WebSocketPacketData, float, VideoStreamConnectPacket::Action, int, int);
    VideoStreamConnectPacket(VideoStreamConnectPacket::Action);
    VideoStreamConnectPacket(WebSocketPacketData, float, int, int);
};
