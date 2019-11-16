#pragma once

class SettingsCommandPacket : Packet {

    virtual ~SettingsCommandPacket();
    virtual ~SettingsCommandPacket();
    virtual void getId(void)const;
    virtual void _ZNK21SettingsCommandPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
