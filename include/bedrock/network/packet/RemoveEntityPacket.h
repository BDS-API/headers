#pragma once

#include "./EntityServerPacket.h"
#include "../../../unmapped/EntityContext.h"
#include <string>


class RemoveEntityPacket : EntityServerPacket {

public:
    virtual ~RemoveEntityPacket();
    virtual void getId()const;
    virtual std::string getName()const;

    RemoveEntityPacket();
    RemoveEntityPacket(EntityContext &);
};
