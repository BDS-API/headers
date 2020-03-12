#pragma once



namespace LargeHellCaveFeature {

    void addTunnel(BlockVolume &, Random &, LevelChunk &, Vec3 const&, float, float, float, int, int, float)const;
    void apply(unsigned int, BlockVolume &, LevelChunk &, Random &);
    void addRoom(BlockVolume &, Random &, LevelChunk &, Vec3 const&)const;
    void addFeature(BlockVolume &, LevelChunk &, Random &, int, int);
};
