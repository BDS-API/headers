#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class AdventureSettingsPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~AdventureSettingsPacket();
    virtual void read(ReadOnlyBinaryStream &);
//  void set(AdventureSettingsPacket::Flags, bool); //TODO: incomplete function definition
    void fillIn(AdventureSettings &, Abilities &)const;
//  void set(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void clearPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition
    AdventureSettingsPacket();
//  bool isSetPermissions(unsigned int const&, AdventureSettingsPacket::PermissionsFlags)const; //TODO: incomplete function definition
    AdventureSettingsPacket(AdventureSettingsPacket const&);
//  void clear(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags, bool); //TODO: incomplete function definition
    AdventureSettingsPacket(AdventureSettings const&, Abilities const&, ActorUniqueID, bool);
//  bool isSet(AdventureSettingsPacket::Flags)const; //TODO: incomplete function definition
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition
//  void toggle(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
};
