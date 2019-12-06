#pragma once

class SetLastHurtByPacket : Packet {

public:
    virtual ~SetLastHurtByPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetLastHurtByPacket(void);
    void SetLastHurtByPacket(ActorType);
};
