#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class CameraPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~CameraPacket();
    virtual void read(ReadOnlyBinaryStream &);
    CameraPacket();
    CameraPacket(ActorUniqueID, ActorUniqueID);
};
