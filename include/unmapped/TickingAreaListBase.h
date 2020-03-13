#pragma once

#include <string>
#include <memory>
#include <vector>


class TickingAreaListBase {

public:
    TickingAreaListBase(); // _ZN19TickingAreaListBaseC2Ev
    ~TickingAreaListBase(); // _ZN19TickingAreaListBaseD2Ev
    void tick(Tick const&); // _ZN19TickingAreaListBase4tickERK4Tick
    void tickSeasons(Random &); // _ZN19TickingAreaListBase11tickSeasonsER6Random
    void getAreas()const; // _ZNK19TickingAreaListBase8getAreasEv
    bool hasTickingAreaNamed(std::string const&)const; // _ZNK19TickingAreaListBase19hasTickingAreaNamedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void add(std::unique_ptr<ITickingArea>); // _ZN19TickingAreaListBase3addESt10unique_ptrI12ITickingAreaSt14default_deleteIS1_EE
    void empty()const; // _ZNK19TickingAreaListBase5emptyEv
    void findAreasContaining(BlockPos const&); // _ZN19TickingAreaListBase19findAreasContainingERK8BlockPos
    void findAreasNamed(std::string const&); // _ZN19TickingAreaListBase14findAreasNamedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeAreas(std::vector<std::shared_ptr<ITickingArea>> const&); // _ZN19TickingAreaListBase11removeAreasERKSt6vectorISt10shared_ptrI12ITickingAreaESaIS3_EE
    void removeAllAreas(); // _ZN19TickingAreaListBase14removeAllAreasEv
    void getTickingAreasDescription()const; // _ZNK19TickingAreaListBase26getTickingAreasDescriptionEv
    void countStandaloneTickingAreas()const; // _ZNK19TickingAreaListBase27countStandaloneTickingAreasEv
    std::string findUsableDefaultName()const; // _ZNK19TickingAreaListBase21findUsableDefaultNameB5cxx11Ev
    void destroyAreas(); // _ZN19TickingAreaListBase12destroyAreasEv
    bool processRemoves(); // _ZN19TickingAreaListBase14processRemovesEv
    bool processUpdates(); // _ZN19TickingAreaListBase14processUpdatesEv
    void getAreaFor(ActorUniqueID const&)const; // _ZNK19TickingAreaListBase10getAreaForERK13ActorUniqueID
    void _shouldRemoveArea(unsigned int, std::vector<Vec3> const&)const; // _ZNK19TickingAreaListBase17_shouldRemoveAreaEjRKSt6vectorI4Vec3SaIS1_EE
};
