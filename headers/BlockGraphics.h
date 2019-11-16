#pragma once

class BlockGraphics {

    virtual void BlockGraphics::~BlockGraphics();
    virtual void BlockGraphics::~BlockGraphics();
    virtual void getIconYOffset(void)const;
    virtual void getColor(int)const;
    virtual void getColor(BlockSource &, BlockPos const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, int)const;
    virtual void isSeasonTinted(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool);
    virtual void getRenderLayer(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers(void);
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVisualShape(unsigned short, AABB &, bool)const;
    virtual void getCarriedTexture(unsigned long, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &);
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void setVisualShape(AABB const&);
    virtual void setVisualShape(Vec3 const&, Vec3 const&);
}
