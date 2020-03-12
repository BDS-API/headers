#pragma once

#include "../../pack/ResourcePackManager.h"
#include "../../../unmapped/TextureUVCoordinateSet.h"
#include "../../../unmapped/Block.h"
#include "../BlockLegacy.h"
#include "../../util/AABB.h"
#include "../../../json/Value.h"
#include <string>
#include "../../util/Random.h"
#include "../../util/Vec3.h"
#include "../../util/Color.h"
#include "../../../unmapped/Model.h"
#include "BlockSource.h"
#include <vector>
#include <memory>
#include "../../util/BlockPos.h"
#include "../../../unmapped/AtlasItemManager.h"
#include "BlockPalette.h"


class BlockGraphics {

public:
    class ModelItem;

    static long SIZE_OFFSET;
    static long mInitialized;
    static long mBlocks;
    static long mTerrainTextureAtlas;
    static long mOwnedBlocks;
    static std::string mBlockLookupMap;
    static long mDummyBlock;
    static std::string mModels;
    static long mBlockModelAccess;
    static std::string mTessellatedModels;

    virtual void setVisualShape(Vec3 const&, Vec3 const&);
    virtual void getCarriedTexture(unsigned long, int)const;
    virtual void onGraphicsModeChanged(bool, bool);
    virtual void getIconYOffset()const;
    virtual void getColor(int)const;
    virtual void getRenderLayer(BlockSource &, BlockPos const&)const;
    ~BlockGraphics();
    virtual void getExtraRenderLayers();
    virtual bool isSeasonTinted(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &);
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(unsigned short, AABB &, bool)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, int)const;
    virtual void setVisualShape(AABB const&);
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    void setTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void _chooseRandomTexture(float, std::vector<TextureUVCoordinateSet> const&);
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void _loadCustomBlockShapeModel(std::vector<std::string> const&, Json::Value const&);
    void getTextureUVCoordinateSet(std::string const&, int, int);
    BlockGraphics(BlockGraphics const&);
    void teardownBlocks();
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    void getTessellatedModel(std::string const&, BlockPos const&)const;
    void setSoundType(BlockGraphics &, Json::Value const&);
    void setMapColor(Color const&);
    bool isValid()const;
    void getForBlock(BlockLegacy const&);
    void getTexture(unsigned long, int)const;
    void getTextureItem(std::string const&);
    void setTextures(BlockGraphics &, Json::Value const&);
    void _initBlockModels(ResourcePackManager &);
//  void setBlockShape(BlockShape); //TODO: incomplete function definition
    void getIconTexture(int)const;
    void chooseRandomTexture(float, std::vector<TextureUVCoordinateSet> const&);
    void lookupByName(std::string const&, bool);
    void setBrightnessGamma(float);
    void enableAllowSame();
    void getMapColor()const;
    bool isFullAndOpaque()const;
    void getTexture(BlockPos const&, unsigned long, Block const&)const;
    void initBlocks(ResourcePackManager &, BlockPalette const&);
    void setTextureItem(std::string const&, std::string const&, std::string const&);
    void getTextureCarriedVariations(unsigned long, int)const;
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&);
    void getBlockShape()const;
    void loadCustomIconTexture(Json::Value const&);
    void findOrTessellateModel(std::string const&, BlockGeometry::Model const*);
    void useTessellatedModel()const;
    void getBlock()const;
    bool isAlphaTested();
    bool isInitialized();
    void setTextureItem(std::string const&);
    void registerLooseBlockGraphics(std::vector<Json::Value> &, BlockPalette const&);
    void setBlockShape(BlockGraphics &, Json::Value const&);
    BlockGraphics(std::string const&);
    void getTexture(unsigned long, Block const&)const;
    void getRenderLayer()const;
    void getTexture(BlockPos const&, unsigned long, int)const;
    void getSoundType()const;
    void loadCustomBlockShapeModels(Json::Value const&);
    void getBlocks();
    void getTessellatedModel(int, BlockPos const&)const;
//  void registerBlockGraphics(std::vector<Json::Value> &, std::string const&, BlockShape); //TODO: incomplete function definition
    void _findOrAppendTexture(std::string const&);
    void setBrightnessGamma(BlockGraphics &, Json::Value const&);
    void getTessellatedPartIndex(std::string const&)const;
    void texturePaletteSize()const;
    void findBlockModel(std::string const&);
    void getAtlasItem(unsigned long)const;
    void setDefaultCarriedTextures();
    bool isFullAndOpaque(Block const&);
    bool isFull()const;
    void useBlockModel()const;
    void setCarriedTextureItem(std::string const&);
    void getForBlock(Block const&);
//  BlockGraphics(Block const&, BlockGraphics::ConstructorToken); //TODO: incomplete function definition
    void getTextureDefaultVariations(unsigned long, int)const;
//  void setSoundType(BlockSoundType); //TODO: incomplete function definition
    void setCarriedTextures(BlockGraphics &, Json::Value const&);
    void getTessellatedModelTextures(unsigned long, BlockPos const&, int, bool, std::vector<TextureUVCoordinateSet> &)const;
    void getPositionVariantIndex(int, BlockPos const&)const;
    class ModelItem {

    public:
        ~ModelItem();
        ModelItem();
        ModelItem(BlockGraphics::ModelItem &&);
        ModelItem(BlockGraphics::ModelItem const&);
    };
};
