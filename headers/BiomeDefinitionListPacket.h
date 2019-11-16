#pragma once

class BiomeDefinitionListPacket : Packet {

    virtual void BiomeDefinitionList~BiomeDefinitionListPacket();
    virtual void BiomeDefinitionList~BiomeDefinitionListPacket();
    virtual void BiomeDefinitionListgetId(void)const;
    virtual void _ZNK25BiomeDefinitionListPacket7getNameB5cxx11Ev;
    virtual void BiomeDefinitionListwrite(BinaryStream &)const;
    virtual void BiomeDefinitionListread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
