#pragma once

class UnderwaterCanyonFeature : CanyonFeature {

    virtual void Underwater~UnderwaterCanyonFeature();
    virtual void Underwater~UnderwaterCanyonFeature();
    virtual void Underwatercarve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const, -1l>)const;
    virtual void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);
}
