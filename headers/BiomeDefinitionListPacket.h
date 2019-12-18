#pragma once

class BiomeDefinitionListPacket : Packet {

public:
    virtual ~BiomeDefinitionListPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void BiomeDefinitionListPacket(void);
    void BiomeDefinitionListPacket(CompoundTag);
};
