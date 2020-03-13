#pragma once

#include <functional>
#include <vector>


class TickingAreaList {

public:
    TickingAreaList(); // _ZN15TickingAreaListC2Ev
    ~TickingAreaList(); // _ZN15TickingAreaListD2Ev
    void onChunkLoaded(LevelChunk &)const; // _ZNK15TickingAreaList13onChunkLoadedER10LevelChunk
    void onChunkDiscarded(LevelChunk &)const; // _ZNK15TickingAreaList16onChunkDiscardedER10LevelChunk
    void checkEntityConditions(std::vector<Vec3> const&, std::function<void (ITickingArea const&)>); // _ZN15TickingAreaList21checkEntityConditionsERKSt6vectorI4Vec3SaIS1_EESt8functionIFvRK12ITickingAreaEE
};
