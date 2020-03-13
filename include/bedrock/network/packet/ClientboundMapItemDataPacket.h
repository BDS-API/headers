#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"
#include <vector>


class ClientboundMapItemDataPacket : Packet {

public:
    ~ClientboundMapItemDataPacket(); // _ZN28ClientboundMapItemDataPacketD2Ev
    virtual void getId()const; // _ZNK28ClientboundMapItemDataPacket5getIdEv
    virtual std::string getName()const; // _ZNK28ClientboundMapItemDataPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK28ClientboundMapItemDataPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN28ClientboundMapItemDataPacket4readER20ReadOnlyBinaryStream
//  ClientboundMapItemDataPacket(ActorUniqueID, signed const, std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>> const&, buffer_span<unsigned int>, int, int, int, int, AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition // _ZN28ClientboundMapItemDataPacketC2E13ActorUniqueIDaRKSt6vectorISt4pairIN19MapItemTrackedActor8UniqueIdESt10shared_ptrI13MapDecorationEESaIS8_EE11buffer_spanIjEiiii11AutomaticIDI9DimensioniEb
    ClientboundMapItemDataPacket(); // _ZN28ClientboundMapItemDataPacketC2Ev
    ClientboundMapItemDataPacket(MapItemSavedData &, Level &); // _ZN28ClientboundMapItemDataPacketC2ER16MapItemSavedDataR5Level
//  bool isOfType(ClientboundMapItemDataPacket::Type)const; //TODO: incomplete function definition // _ZNK28ClientboundMapItemDataPacket8isOfTypeENS_4TypeE
    void getMapId()const; // _ZNK28ClientboundMapItemDataPacket8getMapIdEv
    void getMapIds()const; // _ZNK28ClientboundMapItemDataPacket9getMapIdsEv
    void applyToMap(MapItemSavedData &)const; // _ZNK28ClientboundMapItemDataPacket10applyToMapER16MapItemSavedData
    bool isTextureUpdate()const; // _ZNK28ClientboundMapItemDataPacket15isTextureUpdateEv
    void getScale()const; // _ZNK28ClientboundMapItemDataPacket8getScaleEv
    void getDimensionId()const; // _ZNK28ClientboundMapItemDataPacket14getDimensionIdEv
    bool isLocked()const; // _ZNK28ClientboundMapItemDataPacket8isLockedEv
};
