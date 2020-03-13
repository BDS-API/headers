#pragma once



class LargeCaveFeature {

public:
    ~LargeCaveFeature(); // _ZN16LargeCaveFeatureD2Ev
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const; // _ZNK16LargeCaveFeature5carveER11BlockVolumeR11BiomeSourceR6RandomRK8ChunkPosRK4Vec3SB_iiiiiiff
    LargeCaveFeature(); // _ZN16LargeCaveFeatureC2Ev
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int); // _ZN16LargeCaveFeature5applyER11BlockVolumeRK8ChunkPosR11BiomeSourceR6Randomj
    void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int); // _ZN16LargeCaveFeature10addFeatureER11BlockVolumeR11BiomeSourceRK8ChunkPosR6Randomii
    void addRoom(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&)const; // _ZNK16LargeCaveFeature7addRoomER11BlockVolumeR11BiomeSourceR6RandomRK8ChunkPosRK4Vec3SB_
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const; // _ZNK16LargeCaveFeature9addTunnelER11BlockVolumeR11BiomeSourceR6RandomRK8ChunkPosRK4Vec3SB_fffiif
//  void _thinSand(buffer_span<Block const*>, short, int)const; //TODO: incomplete function definition // _ZNK16LargeCaveFeature9_thinSandE11buffer_spanIPK5BlockEsi
    bool isDiggable(Block const&, Block const&); // _ZN16LargeCaveFeature10isDiggableERK5BlockS2_
    void detectWater(BlockVolume &, int, int, int, int, int, int)const; // _ZNK16LargeCaveFeature11detectWaterER11BlockVolumeiiiiii
};
