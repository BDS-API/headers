#pragma once

using namespace VanillaSurfaceBuilders;

class Utils {

public:

    void placeBedrock(Random &, BlockVolume &, BlockPos const&);
    void buildOverworldSurface(Biome const&, Random &, BlockVolume &, SurfaceMaterialAttributes const&, BlockPos const&, float, short);
    void ensureValidSurfaceMaterials(SurfaceMaterialAttributes &);
};
