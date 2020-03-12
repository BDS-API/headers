#pragma once

#include <memory>


class CircuitSystem {

public:
    void createComponent(BlockPos const&, unsigned char, std::unique_ptr<BaseCircuitComponent>);
    ~CircuitSystem();
    void setStrength(BlockPos const&, int);
    void lockGraph(bool);
    void updateDependencies(BlockSource *);
    void evaluateComponents(bool);
    CircuitSystem();
    bool hasDirectPower(BlockPos const&);
    void _shouldEvaluate(BlockSource *);
    void preSetupPoweredBlocks(ChunkPos const&);
    void evaluate(BlockSource *);
    void removeComponents(BlockPos const&);
    void checkLocks();
    void getStrength(BlockPos const&);
    void updateIndividualBlock(BaseCircuitComponent *, BlockPos const&, BlockPos const&, BlockSource &);
    void updateBlocks(BlockSource &, BlockPos const&);
    void cacheValues();
    bool isAvailableAt(BlockPos const&);
    void invalidatePos(BlockPos const&);
    void getDirection(BlockPos const&);
    void getChunkPos(BlockSource *, BlockPos const&);
};
