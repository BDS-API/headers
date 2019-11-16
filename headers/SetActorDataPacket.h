#pragma once

class SetActorDataPacket : Packet {

    virtual ~SetActorDataPacket();
    virtual ~SetActorDataPacket();
    virtual void getId(void)const;
    virtual void _ZNK18SetActorDataPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
