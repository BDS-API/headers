#pragma once

class CircuitSystem {

public:

    void lockGraph(bool);
    void CircuitSystem(void);
    void updateDependencies(BlockSource *);
    void evaluate(BlockSource *);
    void _shouldEvaluate(BlockSource *);
    void cacheValues(void);
    void evaluateComponents(bool);
    void checkLocks(void);
    void updateBlocks(BlockSource &, BlockPos const&);
    void updateIndividualBlock(BaseCircuitComponent *, BlockPos const&, BlockPos const&, BlockSource &);
    void createComponent(BlockPos const&, unsigned char, std::unique_ptr<BaseCircuitComponent, std::default_delete<BaseCircuitComponent>>);
    void removeComponents(BlockPos const&);
    void setStrength(BlockPos const&, int);
    void getDirection(BlockPos const&);
    bool hasDirectPower(BlockPos const&);
    bool isAvailableAt(BlockPos const&);
    void getStrength(BlockPos const&);
    void invalidatePos(BlockPos const&);
    void preSetupPoweredBlocks(ChunkPos const&);
    void getChunkPos(BlockSource *, BlockPos const&);
};
