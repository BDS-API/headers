#pragma once



class IslandLayer : RootLayer<LayerValues::Terrain> {

public:
    IslandLayer::~IslandLayer()
    virtual void _fillArea(LayerDetails::WorkingData<LayerValues::Terrain, char> &, int, int, int, int)const;

};
