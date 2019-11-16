#pragma once

class SetDisplayObjectivePacket : Packet {

    virtual ~SetDisplayObjectivePacket();
    virtual ~SetDisplayObjectivePacket();
    virtual void getId(void)const;
    virtual void _ZNK25SetDisplayObjectivePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
