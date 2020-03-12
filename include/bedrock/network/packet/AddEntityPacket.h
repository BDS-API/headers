#pragma once

#include "../../../unmapped/EntityContext.h"
#include "EntityServerPacket.h"


class AddEntityPacket : EntityServerPacket {

public:
    ~AddEntityPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    AddEntityPacket();
    AddEntityPacket(EntityContext &);
};
