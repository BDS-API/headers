#pragma once

class AddEntityPacket : EntityServerPacket {

public:
    virtual AddEntityPacket::~AddEntityPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;

    AddEntityPacket(void);
    AddEntityPacket(EntityContext &);
};
