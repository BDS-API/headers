#pragma once

class CommandOutputPacket : Packet {

    virtual void CommandOutput~CommandOutputPacket();
    virtual void CommandOutput~CommandOutputPacket();
    virtual void CommandOutputgetId(void)const;
    virtual void _ZNK19CommandOutputPacket7getNameB5cxx11Ev;
    virtual void CommandOutputwrite(BinaryStream &)const;
    virtual void CommandOutputread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
