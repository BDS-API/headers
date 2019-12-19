#pragma once

class UpdateBlockPropertiesPacket : Packet {

public:
    virtual UpdateBlockPropertiesPacket::~UpdateBlockPropertiesPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPropertiesPacket(void);
    UpdateBlockPropertiesPacket(BlockDefinitionGroup const&);
};
