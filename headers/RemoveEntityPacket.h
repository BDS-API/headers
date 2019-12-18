#pragma once

class RemoveEntityPacket : EntityServerPacket {

public:
    virtual ~RemoveEntityPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;

    void RemoveEntityPacket(void);
    void RemoveEntityPacket(EntityContext &);
};
