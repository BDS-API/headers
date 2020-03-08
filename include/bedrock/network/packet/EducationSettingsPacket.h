#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/EducationLevelSettings"


class EducationSettingsPacket : Packet {

public:
    virtual EducationSettingsPacket::~EducationSettingsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EducationSettingsPacket(void);
    EducationSettingsPacket(EducationLevelSettings);
    void getEducationLevelSettings()const;
};
