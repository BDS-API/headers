#pragma once

class StructureBlockUpdatePacket : Packet {

public:
    virtual ~StructureBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StructureBlockUpdatePacket(void);
    void StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool);
};
