#pragma once

#include <memory>
#include "ChunkSource.h"


class WorldLimitChunkSource : public ChunkSource {

public:
    virtual ~WorldLimitChunkSource(); // _ZN21WorldLimitChunkSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual void shutdown(); // _ZN21WorldLimitChunkSource8shutdownEv
    virtual void getExistingChunk(ChunkPos const&); // _ZN21WorldLimitChunkSource16getExistingChunkERK8ChunkPos
    virtual void createNewChunk__incomplete0(ChunkPos const&, long); //TODO: incomplete function definition // _ZN21WorldLimitChunkSource14createNewChunkERK8ChunkPosN11ChunkSource8LoadModeE
    virtual bool isWithinWorldLimit(ChunkPos const&)const; // _ZNK21WorldLimitChunkSource18isWithinWorldLimitERK8ChunkPos
    WorldLimitChunkSource(std::unique_ptr<ChunkSource>, BlockPos const&); // _ZN21WorldLimitChunkSourceC2ESt10unique_ptrI11ChunkSourceSt14default_deleteIS1_EERK8BlockPos
};
