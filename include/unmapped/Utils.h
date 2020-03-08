#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/level/biome/Biome"
#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockVolume"


using namespace VanillaSurfaceBuilders;

class Utils {

public:

    void placeBedrock(Random &, BlockVolume &, BlockPos const&);
    void buildOverworldSurface(Biome const&, Random &, BlockVolume &, SurfaceMaterialAttributes const&, BlockPos const&, float, short);
    void ensureValidSurfaceMaterials(SurfaceMaterialAttributes &);
};
