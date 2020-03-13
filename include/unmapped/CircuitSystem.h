#pragma once

#include <memory>


class CircuitSystem {

public:
    void lockGraph(bool); // _ZN13CircuitSystem9lockGraphEb
    ~CircuitSystem(); // _ZN13CircuitSystemD2Ev
    CircuitSystem(); // _ZN13CircuitSystemC2Ev
    void updateDependencies(BlockSource *); // _ZN13CircuitSystem18updateDependenciesEP11BlockSource
    void evaluate(BlockSource *); // _ZN13CircuitSystem8evaluateEP11BlockSource
    void _shouldEvaluate(BlockSource *); // _ZN13CircuitSystem15_shouldEvaluateEP11BlockSource
    void cacheValues(); // _ZN13CircuitSystem11cacheValuesEv
    void evaluateComponents(bool); // _ZN13CircuitSystem18evaluateComponentsEb
    void checkLocks(); // _ZN13CircuitSystem10checkLocksEv
    void updateBlocks(BlockSource &, BlockPos const&); // _ZN13CircuitSystem12updateBlocksER11BlockSourceRK8BlockPos
    void updateIndividualBlock(BaseCircuitComponent *, BlockPos const&, BlockPos const&, BlockSource &); // _ZN13CircuitSystem21updateIndividualBlockEP20BaseCircuitComponentRK8BlockPosS4_R11BlockSource
    void createComponent(BlockPos const&, unsigned char, std::unique_ptr<BaseCircuitComponent>); // _ZN13CircuitSystem15createComponentERK8BlockPoshSt10unique_ptrI20BaseCircuitComponentSt14default_deleteIS4_EE
    void removeComponents(BlockPos const&); // _ZN13CircuitSystem16removeComponentsERK8BlockPos
    void setStrength(BlockPos const&, int); // _ZN13CircuitSystem11setStrengthERK8BlockPosi
    void getDirection(BlockPos const&); // _ZN13CircuitSystem12getDirectionERK8BlockPos
    bool hasDirectPower(BlockPos const&); // _ZN13CircuitSystem14hasDirectPowerERK8BlockPos
    bool isAvailableAt(BlockPos const&); // _ZN13CircuitSystem13isAvailableAtERK8BlockPos
    void getStrength(BlockPos const&); // _ZN13CircuitSystem11getStrengthERK8BlockPos
    void invalidatePos(BlockPos const&); // _ZN13CircuitSystem13invalidatePosERK8BlockPos
    void preSetupPoweredBlocks(ChunkPos const&); // _ZN13CircuitSystem21preSetupPoweredBlocksERK8ChunkPos
    void getChunkPos(BlockSource *, BlockPos const&); // _ZN13CircuitSystem11getChunkPosEP11BlockSourceRK8BlockPos
};
