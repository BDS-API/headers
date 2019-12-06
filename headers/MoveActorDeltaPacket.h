#pragma once

class MoveActorDeltaPacket : Packet {

public:
    virtual ~MoveActorDeltaPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MoveActorDeltaPacket(void);
    void MoveActorDeltaPacket(MoveActorDeltaData const&);
};
