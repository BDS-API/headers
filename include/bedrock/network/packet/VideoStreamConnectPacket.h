#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/WebSocketPacketData"
#include "../../io/ReadOnlyBinaryStream"


class VideoStreamConnectPacket : Packet {

public:
    virtual VideoStreamConnectPacket::~VideoStreamConnectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    VideoStreamConnectPacket(void);
    VideoStreamConnectPacket(WebSocketPacketData, float, VideoStreamConnectPacket::Action, int, int);
    VideoStreamConnectPacket(VideoStreamConnectPacket::Action);
    VideoStreamConnectPacket(WebSocketPacketData, float, int, int);
};
