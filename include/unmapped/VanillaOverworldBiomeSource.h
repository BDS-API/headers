#pragma once

#include "BoundingBox.h"
#include "../bedrock/level/biome/Biome.h"
#include "LayerBiomeSource.h"
#include <memory>


class VanillaOverworldBiomeSource : LayerBiomeSource {

public:
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const;
    ~VanillaOverworldBiomeSource();
//  virtual bool containsOnly(int, int, int, gsl::span<int const, -1l>)const; //TODO: incomplete function definition
//  VanillaOverworldBiomeSource(std::shared_ptr<Layer<Biome *> const>, std::shared_ptr<Layer<Biome *> const>); //TODO: incomplete function definition
};
