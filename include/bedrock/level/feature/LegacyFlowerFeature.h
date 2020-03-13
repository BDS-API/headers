#pragma once

#include "Feature.h"


class LegacyFlowerFeature : Feature {

public:
    ~LegacyFlowerFeature(); // _ZN19LegacyFlowerFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK19LegacyFlowerFeature5placeER11BlockSourceRK8BlockPosR6Random
//  LegacyFlowerFeature(LegacyFlowerFeature::Type); //TODO: incomplete function definition // _ZN19LegacyFlowerFeatureC2ENS_4TypeE
//  void _getRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>)const; //TODO: incomplete function definition // _ZNK19LegacyFlowerFeature21_getRandomFlowerBlockERK8BlockPosR6Random8WeakRefTI17SharePtrRefTraitsI18PerlinSimplexNoiseEE
    void getRandomFlowerBlock(Biome const&, BlockPos const&, Random &, BiomeRegistry &); // _ZN19LegacyFlowerFeature20getRandomFlowerBlockERK5BiomeRK8BlockPosR6RandomR13BiomeRegistry
//  void _getFlowerForestRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition // _ZN19LegacyFlowerFeature33_getFlowerForestRandomFlowerBlockERK8BlockPosR6Random8WeakRefTI17SharePtrRefTraitsI18PerlinSimplexNoiseEE
//  void _getPlainsRandomFlowerBlock(BlockPos const&, Random &, WeakRefT<SharePtrRefTraits<PerlinSimplexNoise>>); //TODO: incomplete function definition // _ZN19LegacyFlowerFeature27_getPlainsRandomFlowerBlockERK8BlockPosR6Random8WeakRefTI17SharePtrRefTraitsI18PerlinSimplexNoiseEE
    void _getSwampRandomFlowerBlock(BlockPos const&, Random &); // _ZN19LegacyFlowerFeature26_getSwampRandomFlowerBlockERK8BlockPosR6Random
    void _getForestRandomFlowerBlock(BlockPos const&, Random &); // _ZN19LegacyFlowerFeature27_getForestRandomFlowerBlockERK8BlockPosR6Random
    void _getOverworldRandomFlowerBlock(BlockPos const&, Random &); // _ZN19LegacyFlowerFeature30_getOverworldRandomFlowerBlockERK8BlockPosR6Random
};
