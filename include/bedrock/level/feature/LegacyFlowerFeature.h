#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../biome/Biome.h"
#include "../../../unmapped/PerlinSimplexNoise.h"
#include "Feature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/BiomeRegistry.h"


class LegacyFlowerFeature : Feature {

public:
    ~LegacyFlowerFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    void _getOverworldRandomFlowerBlock(BlockPos const&, Random &);
    void _getForestRandomFlowerBlock(BlockPos const&, Random &);
    void getRandomFlowerBlock(Biome const&, BlockPos const&, Random &, BiomeRegistry &);
//  void _getPlainsRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition
//  LegacyFlowerFeature(LegacyFlowerFeature::Type); //TODO: incomplete function definition
//  void _getFlowerForestRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition
    void _getSwampRandomFlowerBlock(BlockPos const&, Random &);
//  void _getRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>)const; //TODO: incomplete function definition
};
