#pragma once

class LegacyFlowerFeature : Feature {

public:
    virtual ~LegacyFlowerFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void LegacyFlowerFeature(LegacyFlowerFeature::Type);
    void _getRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>)const;
    void getRandomFlowerBlock(Biome const&, BlockPos const&, Random &, BiomeRegistry &);
    void _getFlowerForestRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>);
    void _getPlainsRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>);
    void _getSwampRandomFlowerBlock(BlockPos const&, Random &);
    void _getForestRandomFlowerBlock(BlockPos const&, Random &);
    void _getOverworldRandomFlowerBlock(BlockPos const&, Random &);
};
