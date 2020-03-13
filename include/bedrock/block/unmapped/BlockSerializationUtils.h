#pragma once



namespace BlockSerializationUtils {

    static std::string BLOCK_REPLACE_DATA_MAP;

    void findInCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long); // _ZN23BlockSerializationUtils11findInCacheERNS_15NbtToBlockCacheEm
    void addToCache(BlockSerializationUtils::NbtToBlockCache &, unsigned long, Block const*); // _ZN23BlockSerializationUtils10addToCacheERNS_15NbtToBlockCacheEmPK5Block
    void clearCache(BlockSerializationUtils::NbtToBlockCache &); // _ZN23BlockSerializationUtils10clearCacheERNS_15NbtToBlockCacheE
    void tryGetBlockFromNBT(CompoundTag const&, BlockSerializationUtils::NbtToBlockCache *); // _ZN23BlockSerializationUtils18tryGetBlockFromNBTERK11CompoundTagPNS_15NbtToBlockCacheE
    void formatBlockJson(Block const&); // _ZN23BlockSerializationUtils15formatBlockJsonERK5Block
    void clearNBTToBlockCache(); // _ZN23BlockSerializationUtils20clearNBTToBlockCacheEv
};
