#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../biome/Biome"
#include "../../util/BlockPos"
#include "../../../unmapped/BiomeRegistry"
#include "../../../unmapped/PerlinSimplexNoise"


class LegacyFlowerFeature : Feature {

public:
    virtual LegacyFlowerFeature::~LegacyFlowerFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    LegacyFlowerFeature(LegacyFlowerFeature::Type);
    void _getRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>)const;
    void getRandomFlowerBlock(Biome const&, BlockPos const&, Random &, BiomeRegistry &);
    void _getFlowerForestRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>);
    void _getPlainsRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>);
    void _getSwampRandomFlowerBlock(BlockPos const&, Random &);
    void _getForestRandomFlowerBlock(BlockPos const&, Random &);
    void _getOverworldRandomFlowerBlock(BlockPos const&, Random &);
};
