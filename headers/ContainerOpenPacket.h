#pragma once

class ContainerOpenPacket : Packet {

public:
    virtual ~ContainerOpenPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ContainerOpenPacket(ContainerID, ContainerType, BlockPos const&, ActorUniqueID const&);
    void ContainerOpenPacket(void);
};
