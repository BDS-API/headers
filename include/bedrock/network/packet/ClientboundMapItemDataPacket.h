#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include <vector>
#include "Packet.h"


class ClientboundMapItemDataPacket : Packet {

public:
    ~ClientboundMapItemDataPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    void getScale()const;
//  bool isOfType(ClientboundMapItemDataPacket::Type)const; //TODO: incomplete function definition
    void getMapId()const;
    ClientboundMapItemDataPacket();
    void getDimensionId()const;
    bool isTextureUpdate()const;
    ClientboundMapItemDataPacket(MapItemSavedData &, Level &);
    bool isLocked()const;
    void applyToMap(MapItemSavedData &)const;
//  ClientboundMapItemDataPacket(ActorUniqueID, signed const, std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>> const&, buffer_span<unsigned int>, int, int, int, int, AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition
    void getMapIds()const;
};
