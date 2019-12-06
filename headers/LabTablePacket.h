#pragma once

class LabTablePacket : Packet {

public:
    virtual ~LabTablePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LabTablePacket(void);
    void LabTablePacket(BlockPos const&, LabTableReactionType);
    void LabTablePacket(LabTablePacket::Type, BlockPos const&);
};
