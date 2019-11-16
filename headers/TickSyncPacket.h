#pragma once

class TickSyncPacket : Packet {

    virtual void TickSync~TickSyncPacket();
    virtual void TickSync~TickSyncPacket();
    virtual void TickSyncgetId(void)const;
    virtual void _ZNK14TickSyncPacket7getNameB5cxx11Ev;
    virtual void TickSyncwrite(BinaryStream &)const;
    virtual void TickSyncread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
