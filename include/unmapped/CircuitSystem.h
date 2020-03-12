#pragma once

#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/ChunkPos.h"
#include <memory>


class CircuitSystem {

public:
    void updateDependencies(BlockSource *);
    bool isAvailableAt(BlockPos const&);
    void getDirection(BlockPos const&);
    void setStrength(BlockPos const&, int);
    void lockGraph(bool);
    ~CircuitSystem();
    void getStrength(BlockPos const&);
    void getChunkPos(BlockSource *, BlockPos const&);
    void invalidatePos(BlockPos const&);
    void evaluateComponents(bool);
    void _shouldEvaluate(BlockSource *);
    CircuitSystem();
    void evaluate(BlockSource *);
    void cacheValues();
    void createComponent(BlockPos const&, unsigned char, std::unique_ptr<BaseCircuitComponent>);
    void preSetupPoweredBlocks(ChunkPos const&);
    void checkLocks();
    bool hasDirectPower(BlockPos const&);
    void updateBlocks(BlockSource &, BlockPos const&);
    void updateIndividualBlock(BaseCircuitComponent *, BlockPos const&, BlockPos const&, BlockSource &);
    void removeComponents(BlockPos const&);
};
