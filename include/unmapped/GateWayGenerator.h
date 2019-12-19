#pragma once

using namespace EndDragonFight;

class GateWayGenerator {

public:

    GateWayGenerator(void);
    GateWayGenerator(bool, std::unique_ptr<ChunkViewSource, std::default_delete<ChunkViewSource>>, BlockPos);
    GateWayGenerator(EndDragonFight::GateWayGenerator&&);
};
