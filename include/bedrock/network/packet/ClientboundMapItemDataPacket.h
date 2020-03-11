#pragma once

#include <utility>
#include "../../io/BinaryStream.h"
#include "../../../unmapped/MapItemSavedData.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/MapDecoration.h"
#include "../../../unmapped/UniqueId.h"
#include <memory>
#include "../../../unmapped/Dimension.h"
#include "../../level/Level.h"
#include "./Packet.h"
#include <vector>
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class ClientboundMapItemDataPacket : Packet {

public:
    virtual ~ClientboundMapItemDataPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

//  ClientboundMapItemDataPacket(ActorUniqueID, signed const, std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>, std::allocator<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>>> const&, buffer_span<unsigned int>, int, int, int, int, AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition
    ClientboundMapItemDataPacket();
    ClientboundMapItemDataPacket(MapItemSavedData &, Level &);
//  bool isOfType(ClientboundMapItemDataPacket::Type)const; //TODO: incomplete function definition
    void getMapId()const;
    void getMapIds()const;
    void applyToMap(MapItemSavedData &)const;
    bool isTextureUpdate()const;
    void getScale()const;
    void getDimensionId()const;
    bool isLocked()const;
};
