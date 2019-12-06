#pragma once

class CommandBlockUpdatePacket : Packet {

public:
    virtual ~CommandBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void CommandBlockUpdatePacket(BlockSource &, CommandBlockActor const&);
    void CommandBlockUpdatePacket(ActorRuntimeID, BaseCommandBlock const&);
    void CommandBlockUpdatePacket(void);
};
