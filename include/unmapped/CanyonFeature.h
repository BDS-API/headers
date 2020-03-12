#pragma once



class CanyonFeature {

public:
    ~CanyonFeature();
//  virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, gsl::span<float const, -1l>)const; //TODO: incomplete function definition
    virtual void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);
    void detectWater(BlockVolume &, int, int, int, int, int, int)const;
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const;
    CanyonFeature();
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int);
};
