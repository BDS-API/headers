#pragma once

class MapCreateLockedCopyPacket : Packet {

public:
    virtual ~MapCreateLockedCopyPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MapCreateLockedCopyPacket(void);
    void MapCreateLockedCopyPacket(ActorUniqueID, ActorUniqueID);
    void getOriginalMapId(void)const;
    void getNewMapId(void)const;
};
