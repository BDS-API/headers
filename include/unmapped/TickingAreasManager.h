#pragma once

#include <string>
#include <memory>
#include <unordered_map>


class TickingAreasManager {

public:
    ~TickingAreasManager(); // _ZN19TickingAreasManagerD2Ev
    TickingAreasManager(std::unordered_map<AutomaticID<Dimension, int>, std::unique_ptr<Dimension>, std::hash<AutomaticID<Dimension, int>>, std::equal_to<AutomaticID<Dimension, int>>, std::allocator<std::pair<AutomaticID<Dimension, int> const, std::unique_ptr<Dimension>>>> &); // _ZN19TickingAreasManagerC2ERSt13unordered_mapI11AutomaticIDI9DimensioniESt10unique_ptrIS2_St14default_deleteIS2_EESt4hashIS3_ESt8equal_toIS3_ESaISt4pairIKS3_S7_EEE
    void update(Level &); // _ZN19TickingAreasManager6updateER5Level
    void _processRemoves(); // _ZN19TickingAreasManager15_processRemovesEv
    void _processAdds(Level &); // _ZN19TickingAreasManager12_processAddsER5Level
    void _processUpdates(); // _ZN19TickingAreasManager15_processUpdatesEv
    void tick(Tick const&); // _ZN19TickingAreasManager4tickERK4Tick
    void addArea(Dimension &, std::string const&, BlockPos const&, int); // _ZN19TickingAreasManager7addAreaER9DimensionRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosi
    void _addArea(Dimension &, std::string const&, Bounds const&, bool); // _ZN19TickingAreasManager8_addAreaER9DimensionRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK6Boundsb
    void addArea(Dimension &, std::string const&, BlockPos const&, BlockPos const&); // _ZN19TickingAreasManager7addAreaER9DimensionRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosSC_
    void addEntityArea(Dimension &, Actor const&); // _ZN19TickingAreasManager13addEntityAreaER9DimensionRK5Actor
    void _requeueEntityArea(Dimension &, ActorUniqueID const&, Bounds const&, bool, float); // _ZN19TickingAreasManager18_requeueEntityAreaER9DimensionRK13ActorUniqueIDRK6Boundsbf
//  void _savePendingArea(LevelStorage &, AutomaticID<Dimension, int>, PendingArea const&); //TODO: incomplete function definition // _ZN19TickingAreasManager16_savePendingAreaER12LevelStorage11AutomaticIDI9DimensioniERK11PendingArea
    void countStandaloneTickingAreas()const; // _ZNK19TickingAreasManager27countStandaloneTickingAreasEv
    bool hasActiveAreas()const; // _ZNK19TickingAreasManager14hasActiveAreasEv
    void loadArea(std::string const&, std::unique_ptr<CompoundTag>); // _ZN19TickingAreasManager8loadAreaERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI11CompoundTagSt14default_deleteIS9_EE
};
