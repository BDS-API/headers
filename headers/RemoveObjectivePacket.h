#pragma once

class RemoveObjectivePacket : Packet {

public:
    virtual ~RemoveObjectivePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void RemoveObjectivePacket(void);
    void RemoveObjectivePacket(Objective const&);
};
