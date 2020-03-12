#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/level/Level.h"
#include <string>
#include <unordered_map>
#include "Bounds.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "Dimension.h"
#include <memory>
#include "../bedrock/util/Tick.h"
#include <functional>
#include "PendingArea.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/level/storage/LevelStorage.h"
#include <utility>


class TickingAreasManager {

public:
    void _processUpdates();
//  void _savePendingArea(LevelStorage &, AutomaticID<Dimension, int>, PendingArea const&); //TODO: incomplete function definition
    void update(Level &);
    void _addArea(Dimension &, std::string const&, Bounds const&, bool);
    void _requeueEntityArea(Dimension &, ActorUniqueID const&, Bounds const&, bool, float);
    void countStandaloneTickingAreas()const;
    bool hasActiveAreas()const;
    void loadArea(std::string const&, std::unique_ptr<CompoundTag>);
    void addArea(Dimension &, std::string const&, BlockPos const&, int);
    void addEntityArea(Dimension &, Actor const&);
    ~TickingAreasManager();
    void tick(Tick const&);
    void _processAdds(Level &);
    void _processRemoves();
    void addArea(Dimension &, std::string const&, BlockPos const&, BlockPos const&);
//  TickingAreasManager(std::unordered_map<AutomaticID<Dimension, int>, std::unique_ptr<Dimension>, std::hash<AutomaticID<Dimension, int>>, std::equal_to<AutomaticID<Dimension, int>>, std::allocator<std::pair<AutomaticID<Dimension, int> const, std::unique_ptr<Dimension>>>> &); //TODO: incomplete function definition
};
