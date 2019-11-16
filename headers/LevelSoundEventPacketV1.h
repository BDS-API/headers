#pragma once

class LevelSoundEventPacketV1 : Packet {

    virtual ~LevelSoundEventPacketV1();
    virtual ~LevelSoundEventPacketV1();
    virtual void getId(void)const;
    virtual void _ZNK23LevelSoundEventPacketV17getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
