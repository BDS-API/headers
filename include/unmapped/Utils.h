#pragma once



namespace VanillaSurfaceBuilders {

    namespace Utils {

        void placeBedrock(Random &, BlockVolume &, BlockPos const&); // _ZN22VanillaSurfaceBuilders5Utils12placeBedrockER6RandomR11BlockVolumeRK8BlockPos
        void buildOverworldSurface(Biome const&, Random &, BlockVolume &, SurfaceMaterialAttributes const&, BlockPos const&, float, short); // _ZN22VanillaSurfaceBuilders5Utils21buildOverworldSurfaceERK5BiomeR6RandomR11BlockVolumeRK25SurfaceMaterialAttributesRK8BlockPosfs
        void ensureValidSurfaceMaterials(SurfaceMaterialAttributes &); // _ZN22VanillaSurfaceBuilders5Utils27ensureValidSurfaceMaterialsER25SurfaceMaterialAttributes
    };
}
