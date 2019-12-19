#pragma once

class VideoStreamConnectPacket : Packet {

public:
    virtual VideoStreamConnectPacket::~VideoStreamConnectPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    VideoStreamConnectPacket(void);
    VideoStreamConnectPacket(WebSocketPacketData, float, VideoStreamConnectPacket::Action, int, int);
    VideoStreamConnectPacket(VideoStreamConnectPacket::Action);
    VideoStreamConnectPacket(WebSocketPacketData, float, int, int);
};
