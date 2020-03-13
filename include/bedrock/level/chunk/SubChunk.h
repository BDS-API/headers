#pragma once

#include <vector>
#include <memory>
#include <mutex>
#include "SubChunkBrightnessStorage.h"
#include <functional>


class SubChunk {

public:
    void setSkyLight(unsigned short, unsigned char); // _ZN8SubChunk11setSkyLightEth
    void getBlock(unsigned short)const; // _ZNK8SubChunk8getBlockEt
    void setBlock(unsigned short, Block const&); // _ZN8SubChunk8setBlockEtRK5Block
    void fetchBlocks(BlockPos const&, BlockPos const&, BlockVolume &)const; // _ZNK8SubChunk11fetchBlocksERK8BlockPosS2_R11BlockVolume
    void getLight(unsigned short)const; // _ZNK8SubChunk8getLightEt
    void setExtraBlock(unsigned short, Block const&); // _ZN8SubChunk13setExtraBlockEtRK5Block
    void getExtraBlock(unsigned short)const; // _ZNK8SubChunk13getExtraBlockEt
    void setLight(unsigned short, SubChunkBrightnessStorage::LightPair); // _ZN8SubChunk8setLightEtN25SubChunkBrightnessStorage9LightPairE
    SubChunk(); // _ZN8SubChunkC2Ev
    SubChunk(Block const*, bool, bool, SpinLock &); // _ZN8SubChunkC2EPK5BlockbbR8SpinLock
    void initialize(Block const*, bool, bool, SpinLock &); // _ZN8SubChunk10initializeEPK5BlockbbR8SpinLock
    ~SubChunk(); // _ZN8SubChunkD2Ev
    void shutdown(); // _ZN8SubChunk8shutdownEv
    void _replaceBlocks(unsigned char, std::unique_ptr<SubChunkBlockStorage>, std::lock_guard<SpinLock> &); // _ZN8SubChunk14_replaceBlocksEhSt10unique_ptrI20SubChunkBlockStorageSt14default_deleteIS1_EERSt10lock_guardI8SpinLockE
    void _resetLight(bool, bool); // _ZN8SubChunk11_resetLightEbb
    void _createLightStorage(); // _ZN8SubChunk19_createLightStorageEv
    void reset(Block const*, bool, bool); // _ZN8SubChunk5resetEPK5Blockbb
    void fetchBlocksInCylinder(BlockPos const&, BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult> &)const; // _ZNK8SubChunk21fetchBlocksInCylinderERK8BlockPosS2_jjRKSt8functionIFbRK5BlockEERSt6vectorI16BlockFetchResultSaISC_EE
    void fetchBlocksInBox(BlockPos const&, BoundingBox const&, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult> &)const; // _ZNK8SubChunk16fetchBlocksInBoxERK8BlockPosRK11BoundingBoxRKSt8functionIFbRK5BlockEERSt6vectorI16BlockFetchResultSaISF_EE
    void prune(); // _ZN8SubChunk5pruneEv
    void _setBlock(unsigned char, unsigned short, Block const&); // _ZN8SubChunk9_setBlockEhtRK5Block
//  void setAllBlocks(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition // _ZN8SubChunk12setAllBlocksE11buffer_spanIPK5BlockEmm
    bool isUniform(Block const&)const; // _ZNK8SubChunk9isUniformERK5Block
    void serialize(IDataOutput &, bool)const; // _ZNK8SubChunk9serializeER11IDataOutputb
    void deserialize(IDataInput &, BlockPalette const&); // _ZN8SubChunk11deserializeER10IDataInputRK12BlockPalette
    void getLayersCount()const; // _ZNK8SubChunk14getLayersCountEv
    void setBlockLight(unsigned short, unsigned char); // _ZN8SubChunk13setBlockLightEth
};
