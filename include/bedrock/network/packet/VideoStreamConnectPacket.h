#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../../unmapped/WebSocketPacketData.h"


class VideoStreamConnectPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~VideoStreamConnectPacket();
    virtual void read(ReadOnlyBinaryStream &);
    VideoStreamConnectPacket(WebSocketPacketData, float, int, int);
//  VideoStreamConnectPacket(VideoStreamConnectPacket::Action); //TODO: incomplete function definition
//  VideoStreamConnectPacket(WebSocketPacketData, float, VideoStreamConnectPacket::Action, int, int); //TODO: incomplete function definition
    VideoStreamConnectPacket();
};
