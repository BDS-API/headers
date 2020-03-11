#pragma once

#include "../../../mce/UUID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../../unmapped/SerializedSkin.h"
#include <string>


class PlayerSkinPacket : Packet {

public:
    virtual ~PlayerSkinPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerSkinPacket();
    PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
