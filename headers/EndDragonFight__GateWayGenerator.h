#pragma once

class EndDragonFight::GateWayGenerator {

public:

    void GateWayGenerator(void);
    void GateWayGenerator(bool, std::unique_ptr<ChunkViewSource, std::default_delete<ChunkViewSource>>, BlockPos);
    void GateWayGenerator(EndDragonFight::GateWayGenerator&&);
};
