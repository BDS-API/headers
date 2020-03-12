#pragma once

#include <mutex>
#include <memory>
#include <vector>
#include "SubChunkBrightnessStorage.h"
#include <functional>


class SubChunk {

public:
    void _resetLight(bool, bool);
    void serialize(IDataOutput &, bool)const;
    void fetchBlocksInCylinder(BlockPos const&, BlockPos const&, unsigned int, unsigned int, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult> &)const;
    void fetchBlocksInBox(BlockPos const&, BoundingBox const&, std::function<bool (Block const&)> const&, std::vector<BlockFetchResult> &)const;
    void getLight(unsigned short)const;
//  void setAllBlocks(buffer_span<Block const*>, unsigned long, unsigned long); //TODO: incomplete function definition
    bool isUniform(Block const&)const;
    void _replaceBlocks(unsigned char, std::unique_ptr<SubChunkBlockStorage>, std::lock_guard<SpinLock> &);
    void reset(Block const*, bool, bool);
    void setSkyLight(unsigned short, unsigned char);
    void getLayersCount()const;
    void setBlockLight(unsigned short, unsigned char);
    SubChunk(Block const*, bool, bool, SpinLock &);
    void getBlock(unsigned short)const;
    void setExtraBlock(unsigned short, Block const&);
    void _createLightStorage();
    ~SubChunk();
    void fetchBlocks(BlockPos const&, BlockPos const&, BlockVolume &)const;
    void setLight(unsigned short, SubChunkBrightnessStorage::LightPair);
    void prune();
    void setBlock(unsigned short, Block const&);
    void getExtraBlock(unsigned short)const;
    SubChunk();
    void _setBlock(unsigned char, unsigned short, Block const&);
    void initialize(Block const*, bool, bool, SpinLock &);
    void deserialize(IDataInput &, BlockPalette const&);
    void shutdown();
};
