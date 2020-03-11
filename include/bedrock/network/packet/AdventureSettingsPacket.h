#pragma once

#include "../../../unmapped/Abilities.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./AdventureSettingsPacket.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/AdventureSettings.h"
#include <string>


class AdventureSettingsPacket : Packet {

public:
    virtual ~AdventureSettingsPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AdventureSettingsPacket(AdventureSettingsPacket const&);
    AdventureSettingsPacket();
    AdventureSettingsPacket(AdventureSettings const&, Abilities const&, ActorUniqueID, bool);
//  void set(AdventureSettingsPacket::Flags, bool); //TODO: incomplete function definition
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags, bool); //TODO: incomplete function definition
    void fillIn(AdventureSettings &, Abilities &)const;
//  bool isSet(AdventureSettingsPacket::Flags)const; //TODO: incomplete function definition
//  bool isSetPermissions(unsigned int const&, AdventureSettingsPacket::PermissionsFlags)const; //TODO: incomplete function definition
//  void set(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void clear(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void toggle(AdventureSettingsPacket::Flags); //TODO: incomplete function definition
//  void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition
//  void clearPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags); //TODO: incomplete function definition
};
