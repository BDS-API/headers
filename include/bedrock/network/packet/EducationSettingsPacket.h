#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../../unmapped/EducationLevelSettings.h"
#include <string>


class EducationSettingsPacket : Packet {

public:
    virtual ~EducationSettingsPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EducationSettingsPacket();
    EducationSettingsPacket(EducationLevelSettings);
    void getEducationLevelSettings()const;
};
