#pragma once

class SetActorLinkPacket : Packet {

public:
    virtual ~SetActorLinkPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetActorLinkPacket(void);
    void SetActorLinkPacket(ActorLink const&);
};
