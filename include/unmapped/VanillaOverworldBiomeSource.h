#pragma once

#include "LayerBiomeSource.h"
#include <memory>


class VanillaOverworldBiomeSource : LayerBiomeSource {

public:
    ~VanillaOverworldBiomeSource(); // _ZN27VanillaOverworldBiomeSourceD2Ev
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK27VanillaOverworldBiomeSource12getBiomeAreaERK11BoundingBoxj
//  virtual bool containsOnly(int, int, int, gsl::span<int const, -1l>)const; //TODO: incomplete function definition // _ZNK27VanillaOverworldBiomeSource12containsOnlyEiiiN3gsl4spanIKiLln1EEE
    VanillaOverworldBiomeSource(std::shared_ptr<Layer<Biome *> const>, std::shared_ptr<Layer<Biome *> const>); // _ZN27VanillaOverworldBiomeSourceC2ESt10shared_ptrIK5LayerIP5BiomeEES6_
};
