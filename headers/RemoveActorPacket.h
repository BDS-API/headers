#pragma once

class RemoveActorPacket : Packet {

public:
    virtual ~RemoveActorPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void RemoveActorPacket(void);
    void RemoveActorPacket(ActorUniqueID);
};
