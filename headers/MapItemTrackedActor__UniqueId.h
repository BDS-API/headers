#pragma once

class MapItemTrackedActor::UniqueId {

public:

    void UniqueId(MapItemTrackedActor::UniqueId const&);
    void UniqueId(void);
    void UniqueId(ActorUniqueID const&);
    void UniqueId(BlockPos const&);
    void load(CompoundTag const&);
    void save(CompoundTag &)const;
};
