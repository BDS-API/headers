#pragma once

#include "../../../unmapped/EntityContext"


class AddEntityPacket : EntityServerPacket {

public:
    virtual AddEntityPacket::~AddEntityPacket()
    virtual void getId()const;
    virtual void getName()const;

    AddEntityPacket(void);
    AddEntityPacket(EntityContext &);
};
