#pragma once

#include "Feature.h"


class LegacyFlowerFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~LegacyFlowerFeature();
    void _getForestRandomFlowerBlock(BlockPos const&, Random &);
    void _getOverworldRandomFlowerBlock(BlockPos const&, Random &);
//  void _getFlowerForestRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition
//  void _getPlainsRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition
    void _getSwampRandomFlowerBlock(BlockPos const&, Random &);
    void getRandomFlowerBlock(Biome const&, BlockPos const&, Random &, BiomeRegistry &);
//  LegacyFlowerFeature(LegacyFlowerFeature::Type); //TODO: incomplete function definition
//  void _getRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>)const; //TODO: incomplete function definition
};
