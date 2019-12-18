#pragma once

class ClientboundMapItemDataPacket : Packet {

public:
    virtual ~ClientboundMapItemDataPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ClientboundMapItemDataPacket(ActorUniqueID, signed char, std::vector<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>, std::allocator<std::pair<MapItemTrackedActor::UniqueId, std::shared_ptr<MapDecoration>>>> const&, buffer_span<unsigned int>, int, int, int, int, AutomaticID<Dimension, int>, bool);
    void ClientboundMapItemDataPacket(void);
    void ClientboundMapItemDataPacket(MapItemSavedData &, Level &);
    bool isOfType(ClientboundMapItemDataPacket::Type)const;
    void getMapId(void)const;
    void getMapIds(void)const;
    void applyToMap(MapItemSavedData &)const;
    bool isTextureUpdate(void)const;
    void getScale(void)const;
    void getDimensionId(void)const;
    bool isLocked(void)const;
};
