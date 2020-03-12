#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/level/LevelChunk.h"
#include <functional>
#include <vector>
#include "../bedrock/level/tickingarea/ITickingArea.h"


class TickingAreaList {

public:
    void checkEntityConditions(std::vector<Vec3> const&, std::function<void (ITickingArea const&)>);
    void onChunkLoaded(LevelChunk &)const;
    TickingAreaList();
    void onChunkDiscarded(LevelChunk &)const;
    ~TickingAreaList();
};
