#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/AdventureSettings"


class AdventureSettingsPacket : Packet {

public:
    virtual AdventureSettingsPacket::~AdventureSettingsPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
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
