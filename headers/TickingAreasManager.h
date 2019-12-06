#pragma once

class TickingAreasManager {

public:

    void TickingAreasManager(std::unordered_map<AutomaticID<Dimension, int>, std::unique_ptr<Dimension, std::default_delete<Dimension>>, std::hash<AutomaticID<Dimension, int>>, std::equal_to<AutomaticID<Dimension, int>>, std::allocator<std::pair<AutomaticID<Dimension, int> const, std::unique_ptr<Dimension, std::default_delete<Dimension>>>>> &);
    void update(Level &);
    void _processRemoves(void);
    void _processAdds(Level &);
    void _processUpdates(void);
    void tick(Tick const&);
    void addArea(Dimension &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, int);
    void _addArea(Dimension &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Bounds const&, bool);
    void addArea(Dimension &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, BlockPos const&);
    void addEntityArea(Dimension &, Actor const&);
    void _requeueEntityArea(Dimension &, ActorUniqueID const&, Bounds const&, bool, float);
    void _savePendingArea(LevelStorage &, AutomaticID<Dimension, int>, PendingArea const&);
    void countStandaloneTickingAreas(void)const;
    bool hasActiveAreas(void)const;
    void loadArea(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
};