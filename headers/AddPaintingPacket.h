#pragma once

class AddPaintingPacket : Packet {

public:
    virtual ~AddPaintingPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AddPaintingPacket(void);
    void AddPaintingPacket(Painting const&);
};
