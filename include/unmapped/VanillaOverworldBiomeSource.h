#pragma once

#include <memory>
#include "LayerBiomeSource.h"


class VanillaOverworldBiomeSource : LayerBiomeSource {

public:
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
//  virtual bool containsOnly(int, int, int, gsl::span<int const, -1l>)const; //TODO: incomplete function definition
    ~VanillaOverworldBiomeSource();
    VanillaOverworldBiomeSource(std::shared_ptr<Layer<Biome *> const>, std::shared_ptr<Layer<Biome *> const>);
};
