#pragma once

class PlaySoundPacket : Packet {

    virtual ~PlaySoundPacket();
    virtual ~PlaySoundPacket();
    virtual void getId(void)const;
    virtual void _ZNK15PlaySoundPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
