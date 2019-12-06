#pragma once

class MobEffectPacket : Packet {

public:
    virtual ~MobEffectPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MobEffectPacket(void);
    void MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool);
};
