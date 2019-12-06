#pragma once

class AddEntityPacket : EntityServerPacket {

public:
    virtual ~AddEntityPacket();
    virtual void getId(void)const;

    void AddEntityPacket(void);
    void AddEntityPacket(EntityContext &);
};
