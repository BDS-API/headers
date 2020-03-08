#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"


class CameraPacket : Packet {

public:
    virtual CameraPacket::~CameraPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CameraPacket(void);
    CameraPacket(ActorUniqueID, ActorUniqueID);
};
