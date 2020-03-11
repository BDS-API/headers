#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../../unmapped/WebSocketPacketData.h"
#include <string>


class VideoStreamConnectPacket : Packet {

public:
    virtual ~VideoStreamConnectPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    VideoStreamConnectPacket();
//  VideoStreamConnectPacket(WebSocketPacketData, float, VideoStreamConnectPacket::Action, int, int); //TODO: incomplete function definition
//  VideoStreamConnectPacket(VideoStreamConnectPacket::Action); //TODO: incomplete function definition
    VideoStreamConnectPacket(WebSocketPacketData, float, int, int);
};
