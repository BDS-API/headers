#pragma once

class MapInfoRequestPacket : Packet {

public:
    virtual ~MapInfoRequestPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void MapInfoRequestPacket(void);
    void MapInfoRequestPacket(ActorUniqueID);
    void getMapId(void)const;
};
