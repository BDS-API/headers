#pragma once

#include <string>
#include "../../../unmapped/EducationLevelSettings.h"
#include "Packet.h"


class EducationSettingsPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~EducationSettingsPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    void getEducationLevelSettings()const;
    EducationSettingsPacket();
    EducationSettingsPacket(EducationLevelSettings);
};
