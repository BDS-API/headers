#pragma once



class CanyonFeature {

public:
    virtual ~CanyonFeature(); // _ZN13CanyonFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void carve__incomplete0(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float, long)const; //TODO: incomplete function definition // _ZNK13CanyonFeature5carveER11BlockVolumeR11BiomeSourceR6RandomRK8ChunkPosRK4Vec3SB_iiiiiiffN3gsl4spanIKfLln1EEE
    virtual void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int); // _ZN13CanyonFeature10addFeatureER11BlockVolumeR11BiomeSourceRK8ChunkPosR6Randomii
    CanyonFeature(); // _ZN13CanyonFeatureC2Ev
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int); // _ZN13CanyonFeature5applyER11BlockVolumeRK8ChunkPosR11BiomeSourceR6Randomj
    void detectWater(BlockVolume &, int, int, int, int, int, int)const; // _ZNK13CanyonFeature11detectWaterER11BlockVolumeiiiiii
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const; // _ZNK13CanyonFeature9addTunnelER11BlockVolumeR11BiomeSourceR6RandomRK8ChunkPosRK4Vec3SB_fffiif
};
