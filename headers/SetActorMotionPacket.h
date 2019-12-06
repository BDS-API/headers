#pragma once

class SetActorMotionPacket : Packet {

public:
    virtual ~SetActorMotionPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetActorMotionPacket(void);
    void SetActorMotionPacket(Actor const&);
};
