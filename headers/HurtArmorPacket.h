#pragma once

class HurtArmorPacket : Packet {

    virtual ~HurtArmorPacket();
    virtual ~HurtArmorPacket();
    virtual void getId(void)const;
    virtual void _ZNK15HurtArmorPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
