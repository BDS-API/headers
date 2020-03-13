#pragma once



namespace LargeHellCaveFeature {

    void addRoom(BlockVolume &, Random &, LevelChunk &, Vec3 const&)const; // _ZNK20LargeHellCaveFeature7addRoomER11BlockVolumeR6RandomR10LevelChunkRK4Vec3
    void addTunnel(BlockVolume &, Random &, LevelChunk &, Vec3 const&, float, float, float, int, int, float)const; // _ZNK20LargeHellCaveFeature9addTunnelER11BlockVolumeR6RandomR10LevelChunkRK4Vec3fffiif
    void addFeature(BlockVolume &, LevelChunk &, Random &, int, int); // _ZN20LargeHellCaveFeature10addFeatureER11BlockVolumeR10LevelChunkR6Randomii
    void apply(unsigned int, BlockVolume &, LevelChunk &, Random &); // _ZN20LargeHellCaveFeature5applyEjR11BlockVolumeR10LevelChunkR6Random
};
