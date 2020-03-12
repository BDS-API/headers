#pragma once

#include <vector>
#include <functional>


class TickingAreaList {

public:
    ~TickingAreaList();
    void onChunkDiscarded(LevelChunk &)const;
    void onChunkLoaded(LevelChunk &)const;
    TickingAreaList();
    void checkEntityConditions(std::vector<Vec3> const&, std::function<void (ITickingArea const&)>);
};
