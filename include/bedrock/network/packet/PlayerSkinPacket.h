#pragma once

#include "../../../mce/UUID"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/SerializedSkin"
#include "../../io/BinaryStream"


class PlayerSkinPacket : Packet {

public:
    PlayerSkinPacket::~PlayerSkinPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerSkinPacket(void);
    PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
