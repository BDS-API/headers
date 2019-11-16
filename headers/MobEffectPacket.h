#pragma once

class MobEffectPacket : Packet {

    virtual ~MobEffectPacket();
    virtual ~MobEffectPacket();
    virtual void getId(void)const;
    virtual void _ZNK15MobEffectPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
