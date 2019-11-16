#pragma once

class SetCommandsEnabledPacket : Packet {

    virtual void SetCommandsEnabledPacket::~SetCommandsEnabledPacket();
    virtual void SetCommandsEnabledPacket::~SetCommandsEnabledPacket();
    virtual void getId(void)const;
    virtual void _ZNK24SetCommandsEnabledPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
