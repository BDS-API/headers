#pragma once

#include <memory>
#include "LayerBiomeSource.h"


class VanillaOverworldBiomeSource : public LayerBiomeSource {

public:
    virtual ~VanillaOverworldBiomeSource(); // _ZN27VanillaOverworldBiomeSourceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getBiomeArea(BoundingBox const&, unsigned int)const; // _ZNK27VanillaOverworldBiomeSource12getBiomeAreaERK11BoundingBoxj
    virtual bool containsOnly__incomplete0(int, int, int, long)const; //TODO: incomplete function definition // _ZNK27VanillaOverworldBiomeSource12containsOnlyEiiiN3gsl4spanIKiLln1EEE
    VanillaOverworldBiomeSource(std::shared_ptr<long const>, std::shared_ptr<long const>); // _ZN27VanillaOverworldBiomeSourceC2ESt10shared_ptrIK5LayerIP5BiomeEES6_
};
