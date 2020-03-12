#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/Abilities.h"
#include "../../../unmapped/AdventureSettings.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class AdventureSettingsPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~AdventureSettingsPacket();
    virtual void getId()const;
    virtual std::string getName()const;
//  void set(AdventureSettingsPacket::Flags, bool); //TODO: incomplete function definition
    void fillIn(AdventureSettings &, Abilities &)const;
    AdventureSettingsPacket(AdventureSettingsPacket const&);
//  bool isSetPermissions(unsigned int const&, AdventureSettingsPacket::PermissionsFlags)const; //TODO: incomplete function definition
//  void clear(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void toggle(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void clearPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition
    AdventureSettingsPacket(AdventureSettings const&, Abilities const&, ActorUniqueID, bool);
//  void set(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags, bool); //TODO: incomplete function definition
//  bool isSet(AdventureSettingsPacket::Flags)const; //TODO: incomplete function definition
    AdventureSettingsPacket();
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition
};
