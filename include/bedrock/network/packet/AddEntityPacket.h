#pragma once

#include "EntityServerPacket.h"
#include <string>


class AddEntityPacket : EntityServerPacket {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    ~AddEntityPacket();
    AddEntityPacket();
    AddEntityPacket(EntityContext &);
};
