#pragma once

class IslandLayer : RootLayer_ltLayerValues::Terrain_ge {

    virtual void ~IslandLayer();
    virtual void ~IslandLayer();
    virtual void LayerDetails::LayerBase::init(long);
    virtual void RootLayer<LayerValues::Terrain>::_allocateAndFill(unsigned long, int, int, unsigned int, unsigned int)const;
    virtual void _fillArea(LayerDetails::WorkingData<LayerValues::Terrain, char> &, int, int, int, int)const;
}