#pragma once

class LevelSoundEventPacket : Packet {

    virtual ~LevelSoundEventPacket();
    virtual ~LevelSoundEventPacket();
    virtual void getId(void)const;
    virtual void _ZNK21LevelSoundEventPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
