#pragma once

#include <utility>
#include "../bedrock/util/Tick.h"
#include <unordered_map>
#include "./Bounds.h"
#include "../bedrock/level/storage/LevelStorage.h"
#include <memory>
#include "./Dimension.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./PendingArea.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <functional>
#include "../bedrock/util/BlockPos.h"
#include <string>


class TickingAreasManager {

public:

    ~TickingAreasManager();
//  TickingAreasManager(std::unordered_map<AutomaticID<Dimension, int>, std::unique_ptr<Dimension, std::default_delete<Dimension>>, std::hash<AutomaticID<Dimension, int>>, std::equal_to<AutomaticID<Dimension, int>>, std::allocator<std::pair<AutomaticID<Dimension, int> const, std::unique_ptr<Dimension, std::default_delete<Dimension>>>>> &); //TODO: incomplete function definition
    void update(Level &);
    void _processRemoves();
    void _processAdds(Level &);
    void _processUpdates();
    void tick(Tick const&);
    void addArea(Dimension &, std::string const&, BlockPos const&, int);
    void _addArea(Dimension &, std::string const&, Bounds const&, bool);
    void addArea(Dimension &, std::string const&, BlockPos const&, BlockPos const&);
    void addEntityArea(Dimension &, Actor const&);
    void _requeueEntityArea(Dimension &, ActorUniqueID const&, Bounds const&, bool, float);
//  void _savePendingArea(LevelStorage &, AutomaticID<Dimension, int>, PendingArea const&); //TODO: incomplete function definition
    void countStandaloneTickingAreas()const;
    bool hasActiveAreas()const;
    void loadArea(std::string const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
};
