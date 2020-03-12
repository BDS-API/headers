#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../../mce/UUID.h"
#include "../../../unmapped/SerializedSkin.h"
#include "Packet.h"


class PlayerSkinPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~PlayerSkinPacket();
    virtual void getId()const;
    PlayerSkinPacket();
    PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
