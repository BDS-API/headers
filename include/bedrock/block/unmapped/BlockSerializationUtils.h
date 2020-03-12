#pragma once



namespace BlockSerializationUtils {

    static std::string BLOCK_REPLACE_DATA_MAP;

    void tryGetBlockFromNBT(CompoundTag const&, BlockSerializationUtils::NbtToBlockCache *);
    void formatBlockJson(Block const&);
    void addToCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long, Block const*);
    void clearCache(BlockSerializationUtils::NbtToBlockCache &);
    void clearNBTToBlockCache();
    void findInCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long);
};
