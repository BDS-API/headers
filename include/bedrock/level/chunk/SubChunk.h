#pragma once

#include "../../../unmapped/Block.h"
#include "../../io/IDataInput.h"
#include "../../block/unmapped/BlockFetchResult.h"
#include "../../block/unmapped/BlockPalette.h"
#include "../../../unmapped/LightPair.h"
#include <memory>
#include "../../io/IDataOutput.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockVolume.h"
#include <mutex>
#include "./SubChunkBlockStorage.h"
#include "../../../unmapped/BoundingBox.h"
#include <vector>
#include <functional>
#include "../../../unmapped/SpinLock.h"


class SubChunk {

public:

    void setSkyLight(unsigned short, unsigned char);
    void getBlock(unsigned short)const;
    void setBlock(unsigned short, Block const&);
    void fetchBlocks(BlockPos const&, BlockPos const&, BlockVolume &)const;
    void getLight(unsigned short)const;
    void setExtraBlock(unsigned short, Block const&);
    void getExtraBlock(unsigned short)const;
    void setLight(unsigned short, SubChunkBrightnessStorage::LightPair);
    SubChunk();
    SubChunk(Block const*, bool, bool, SpinLock &);
    void initialize(Block const*, bool, bool, SpinLock &);
    ~SubChunk();
    void shutdown();
    void _replaceBlocks(unsigned char, std::unique_ptr<SubChunkBlockStorage, std::default_delete<SubChunkBlockStorage>>, std::lock_guard<SpinLock> &);
    void _resetLight(bool, bool);
    void _createLightStorage();
    void reset(Block const*, bool, bool);
    void fetchBlocksInCylinder(BlockPos const&, BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult, std::allocator<BlockFetchResult>> &)const;
    void fetchBlocksInBox(BlockPos const&, BoundingBox const&, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult, std::allocator<BlockFetchResult>> &)const;
    void prune();
    void _setBlock(unsigned char, unsigned short, Block const&);
//  void setAllBlocks(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition
    bool isUniform(Block const&)const;
    void serialize(IDataOutput &, bool)const;
    void deserialize(IDataInput &, BlockPalette const&);
    void getLayersCount()const;
    void setBlockLight(unsigned short, unsigned char);
};
