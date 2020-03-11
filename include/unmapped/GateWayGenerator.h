#pragma once

#include "./GateWayGenerator.h"
#include <memory>
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/level/chunksource/ChunkViewSource.h"


namespace EndDragonFight {

class GateWayGenerator {

public:

    GateWayGenerator();
    GateWayGenerator(bool, std::unique_ptr<ChunkViewSource, std::default_delete<ChunkViewSource>>, BlockPos);
    ~GateWayGenerator();
    GateWayGenerator(EndDragonFight::GateWayGenerator &&);
};

}