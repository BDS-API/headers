#pragma once

#include "../../util/Random.h"
#include "../biome/Biome.h"
#include "../../../unmapped/BiomeRegistry.h"
#include "./Feature.h"
#include "../../../unmapped/PerlinSimplexNoise.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacyFlowerFeature : Feature {

public:
    virtual ~LegacyFlowerFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

//  LegacyFlowerFeature(LegacyFlowerFeature::Type); //TODO: incomplete function definition
//  void _getRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>)const; //TODO: incomplete function definition
    void getRandomFlowerBlock(Biome const&, BlockPos const&, Random &, BiomeRegistry &);
//  void _getFlowerForestRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition
//  void _getPlainsRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition
    void _getSwampRandomFlowerBlock(BlockPos const&, Random &);
    void _getForestRandomFlowerBlock(BlockPos const&, Random &);
    void _getOverworldRandomFlowerBlock(BlockPos const&, Random &);
};
