#pragma once

#include "../../../unmapped/Block.h"
#include "../../block/unmapped/BlockFetchResult.h"
#include "../../../unmapped/SpinLock.h"
#include "SubChunkBlockStorage.h"
#include "../../util/BlockPos.h"
#include <mutex>
#include "../../block/unmapped/BlockPalette.h"
#include "../../io/IDataInput.h"
#include <functional>
#include "../../../unmapped/BoundingBox.h"
#include <vector>
#include <memory>
#include "../../block/unmapped/BlockVolume.h"
#include "SubChunkBrightnessStorage.h"
#include "../../io/IDataOutput.h"


class SubChunk {

public:
    void initialize(Block const*, bool, bool, SpinLock &);
    ~SubChunk();
    void fetchBlocks(BlockPos const&, BlockPos const&, BlockVolume &)const;
    bool isUniform(Block const&)const;
    void setLight(unsigned short, SubChunkBrightnessStorage::LightPair);
//  void setAllBlocks(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition
    void _setBlock(unsigned char, unsigned short, Block const&);
    void deserialize(IDataInput &, BlockPalette const&);
    void serialize(IDataOutput &, bool)const;
    void fetchBlocksInBox(BlockPos const&, BoundingBox const&, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult> &)const;
    void _replaceBlocks(unsigned char, std::unique_ptr<SubChunkBlockStorage>, std::lock_guard<SpinLock> &);
    void getLight(unsigned short)const;
    void setBlock(unsigned short, Block const&);
    void getLayersCount()const;
    void setSkyLight(unsigned short, unsigned char);
    void reset(Block const*, bool, bool);
    void shutdown();
    void prune();
    void getBlock(unsigned short)const;
    void setBlockLight(unsigned short, unsigned char);
    SubChunk(Block const*, bool, bool, SpinLock &);
    void setExtraBlock(unsigned short, Block const&);
    SubChunk();
    void getExtraBlock(unsigned short)const;
    void fetchBlocksInCylinder(BlockPos const&, BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult> &)const;
    void _createLightStorage();
    void _resetLight(bool, bool);
};
