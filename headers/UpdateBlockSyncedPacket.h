#pragma once

class UpdateBlockSyncedPacket : UpdateBlockPacket {

    virtual void ~UpdateBlockSyncedPacket();
    virtual void ~UpdateBlockSyncedPacket();
    virtual void getId(void)const;
    virtual void _ZNK23UpdateBlockSyncedPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void Packet::disallowBatching(void)const;
}
