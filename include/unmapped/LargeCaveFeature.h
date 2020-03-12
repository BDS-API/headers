#pragma once



class LargeCaveFeature {

public:
    ~LargeCaveFeature();
    virtual void carve(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, int, int, int, int, int, int, float, float)const;
//  void _thinSand(buffer_span<Block const*>, short, int)const; //TODO: incomplete function definition
    void addRoom(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&)const;
    bool isDiggable(Block const&, Block const&);
    void addTunnel(BlockVolume &, BiomeSource &, Random &, ChunkPos const&, Vec3 const&, Vec3 const&, float, float, float, int, int, float)const;
    void addFeature(BlockVolume &, BiomeSource &, ChunkPos const&, Random &, int, int);
    void detectWater(BlockVolume &, int, int, int, int, int, int)const;
    LargeCaveFeature();
    void apply(BlockVolume &, ChunkPos const&, BiomeSource &, Random &, unsigned int);
};
