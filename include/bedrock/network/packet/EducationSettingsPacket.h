#pragma once

class EducationSettingsPacket : Packet {

public:
    virtual EducationSettingsPacket::~EducationSettingsPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EducationSettingsPacket(void);
    EducationSettingsPacket(EducationLevelSettings);
    void getEducationLevelSettings(void)const;
};
