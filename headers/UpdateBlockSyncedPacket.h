#pragma once

class UpdateBlockSyncedPacket : UpdateBlockPacket {

    virtual ~UpdateBlockSyncedPacket();
    virtual ~UpdateBlockSyncedPacket();
    virtual void getId(void)const;
    virtual void _ZNK23UpdateBlockSyncedPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
