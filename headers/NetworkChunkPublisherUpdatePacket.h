#pragma once

class NetworkChunkPublisherUpdatePacket : Packet {

public:
    virtual ~NetworkChunkPublisherUpdatePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void NetworkChunkPublisherUpdatePacket(void);
    void NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int);
};
