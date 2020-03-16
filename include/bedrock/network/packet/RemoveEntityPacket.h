#pragma once

#include <string>
#include "EntityServerPacket.h"


class RemoveEntityPacket : public EntityServerPacket {

public:
    virtual ~RemoveEntityPacket(); // _ZN18RemoveEntityPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK18RemoveEntityPacket5getIdEv
    virtual std::string getName()const; // _ZNK18RemoveEntityPacket7getNameB5cxx11Ev
    RemoveEntityPacket(); // _ZN18RemoveEntityPacketC2Ev
    RemoveEntityPacket(EntityContext &); // _ZN18RemoveEntityPacketC2ER13EntityContext
};
