#pragma once

class MoveActorAbsolutePacket : Packet {

public:
    virtual ~MoveActorAbsolutePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MoveActorAbsolutePacket(void);
    void MoveActorAbsolutePacket(MoveActorAbsoluteData const&);
};
