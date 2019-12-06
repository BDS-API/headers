#pragma once

class RemoveEntityPacket : EntityServerPacket {

public:
    virtual ~RemoveEntityPacket();
    virtual void getId(void)const;

    void RemoveEntityPacket(void);
    void RemoveEntityPacket(EntityContext &);
};
