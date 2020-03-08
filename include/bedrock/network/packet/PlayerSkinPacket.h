#pragma once

#include "../../io/BinaryStream"
#include "../../../mce/UUID"
#include "../../../unmapped/SerializedSkin"
#include "../../io/ReadOnlyBinaryStream"


class PlayerSkinPacket : Packet {

public:
    virtual PlayerSkinPacket::~PlayerSkinPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerSkinPacket(void);
    PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
