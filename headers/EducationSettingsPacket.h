#pragma once

class EducationSettingsPacket : Packet {

public:
    virtual ~EducationSettingsPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void EducationSettingsPacket(void);
    void EducationSettingsPacket(EducationLevelSettings);
    void getEducationLevelSettings(void)const;
};
