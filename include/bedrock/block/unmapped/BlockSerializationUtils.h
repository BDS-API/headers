#pragma once

#include "../../../unmapped/Block.h"
#include "../../nbt/CompoundTag.h"
#include "../../../unmapped/NbtToBlockCache.h"


class BlockSerializationUtils {

public:
    static std::string BLOCK_REPLACE_DATA_MAP;


    void findInCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long);
    void addToCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long, Block const*);
    void clearCache(BlockSerializationUtils::NbtToBlockCache &);
    void tryGetBlockFromNBT(CompoundTag const&, BlockSerializationUtils::NbtToBlockCache *);
    void formatBlockJson(Block const&);
    void clearNBTToBlockCache();
};
