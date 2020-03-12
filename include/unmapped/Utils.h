#pragma once



namespace VanillaSurfaceBuilders {

    namespace Utils {

        void placeBedrock(Random &, BlockVolume &, BlockPos const&);
        void buildOverworldSurface(Biome const&, Random &, BlockVolume &, SurfaceMaterialAttributes const&, BlockPos const&, float, short);
        void ensureValidSurfaceMaterials(SurfaceMaterialAttributes &);
    };
}
