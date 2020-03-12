#pragma once

#include "EntityServerPacket.h"
#include <string>


class RemoveEntityPacket : EntityServerPacket {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    ~RemoveEntityPacket();
    RemoveEntityPacket();
    RemoveEntityPacket(EntityContext &);
};
