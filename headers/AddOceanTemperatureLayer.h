#pragma once

class AddOceanTemperatureLayer : RootLayer_ltBiomeTemperatureCategory_ge {

    virtual void AddOceanTemperatureLayer::~AddOceanTemperatureLayer();
    virtual void AddOceanTemperatureLayer::~AddOceanTemperatureLayer();
    virtual void init(long);
    virtual void RootLayer<BiomeTemperatureCategory>::_allocateAndFill(unsigned long, int, int, unsigned int, unsigned int)const;
    virtual void _fillArea(LayerDetails::WorkingData<BiomeTemperatureCategory, char> &, int, int, int, int)const;
}
