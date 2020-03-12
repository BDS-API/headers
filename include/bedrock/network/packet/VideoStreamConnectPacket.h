#pragma once

#include <string>
#include "../../../unmapped/WebSocketPacketData.h"
#include "Packet.h"


class VideoStreamConnectPacket : Packet {

public:
    ~VideoStreamConnectPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
//  VideoStreamConnectPacket(WebSocketPacketData, float, VideoStreamConnectPacket::Action, int, int); //TODO: incomplete function definition
    VideoStreamConnectPacket();
//  VideoStreamConnectPacket(VideoStreamConnectPacket::Action); //TODO: incomplete function definition
    VideoStreamConnectPacket(WebSocketPacketData, float, int, int);
};
