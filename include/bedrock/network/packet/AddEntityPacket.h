#pragma once

#include <string>
#include "EntityServerPacket.h"


class AddEntityPacket : EntityServerPacket {

public:
    ~AddEntityPacket(); // _ZN15AddEntityPacketD2Ev
    virtual void getId()const; // _ZNK15AddEntityPacket5getIdEv
    virtual std::string getName()const; // _ZNK15AddEntityPacket7getNameB5cxx11Ev
    AddEntityPacket(); // _ZN15AddEntityPacketC2Ev
    AddEntityPacket(EntityContext &); // _ZN15AddEntityPacketC2ER13EntityContext
};
