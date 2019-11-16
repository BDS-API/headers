#pragma once

class RegionHillsLayer {

    virtual ~RegionHillsLayer();
    virtual ~RegionHillsLayer();
    virtual void MixerLayer<Biome *, Biome *, >::init(long);
    virtual void MixerLayer<Biome *, Biome *, >::_allocateAndFill(unsigned long, int, int, unsigned int, unsigned int)const;
    virtual void _fillArea(LayerDetails::WorkingData<Biome *, Biome *> &, int, int, int, int, int)const;
    virtual void _getAreaRead(int, int, unsigned int, unsigned int)const;
}
