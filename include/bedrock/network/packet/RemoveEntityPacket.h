#pragma once

#include "../../../unmapped/EntityContext"


class RemoveEntityPacket : EntityServerPacket {

public:
    virtual RemoveEntityPacket::~RemoveEntityPacket()
    virtual void getId()const;
    virtual void getName()const;

    RemoveEntityPacket(void);
    RemoveEntityPacket(EntityContext &);
};
