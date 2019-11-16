#pragma once

class RemoveObjectivePacket : Packet {

    virtual void RemoveObjectivePacket::~RemoveObjectivePacket();
    virtual void RemoveObjectivePacket::~RemoveObjectivePacket();
    virtual void getId(void)const;
    virtual void _ZNK21RemoveObjectivePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
