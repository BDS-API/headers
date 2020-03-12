#pragma once

#include <string>
#include <memory>
#include <vector>


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

    virtual void getExtraRenderLayers();
    virtual void getColor(int)const;
    virtual void onGraphicsModeChanged(bool, bool);
    virtual void animateTick(BlockSource &, BlockPos const&, Random &);
    virtual void getColor(BlockSource &, BlockPos const&)const;
    virtual void getCarriedTexture(unsigned long, int)const;
    virtual void getVisualShape(unsigned short, AABB &, bool)const;
    ~BlockGraphics();
    virtual void getColorForParticle(BlockSource &, BlockPos const&, int)const;
    virtual bool isSeasonTinted(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void setVisualShape(AABB const&);
    virtual void setVisualShape(Vec3 const&, Vec3 const&);
    virtual void getIconYOffset()const;
    void _findOrAppendTexture(std::string const&);
    void enableAllowSame();
    void setMapColor(Color const&);
    void teardownBlocks();
    void getBlockShape()const;
    void texturePaletteSize()const;
    void getTexture(unsigned long, int)const;
    bool isValid()const;
    void setTextureItem(std::string const&);
    void loadCustomIconTexture(Json::Value const&);
    void getTexture(BlockPos const&, unsigned long, int)const;
    void lookupByName(std::string const&, bool);
    void getIconTexture(int)const;
    void getAtlasItem(unsigned long)const;
    void getTextureCarriedVariations(unsigned long, int)const;
//  void setSoundType(BlockSoundType); //TODO: incomplete function definition
    void findBlockModel(std::string const&);
    void getTextureDefaultVariations(unsigned long, int)const;
    void getTextureUVCoordinateSet(std::string const&, int, int);
    void findOrTessellateModel(std::string const&, BlockGeometry::Model const*);
    void getSoundType()const;
//  void registerBlockGraphics(std::vector<Json::Value> &, std::string const&, BlockShape); //TODO: incomplete function definition
    void getTexture(unsigned long, Block const&)const;
    void getTexture(BlockPos const&, unsigned long, Block const&)const;
    BlockGraphics(BlockGraphics const&);
    void setCarriedTextures(BlockGraphics &, Json::Value const&);
    void registerLooseBlockGraphics(std::vector<Json::Value> &, BlockPalette const&);
    void setTextureItem(std::string const&, std::string const&, std::string const&);
    void _initBlockModels(ResourcePackManager &);
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void getMapColor()const;
    void getTessellatedModel(std::string const&, BlockPos const&)const;
    void getTessellatedModelTextures(unsigned long, BlockPos const&, int, bool, std::vector<TextureUVCoordinateSet> &)const;
    void setBrightnessGamma(float);
    BlockGraphics(std::string const&);
    void getBlock()const;
    void initBlocks(ResourcePackManager &, BlockPalette const&);
    void setTextures(BlockGraphics &, Json::Value const&);
    void getPositionVariantIndex(int, BlockPos const&)const;
    void setDefaultCarriedTextures();
    void getTessellatedModel(int, BlockPos const&)const;
//  void setBlockShape(BlockShape); //TODO: incomplete function definition
    void setTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void setSoundType(BlockGraphics &, Json::Value const&);
    void loadCustomBlockShapeModels(Json::Value const&);
    bool isAlphaTested();
    bool isFullAndOpaque()const;
    void getForBlock(BlockLegacy const&);
    void _chooseRandomTexture(float, std::vector<TextureUVCoordinateSet> const&);
    void getRenderLayer()const;
    void setBlockShape(BlockGraphics &, Json::Value const&);
    bool isFullAndOpaque(Block const&);
    bool isFull()const;
    void setCarriedTextureItem(std::string const&);
    void getBlocks();
    void useTessellatedModel()const;
    void useBlockModel()const;
    void getTessellatedPartIndex(std::string const&)const;
    void _loadCustomBlockShapeModel(std::vector<std::string> const&, Json::Value const&);
    void getTextureItem(std::string const&);
//  BlockGraphics(Block const&, BlockGraphics::ConstructorToken); //TODO: incomplete function definition
    bool isInitialized();
    void setBrightnessGamma(BlockGraphics &, Json::Value const&);
    void getForBlock(Block const&);
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&);
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    void chooseRandomTexture(float, std::vector<TextureUVCoordinateSet> const&);
    class ModelItem {

    public:
        ModelItem(BlockGraphics::ModelItem &&);
        ~ModelItem();
        ModelItem();
        ModelItem(BlockGraphics::ModelItem const&);
    };
};
