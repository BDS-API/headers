#pragma once

#include "../bedrock/block/unmapped/BlockVolume.h"
#include "../bedrock/util/BlockPos.h"
#include "SurfaceMaterialAttributes.h"
#include "../bedrock/util/Random.h"
#include "../bedrock/level/biome/Biome.h"


namespace VanillaSurfaceBuilders {

    namespace Utils {

        void placeBedrock(Random &, BlockVolume &, BlockPos const&);
        void buildOverworldSurface(Biome const&, Random &, BlockVolume &, SurfaceMaterialAttributes const&, BlockPos const&, float, short);
        void ensureValidSurfaceMaterials(SurfaceMaterialAttributes &);
    };
}
