#pragma once



namespace BiomeSurfaceSystem {

    void resolveBuilderImplementation(EntityRegistry &, SurfaceBuilderRegistry const&, unsigned int); // _ZN18BiomeSurfaceSystem28resolveBuilderImplementationER14EntityRegistryRK22SurfaceBuilderRegistryj
    void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short); // _ZN18BiomeSurfaceSystem14buildSurfaceAtER5BiomeR6RandomR11BlockVolumeRK8BlockPosfs
};
