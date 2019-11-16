#pragma once

class ShowCreditsPacket : Packet {

    virtual void ShowCreditsPacket::~ShowCreditsPacket();
    virtual void ShowCreditsPacket::~ShowCreditsPacket();
    virtual void getId(void)const;
    virtual void _ZNK17ShowCreditsPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
