#pragma once

class StopSoundPacket : Packet {

    virtual void StopSoundPacket::~StopSoundPacket();
    virtual void StopSoundPacket::~StopSoundPacket();
    virtual void getId(void)const;
    virtual void _ZNK15StopSoundPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
