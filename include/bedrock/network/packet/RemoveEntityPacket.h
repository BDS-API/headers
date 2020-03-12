#pragma once

#include "../../../unmapped/EntityContext.h"
#include "EntityServerPacket.h"


class RemoveEntityPacket : EntityServerPacket {

public:
    ~RemoveEntityPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    RemoveEntityPacket();
    RemoveEntityPacket(EntityContext &);
};
