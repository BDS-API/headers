#pragma once

class FixedBiomeSource : BiomeSource {

    virtual void Fixed~FixedBiomeSource();
    virtual void Fixed~FixedBiomeSource();
    virtual void FixedfillBiomes(LevelChunk &)const;
    virtual void FixedgetBiomeArea(BoundingBox const&, unsigned int)const;
    virtual void FixedcontainsOnly(int, int, int, gsl::span<int const, -1l>)const;
    virtual void FixedgetBiome(int, int)const;
}
