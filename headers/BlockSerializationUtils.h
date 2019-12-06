#pragma once

class BlockSerializationUtils {

public:

    void findInCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long);
    void addToCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long, Block const*);
    void clearCache(BlockSerializationUtils::NbtToBlockCache &);
    void tryGetBlockFromNBT(CompoundTag const&, BlockSerializationUtils::NbtToBlockCache *);
    void formatBlockJson(Block const&);
    void clearNBTToBlockCache(void);
};
