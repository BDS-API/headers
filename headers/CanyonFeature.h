#pragma once

class CanyonFeature {

    virtual void CanyonFeature::~CanyonFeature();
    virtual void CanyonFeature::~CanyonFeature();
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const, -1l>)const;
    virtual void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);
}
