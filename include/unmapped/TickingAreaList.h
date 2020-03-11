#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/level/tickingarea/ITickingArea.h"
#include <memory>
#include <vector>
#include "../bedrock/level/LevelChunk.h"
#include <functional>


class TickingAreaList {

public:

    TickingAreaList();
    ~TickingAreaList();
    void onChunkLoaded(LevelChunk &)const;
    void onChunkDiscarded(LevelChunk &)const;
//  void checkEntityConditions(std::vector<Vec3, std::allocator<Vec3>> const&, std::function<void (ITickingArea const&)>); //TODO: incomplete function definition
};
