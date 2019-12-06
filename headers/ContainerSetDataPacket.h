#pragma once

class ContainerSetDataPacket : Packet {

public:
    virtual ~ContainerSetDataPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ContainerSetDataPacket(ContainerID, int, int);
    void ContainerSetDataPacket(void);
};
