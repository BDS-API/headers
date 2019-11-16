#pragma once

class OnScreenTextureAnimationPacket : Packet {

    virtual ~OnScreenTextureAnimationPacket();
    virtual ~OnScreenTextureAnimationPacket();
    virtual void getId(void)const;
    virtual void _ZNK30OnScreenTextureAnimationPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
