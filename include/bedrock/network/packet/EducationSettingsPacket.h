#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/EducationLevelSettings.h"
#include "Packet.h"


class EducationSettingsPacket : Packet {

public:
    ~EducationSettingsPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    EducationSettingsPacket();
    EducationSettingsPacket(EducationLevelSettings);
    void getEducationLevelSettings()const;
};
