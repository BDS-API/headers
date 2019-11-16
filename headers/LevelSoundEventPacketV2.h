#pragma once

class LevelSoundEventPacketV2 : Packet {

    virtual void LevelSoundEventPacketV2::~LevelSoundEventPacketV2();
    virtual void LevelSoundEventPacketV2::~LevelSoundEventPacketV2();
    virtual void getId(void)const;
    virtual void _ZNK23LevelSoundEventPacketV27getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
