#pragma once

class CommandRequestPacket : Packet {

    virtual void CommandRequest~CommandRequestPacket();
    virtual void CommandRequest~CommandRequestPacket();
    virtual void CommandRequestgetId(void)const;
    virtual void _ZNK20CommandRequestPacket7getNameB5cxx11Ev;
    virtual void CommandRequestwrite(BinaryStream &)const;
    virtual void CommandRequestread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
