#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/UniqueId"
#include "../../io/BinaryStream"
#include "../../../unmapped/MapDecoration"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/MapItemSavedData"
#include "../../../unmapped/Dimension"
#include "../../level/Level"


class ClientboundMapItemDataPacket : Packet {

public:
    ClientboundMapItemDataPacket::~ClientboundMapItemDataPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ClientboundMapItemDataPacket(ActorUniqueID, signed char, std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>, std::allocator<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>>> const&, buffer_span<unsigned int>, int, int, int, int, AutomaticID<Dimension, int>, bool);
    ClientboundMapItemDataPacket(void);
    ClientboundMapItemDataPacket(MapItemSavedData &, Level &);
    bool isOfType(ClientboundMapItemDataPacket::Type)const;
    void getMapId()const;
    void getMapIds()const;
    void applyToMap(MapItemSavedData &)const;
    bool isTextureUpdate()const;
    void getScale()const;
    void getDimensionId()const;
    bool isLocked()const;
};
