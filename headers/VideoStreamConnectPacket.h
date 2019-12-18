#pragma once

class VideoStreamConnectPacket : Packet {

public:
    virtual ~VideoStreamConnectPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void VideoStreamConnectPacket(void);
    void VideoStreamConnectPacket(WebSocketPacketData, float, VideoStreamConnectPacket::Action, int, int);
    void VideoStreamConnectPacket(VideoStreamConnectPacket::Action);
    void VideoStreamConnectPacket(WebSocketPacketData, float, int, int);
};
