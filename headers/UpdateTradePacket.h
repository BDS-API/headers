#pragma once

class UpdateTradePacket : Packet {

    virtual ~UpdateTradePacket();
    virtual ~UpdateTradePacket();
    virtual void getId(void)const;
    virtual void _ZNK17UpdateTradePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
