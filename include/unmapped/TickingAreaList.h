#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/level/LevelChunk"


class TickingAreaList {

public:

    TickingAreaList(void);
    void onChunkLoaded(LevelChunk &)const;
    void onChunkDiscarded(LevelChunk &)const;
    void checkEntityConditions(std::vector<Vec3, std::allocator<Vec3>> const&, std::function<void ()(ITickingArea const&)>);
};
