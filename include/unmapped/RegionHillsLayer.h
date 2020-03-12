#pragma once

#include <memory>


class RegionHillsLayer /*MixerLayer<Biome *, Biome *>*/ { //TODO: incomplete class definition

public:
//  virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int)const; //TODO: incomplete function definition
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;
    ~RegionHillsLayer();
    RegionHillsLayer(unsigned int, std::shared_ptr<Layer<Biome *>> &, std::shared_ptr<Layer<int>> &, BiomeRegistry const&);
};
