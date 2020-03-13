#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class AdventureSettingsPacket : Packet {

public:
    ~AdventureSettingsPacket(); // _ZN23AdventureSettingsPacketD2Ev
    virtual void getId()const; // _ZNK23AdventureSettingsPacket5getIdEv
    virtual std::string getName()const; // _ZNK23AdventureSettingsPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23AdventureSettingsPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23AdventureSettingsPacket4readER20ReadOnlyBinaryStream
    AdventureSettingsPacket(AdventureSettingsPacket const&); // _ZN23AdventureSettingsPacketC2ERKS_
    AdventureSettingsPacket(); // _ZN23AdventureSettingsPacketC2Ev
    AdventureSettingsPacket(AdventureSettings const&, Abilities const&, ActorUniqueID, bool); // _ZN23AdventureSettingsPacketC2ERK17AdventureSettingsRK9Abilities13ActorUniqueIDb
//  void set(AdventureSettingsPacket::Flags, bool); //TODO: incomplete function definition // _ZN23AdventureSettingsPacket3setENS_5FlagsEb
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags, bool); //TODO: incomplete function definition // _ZN23AdventureSettingsPacket14setPermissionsERjNS_16PermissionsFlagsEb
    void fillIn(AdventureSettings &, Abilities &)const; // _ZNK23AdventureSettingsPacket6fillInER17AdventureSettingsR9Abilities
//  bool isSet(AdventureSettingsPacket::Flags)const; //TODO: incomplete function definition // _ZNK23AdventureSettingsPacket5isSetENS_5FlagsE
//  bool isSetPermissions(unsigned int const&, AdventureSettingsPacket::PermissionsFlags)const; //TODO: incomplete function definition // _ZNK23AdventureSettingsPacket16isSetPermissionsERKjNS_16PermissionsFlagsE
//  void set(AdventureSettingsPacket::Flags); //TODO: incomplete function definition // _ZN23AdventureSettingsPacket3setENS_5FlagsE
//  void clear(AdventureSettingsPacket::Flags); //TODO: incomplete function definition // _ZN23AdventureSettingsPacket5clearENS_5FlagsE
//  void toggle(AdventureSettingsPacket::Flags); //TODO: incomplete function definition // _ZN23AdventureSettingsPacket6toggleENS_5FlagsE
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition // _ZN23AdventureSettingsPacket14setPermissionsERjNS_16PermissionsFlagsE
//  void clearPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition // _ZN23AdventureSettingsPacket16clearPermissionsERjNS_16PermissionsFlagsE
};
