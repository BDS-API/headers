#pragma once

class EducationSettingsPacket : Packet {

    virtual void EducationSettingsPacket::~EducationSettingsPacket();
    virtual void EducationSettingsPacket::~EducationSettingsPacket();
    virtual void getId(void)const;
    virtual void _ZNK23EducationSettingsPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
