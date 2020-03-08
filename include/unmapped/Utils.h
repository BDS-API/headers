#pragma once

#include "../bedrock/level/biome/Biome"
#include "../bedrock/block/unmapped/BlockVolume"
#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"


using namespace VanillaSurfaceBuilders;

class Utils {

public:

    void placeBedrock(Random &, BlockVolume &, BlockPos const&);
    void buildOverworldSurface(Biome const&, Random &, BlockVolume &, SurfaceMaterialAttributes const&, BlockPos const&, float, short);
    void ensureValidSurfaceMaterials(SurfaceMaterialAttributes &);
};
