#pragma once

class AddEntityPacket : EntityServerPacket {

    virtual ~AddEntityPacket();
    virtual ~AddEntityPacket();
    virtual void getId(void)const;
    virtual void _ZNK15AddEntityPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
