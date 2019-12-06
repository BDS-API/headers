#pragma once

class LecternUpdatePacket : Packet {

public:
    virtual ~LecternUpdatePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void LecternUpdatePacket(void);
};
