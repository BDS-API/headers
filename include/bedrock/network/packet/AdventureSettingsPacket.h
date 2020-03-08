#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/Abilities"
#include "../../io/BinaryStream"
#include "../../../unmapped/AdventureSettings"


class AdventureSettingsPacket : Packet {

public:
    AdventureSettingsPacket::~AdventureSettingsPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AdventureSettingsPacket(AdventureSettingsPacket const&);
    AdventureSettingsPacket(void);
    AdventureSettingsPacket(AdventureSettings const&, Abilities const&, ActorUniqueID, bool);
    void set(AdventureSettingsPacket::Flags, bool);
    void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags, bool);
    void fillIn(AdventureSettings &, Abilities &)const;
    bool isSet(AdventureSettingsPacket::Flags)const;
    bool isSetPermissions(unsigned int const&, AdventureSettingsPacket::PermissionsFlags)const;
    void set(AdventureSettingsPacket::Flags);
    void clear(AdventureSettingsPacket::Flags);
    void toggle(AdventureSettingsPacket::Flags);
    void setPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags);
    void clearPermissions(unsigned int &, AdventureSettingsPacket::PermissionsFlags);
};
