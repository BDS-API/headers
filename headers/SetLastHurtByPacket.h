#pragma once

class SetLastHurtByPacket : Packet {

    virtual ~SetLastHurtByPacket();
    virtual ~SetLastHurtByPacket();
    virtual void getId(void)const;
    virtual void _ZNK19SetLastHurtByPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
