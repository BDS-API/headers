#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../../unmapped/Block.h"
#include "../../../unmapped/NbtToBlockCache.h"
#include <string>


namespace BlockSerializationUtils {

    static std::string BLOCK_REPLACE_DATA_MAP;

    void formatBlockJson(Block const&);
    void addToCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long, Block const*);
    void tryGetBlockFromNBT(CompoundTag const&, BlockSerializationUtils::NbtToBlockCache *);
    void findInCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long);
    void clearCache(BlockSerializationUtils::NbtToBlockCache &);
    void clearNBTToBlockCache();
};
