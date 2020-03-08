#pragma once

#include "../../../unmapped/EntityContext"


class RemoveEntityPacket : EntityServerPacket {

public:
    RemoveEntityPacket::~RemoveEntityPacket()
    virtual void getId()const;
    virtual void getName()const;

    RemoveEntityPacket(void);
    RemoveEntityPacket(EntityContext &);
};
