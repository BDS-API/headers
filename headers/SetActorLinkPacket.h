#pragma once

class SetActorLinkPacket : Packet {

    virtual void SetActorLinkPacket::~SetActorLinkPacket();
    virtual void SetActorLinkPacket::~SetActorLinkPacket();
    virtual void getId(void)const;
    virtual void _ZNK18SetActorLinkPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
