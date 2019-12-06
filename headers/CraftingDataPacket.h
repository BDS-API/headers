#pragma once

class CraftingDataPacket : Packet {

public:
    virtual ~CraftingDataPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void CraftingDataPacket(void);
};
