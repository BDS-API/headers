#pragma once

#include <string>
#include "Packet.h"
#include "../../../mce/UUID.h"


class PlayerSkinPacket : Packet {

public:
    ~PlayerSkinPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    PlayerSkinPacket();
    PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
