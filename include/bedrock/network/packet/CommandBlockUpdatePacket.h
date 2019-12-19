#pragma once

class CommandBlockUpdatePacket : Packet {

public:
    virtual CommandBlockUpdatePacket::~CommandBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&);
    CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&);
    CommandBlockUpdatePacket(void);
};
