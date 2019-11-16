#pragma once

class BiomeDefinitionListPacket : Packet {

    virtual ~BiomeDefinitionListPacket();
    virtual ~BiomeDefinitionListPacket();
    virtual void getId(void)const;
    virtual void _ZNK25BiomeDefinitionListPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
