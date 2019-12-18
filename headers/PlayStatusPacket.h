#pragma once

class PlayStatusPacket : Packet {

public:
    virtual ~PlayStatusPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayStatusPacket(void);
    void PlayStatusPacket(PlayStatus);
};
