#pragma once

#include "../../../unmapped/EntityContext"


class RemoveEntityPacket : EntityServerPacket {

public:
    virtual RemoveEntityPacket::~RemoveEntityPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;

    RemoveEntityPacket(void);
    RemoveEntityPacket(EntityContext &);
};
