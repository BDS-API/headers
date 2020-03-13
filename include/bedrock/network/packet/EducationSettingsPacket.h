#pragma once

#include <string>
#include "../../../unmapped/EducationLevelSettings.h"
#include "Packet.h"


class EducationSettingsPacket : Packet {

public:
    ~EducationSettingsPacket(); // _ZN23EducationSettingsPacketD2Ev
    virtual void getId()const; // _ZNK23EducationSettingsPacket5getIdEv
    virtual std::string getName()const; // _ZNK23EducationSettingsPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23EducationSettingsPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23EducationSettingsPacket4readER20ReadOnlyBinaryStream
    EducationSettingsPacket(); // _ZN23EducationSettingsPacketC2Ev
    EducationSettingsPacket(EducationLevelSettings); // _ZN23EducationSettingsPacketC2E22EducationLevelSettings
    void getEducationLevelSettings()const; // _ZNK23EducationSettingsPacket25getEducationLevelSettingsEv
};
