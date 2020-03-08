#pragma once



class UnderwaterCanyonFeature : CanyonFeature {

public:
    virtual UnderwaterCanyonFeature::~UnderwaterCanyonFeature();
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const, -1l>)const;

    UnderwaterCanyonFeature(void);
};
