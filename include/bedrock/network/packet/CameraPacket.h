#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../io/ReadOnlyBinaryStream"


class CameraPacket : Packet {

public:
    CameraPacket::~CameraPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CameraPacket(void);
    CameraPacket(ActorUniqueID, ActorUniqueID);
};
