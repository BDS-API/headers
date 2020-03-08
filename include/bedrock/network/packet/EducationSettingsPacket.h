#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/EducationLevelSettings"
#include "../../io/ReadOnlyBinaryStream"


class EducationSettingsPacket : Packet {

public:
    EducationSettingsPacket::~EducationSettingsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EducationSettingsPacket(void);
    EducationSettingsPacket(EducationLevelSettings);
    void getEducationLevelSettings()const;
};
