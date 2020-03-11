#pragma once

#include "./EntityServerPacket.h"
#include "../../../unmapped/EntityContext.h"
#include <string>


class AddEntityPacket : EntityServerPacket {

public:
    virtual ~AddEntityPacket();
    virtual void getId()const;
    virtual std::string getName()const;

    AddEntityPacket();
    AddEntityPacket(EntityContext &);
};
