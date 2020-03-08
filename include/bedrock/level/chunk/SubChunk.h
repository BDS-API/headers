#pragma once

#include "../../block/unmapped/BlockVolume"
#include "../../io/IDataOutput"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../block/unmapped/BlockPalette"
#include "../../block/unmapped/BlockFetchResult"
#include "../../../unmapped/BoundingBox"
#include "../../../unmapped/SpinLock"
#include "../../io/IDataInput"


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
    SubChunk(void);
    SubChunk(Block const*, bool, bool, SpinLock &);
    void initialize(Block const*, bool, bool, SpinLock &);
    void shutdown();
    void _replaceBlocks(unsigned char, std::unique_ptr<SubChunkBlockStorage, std::default_delete<SubChunkBlockStorage>>, std::lock_guard<SpinLock> &);
    void _resetLight(bool, bool);
    void _createLightStorage();
    void reset(Block const*, bool, bool);
    void fetchBlocksInCylinder(BlockPos const&, BlockPos const&, unsigned int, unsigned int, std::function<bool ()(Block const&)> const&, std::vector<BlockFetchResult, std::allocator<BlockFetchResult>> &)const;
    void fetchBlocksInBox(BlockPos const&, BoundingBox const&, std::function<bool ()(Block const&)> const&, std::vector<BlockFetchResult, std::allocator<BlockFetchResult>> &)const;
    void prune();
    void _setBlock(unsigned char, unsigned short, Block const&);
    void setAllBlocks(buffer_span<Block const*>, unsigned long, unsigned long);
    bool isUniform(Block const&)const;
    void serialize(IDataOutput &, bool)const;
    void deserialize(IDataInput &, BlockPalette const&);
    void getLayersCount()const;
    void setBlockLight(unsigned short, unsigned char);
};
