#pragma once



namespace BiomeSurfaceSystem {

    void resolveBuilderImplementation(EntityRegistry &, SurfaceBuilderRegistry const&, unsigned int);
    void buildSurfaceAt(Biome &, Random &, BlockVolume &, BlockPos const&, float, short);
};
