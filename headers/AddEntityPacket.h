#pragma once

class AddEntityPacket : EntityServerPacket {

public:
    virtual ~AddEntityPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;

    void AddEntityPacket(void);
    void AddEntityPacket(EntityContext &);
};
