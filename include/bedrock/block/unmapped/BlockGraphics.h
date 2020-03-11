#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "../../util/AABB.h"
#include "../../../unmapped/Model.h"
#include "./BlockSource.h"
#include "../../util/Vec3.h"
#include <memory>
#include "../BlockLegacy.h"
#include "../../util/BlockPos.h"
#include "../../pack/ResourcePackManager.h"
#include "../../../unmapped/AtlasItemManager.h"
#include "./BlockPalette.h"
#include "../../../json/Value.h"
#include <vector>
#include "../../../unmapped/TextureUVCoordinateSet.h"
#include "./BlockGraphics.h"
#include "../../util/Color.h"
#include <string>


class BlockGraphics {

public:
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

    virtual ~BlockGraphics();
    virtual void getIconYOffset()const;
    virtual void getColor(int)const;
    virtual void getColor(BlockSource &, BlockPos const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, int)const;
    virtual bool isSeasonTinted(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool);
    virtual void getRenderLayer(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers();
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVisualShape(unsigned short, AABB &, bool)const;
    virtual void getCarriedTexture(unsigned long, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &);
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void setVisualShape(AABB const&);
    virtual void setVisualShape(Vec3 const&, Vec3 const&);

    void getForBlock(Block const&);
    void getForBlock(BlockLegacy const&);
    void getBlocks();
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    void setTextures(BlockGraphics &, Json::Value const&);
    void setTextureItem(std::string const&);
    void setTextureItem(std::string const&, std::string const&, std::string const&);
    void setTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void setCarriedTextures(BlockGraphics &, Json::Value const&);
    void setCarriedTextureItem(std::string const&);
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&);
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void setBlockShape(BlockGraphics &, Json::Value const&);
    void getBlockShape()const;
//  void setBlockShape(BlockShape); //TODO: incomplete function definition
    void setBrightnessGamma(BlockGraphics &, Json::Value const&);
    void setSoundType(BlockGraphics &, Json::Value const&);
//  void setSoundType(BlockSoundType); //TODO: incomplete function definition
    bool isInitialized();
    void useBlockModel()const;
    void useTessellatedModel()const;
    void getTessellatedModel(int, BlockPos const&)const;
    void getTessellatedModel(std::string const&, BlockPos const&)const;
    void getTessellatedPartIndex(std::string const&)const;
    void loadCustomIconTexture(Json::Value const&);
    void _findOrAppendTexture(std::string const&);
    void getTextureItem(std::string const&);
    void _loadCustomBlockShapeModel(std::vector<std::string, std::allocator<std::string>> const&, Json::Value const&);
    void findBlockModel(std::string const&);
    void findOrTessellateModel(std::string const&, BlockGeometry::Model const*);
    void loadCustomBlockShapeModels(Json::Value const&);
//  void registerBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value>> &, std::string const&, BlockShape); //TODO: incomplete function definition
    void getBlock()const;
    void texturePaletteSize()const;
    void setDefaultCarriedTextures();
    void registerLooseBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value>> &, BlockPalette const&);
    void initBlocks(ResourcePackManager &, BlockPalette const&);
    void _initBlockModels(ResourcePackManager &);
    void setMapColor(Color const&);
    void enableAllowSame();
    void teardownBlocks();
    BlockGraphics(std::string const&);
//  BlockGraphics(Block const&, BlockGraphics::ConstructorToken); //TODO: incomplete function definition
    void getMapColor()const;
    void getIconTexture(int)const;
    void getTextureCarriedVariations(unsigned long, int)const;
    void getTexture(unsigned long, int)const;
    void getTextureDefaultVariations(unsigned long, int)const;
    void getTexture(unsigned long, Block const&)const;
    void getTexture(BlockPos const&, unsigned long, int)const;
    void chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet>> const&);
    void getTexture(BlockPos const&, unsigned long, Block const&)const;
    void _chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet>> const&);
    bool isValid()const;
    void getAtlasItem(unsigned long)const;
    void getTextureUVCoordinateSet(std::string const&, int, int);
    bool isAlphaTested();
    void getRenderLayer()const;
    bool isFull()const;
    bool isFullAndOpaque()const;
    bool isFullAndOpaque(Block const&);
    void getSoundType()const;
    void lookupByName(std::string const&, bool);
    void getTessellatedModelTextures(unsigned long, BlockPos const&, int, bool, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet>> &)const;
    void getPositionVariantIndex(int, BlockPos const&)const;
    void setBrightnessGamma(float);
    BlockGraphics(BlockGraphics const&);
};
