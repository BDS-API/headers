#pragma once

class LabTablePacket : Packet {

public:
    virtual LabTablePacket::~LabTablePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LabTablePacket(void);
    LabTablePacket(BlockPos const&, LabTableReactionType);
    LabTablePacket(LabTablePacket::Type, BlockPos const&);
};
