#pragma once

class HurtArmorPacket : Packet {

public:
    virtual ~HurtArmorPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void HurtArmorPacket(void);
    void HurtArmorPacket(int);
};
