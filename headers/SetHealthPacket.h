#pragma once

class SetHealthPacket : Packet {

    virtual ~SetHealthPacket();
    virtual ~SetHealthPacket();
    virtual void getId(void)const;
    virtual void _ZNK15SetHealthPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
