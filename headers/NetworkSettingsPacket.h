#pragma once

class NetworkSettingsPacket : Packet {

    virtual ~NetworkSettingsPacket();
    virtual ~NetworkSettingsPacket();
    virtual void getId(void)const;
    virtual void _ZNK21NetworkSettingsPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
