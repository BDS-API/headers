#pragma once

#include "../../io/BinaryStream.h"
#include "../../../unmapped/MapDecoration.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/MapItemSavedData.h"
#include "../../level/Level.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <vector>
#include <memory>
#include "../../../unmapped/MapItemTrackedActor.h"
#include "../../../unmapped/Dimension.h"
#include "Packet.h"
#include <utility>


class ClientboundMapItemDataPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    ~ClientboundMapItemDataPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    void getScale()const;
//  ClientboundMapItemDataPacket(ActorUniqueID, signed const, std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>> const&, buffer_span<unsigned int>, int, int, int, int, AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition
    ClientboundMapItemDataPacket(MapItemSavedData &, Level &);
    void getMapId()const;
    void getMapIds()const;
    void getDimensionId()const;
    void applyToMap(MapItemSavedData &)const;
    ClientboundMapItemDataPacket();
//  bool isOfType(ClientboundMapItemDataPacket::Type)const; //TODO: incomplete function definition
    bool isLocked()const;
    bool isTextureUpdate()const;
};
