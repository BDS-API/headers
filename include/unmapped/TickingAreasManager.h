#pragma once

#include <memory>
#include <unordered_map>
#include <string>


class TickingAreasManager {

public:
    void update(Level &);
    void addArea(Dimension &, std::string const&, BlockPos const&, int);
    void _requeueEntityArea(Dimension &, ActorUniqueID const&, Bounds const&, bool, float);
//  void _savePendingArea(LevelStorage &, AutomaticID<Dimension, int>, PendingArea const&); //TODO: incomplete function definition
    void _processRemoves();
    void _processAdds(Level &);
    void _addArea(Dimension &, std::string const&, Bounds const&, bool);
    void loadArea(std::string const&, std::unique_ptr<CompoundTag>);
    void addEntityArea(Dimension &, Actor const&);
    void _processUpdates();
    void countStandaloneTickingAreas()const;
    bool hasActiveAreas()const;
    ~TickingAreasManager();
    void tick(Tick const&);
    void addArea(Dimension &, std::string const&, BlockPos const&, BlockPos const&);
    TickingAreasManager(std::unordered_map<AutomaticID<Dimension, int>, std::unique_ptr<Dimension>, std::hash<AutomaticID<Dimension, int>>, std::equal_to<AutomaticID<Dimension, int>>, std::allocator<std::pair<AutomaticID<Dimension, int> const, std::unique_ptr<Dimension>>>> &);
};
