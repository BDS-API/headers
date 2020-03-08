#pragma once

#include "../../nbt/CompoundTag"
#include "../../../unmapped/Block"


class BlockSerializationUtils {

public:
    static long BLOCK_REPLACE_DATA_MAP[abi:cxx11];


    void findInCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long);
    void addToCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long, Block const*);
    void clearCache(BlockSerializationUtils::NbtToBlockCache &);
    void tryGetBlockFromNBT(CompoundTag const&, BlockSerializationUtils::NbtToBlockCache *);
    void formatBlockJson(Block const&);
    void clearNBTToBlockCache();
};
