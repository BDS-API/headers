#pragma once

class UpdateBlockPacket : Packet {

    virtual ~UpdateBlockPacket();
    virtual ~UpdateBlockPacket();
    virtual void getId(void)const;
    virtual void _ZNK17UpdateBlockPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
