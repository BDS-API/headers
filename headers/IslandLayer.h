#pragma once

class IslandLayer : RootLayer_ltLayerValues::Terrain_ge {

public:
    virtual ~IslandLayer();
    virtual void _fillArea(LayerDetails::WorkingData<LayerValues::Terrain, char> &, int, int, int, int)const;

};
