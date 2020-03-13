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

    ~BlockGraphics(); // _ZN13BlockGraphicsD2Ev
    virtual void getIconYOffset()const; // _ZNK13BlockGraphics14getIconYOffsetEv
    virtual void getColor(int)const; // _ZNK13BlockGraphics8getColorEi
    virtual void getColor(BlockSource &, BlockPos const&)const; // _ZNK13BlockGraphics8getColorER11BlockSourceRK8BlockPos
    virtual void getColorForParticle(BlockSource &, BlockPos const&, int)const; // _ZNK13BlockGraphics19getColorForParticleER11BlockSourceRK8BlockPosi
    virtual bool isSeasonTinted(BlockSource &, BlockPos const&)const; // _ZNK13BlockGraphics14isSeasonTintedER11BlockSourceRK8BlockPos
    virtual void onGraphicsModeChanged(bool, bool); // _ZN13BlockGraphics21onGraphicsModeChangedEbb
    virtual void getRenderLayer(BlockSource &, BlockPos const&)const; // _ZNK13BlockGraphics14getRenderLayerER11BlockSourceRK8BlockPos
    virtual void getExtraRenderLayers(); // _ZN13BlockGraphics20getExtraRenderLayersEv
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK13BlockGraphics14getVisualShapeERK5BlockR4AABBb
    virtual void getVisualShape(unsigned short, AABB &, bool)const; // _ZNK13BlockGraphics14getVisualShapeEtR4AABBb
    virtual void getCarriedTexture(unsigned long, int)const; // _ZNK13BlockGraphics17getCarriedTextureEmi
    virtual void animateTick(BlockSource &, BlockPos const&, Random &); // _ZN13BlockGraphics11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void randomlyModifyPosition(BlockPos const&, int &)const; // _ZNK13BlockGraphics22randomlyModifyPositionERK8BlockPosRi
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK13BlockGraphics22randomlyModifyPositionERK8BlockPos
    virtual void setVisualShape(AABB const&); // _ZN13BlockGraphics14setVisualShapeERK4AABB
    virtual void setVisualShape(Vec3 const&, Vec3 const&); // _ZN13BlockGraphics14setVisualShapeERK4Vec3S2_
    void getForBlock(Block const&); // _ZN13BlockGraphics11getForBlockERK5Block
    void getForBlock(BlockLegacy const&); // _ZN13BlockGraphics11getForBlockERK11BlockLegacy
    void getBlocks(); // _ZN13BlockGraphics9getBlocksEv
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>); // _ZN13BlockGraphics19setAtlasItemManagerESt10shared_ptrI16AtlasItemManagerE
    void setTextures(BlockGraphics &, Json::Value const&); // _ZN13BlockGraphics11setTexturesERS_RKN4Json5ValueE
    void setTextureItem(std::string const&); // _ZN13BlockGraphics14setTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setTextureItem(std::string const&, std::string const&, std::string const&); // _ZN13BlockGraphics14setTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    void setTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&); // _ZN13BlockGraphics14setTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_S7_S7_
    void setCarriedTextures(BlockGraphics &, Json::Value const&); // _ZN13BlockGraphics18setCarriedTexturesERS_RKN4Json5ValueE
    void setCarriedTextureItem(std::string const&); // _ZN13BlockGraphics21setCarriedTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&); // _ZN13BlockGraphics21setCarriedTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&); // _ZN13BlockGraphics21setCarriedTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_S7_S7_
    void setBlockShape(BlockGraphics &, Json::Value const&); // _ZN13BlockGraphics13setBlockShapeERS_RKN4Json5ValueE
    void getBlockShape()const; // _ZNK13BlockGraphics13getBlockShapeEv
//  void setBlockShape(BlockShape); //TODO: incomplete function definition // _ZN13BlockGraphics13setBlockShapeE10BlockShape
    void setBrightnessGamma(BlockGraphics &, Json::Value const&); // _ZN13BlockGraphics18setBrightnessGammaERS_RKN4Json5ValueE
    void setSoundType(BlockGraphics &, Json::Value const&); // _ZN13BlockGraphics12setSoundTypeERS_RKN4Json5ValueE
//  void setSoundType(BlockSoundType); //TODO: incomplete function definition // _ZN13BlockGraphics12setSoundTypeE14BlockSoundType
    bool isInitialized(); // _ZN13BlockGraphics13isInitializedEv
    void useBlockModel()const; // _ZNK13BlockGraphics13useBlockModelEv
    void useTessellatedModel()const; // _ZNK13BlockGraphics19useTessellatedModelEv
    void getTessellatedModel(int, BlockPos const&)const; // _ZNK13BlockGraphics19getTessellatedModelEiRK8BlockPos
    void getTessellatedModel(std::string const&, BlockPos const&)const; // _ZNK13BlockGraphics19getTessellatedModelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos
    void getTessellatedPartIndex(std::string const&)const; // _ZNK13BlockGraphics23getTessellatedPartIndexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadCustomIconTexture(Json::Value const&); // _ZN13BlockGraphics21loadCustomIconTextureERKN4Json5ValueE
    void _findOrAppendTexture(std::string const&); // _ZN13BlockGraphics20_findOrAppendTextureERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getTextureItem(std::string const&); // _ZN13BlockGraphics14getTextureItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _loadCustomBlockShapeModel(std::vector<std::string> const&, Json::Value const&); // _ZN13BlockGraphics26_loadCustomBlockShapeModelERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EERKN4Json5ValueE
    void findBlockModel(std::string const&); // _ZN13BlockGraphics14findBlockModelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void findOrTessellateModel(std::string const&, BlockGeometry::Model const*); // _ZN13BlockGraphics21findOrTessellateModelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKN13BlockGeometry5ModelE
    void loadCustomBlockShapeModels(Json::Value const&); // _ZN13BlockGraphics26loadCustomBlockShapeModelsERKN4Json5ValueE
//  void registerBlockGraphics(std::vector<Json::Value> &, std::string const&, BlockShape); //TODO: incomplete function definition // _ZN13BlockGraphics21registerBlockGraphicsERSt6vectorIN4Json5ValueESaIS2_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE10BlockShape
    void getBlock()const; // _ZNK13BlockGraphics8getBlockEv
    void texturePaletteSize()const; // _ZNK13BlockGraphics18texturePaletteSizeEv
    void setDefaultCarriedTextures(); // _ZN13BlockGraphics25setDefaultCarriedTexturesEv
    void registerLooseBlockGraphics(std::vector<Json::Value> &, BlockPalette const&); // _ZN13BlockGraphics26registerLooseBlockGraphicsERSt6vectorIN4Json5ValueESaIS2_EERK12BlockPalette
    void initBlocks(ResourcePackManager &, BlockPalette const&); // _ZN13BlockGraphics10initBlocksER19ResourcePackManagerRK12BlockPalette
    void _initBlockModels(ResourcePackManager &); // _ZN13BlockGraphics16_initBlockModelsER19ResourcePackManager
    void setMapColor(Color const&); // _ZN13BlockGraphics11setMapColorERK5Color
    void enableAllowSame(); // _ZN13BlockGraphics15enableAllowSameEv
    void teardownBlocks(); // _ZN13BlockGraphics14teardownBlocksEv
    BlockGraphics(std::string const&); // _ZN13BlockGraphicsC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  BlockGraphics(Block const&, BlockGraphics::ConstructorToken); //TODO: incomplete function definition // _ZN13BlockGraphicsC2ERK5BlockNS_16ConstructorTokenE
    void getMapColor()const; // _ZNK13BlockGraphics11getMapColorEv
    void getIconTexture(int)const; // _ZNK13BlockGraphics14getIconTextureEi
    void getTextureCarriedVariations(unsigned long, int)const; // _ZNK13BlockGraphics27getTextureCarriedVariationsEmi
    void getTexture(unsigned long, int)const; // _ZNK13BlockGraphics10getTextureEmi
    void getTextureDefaultVariations(unsigned long, int)const; // _ZNK13BlockGraphics27getTextureDefaultVariationsEmi
    void getTexture(unsigned long, Block const&)const; // _ZNK13BlockGraphics10getTextureEmRK5Block
    void getTexture(BlockPos const&, unsigned long, int)const; // _ZNK13BlockGraphics10getTextureERK8BlockPosmi
    void chooseRandomTexture(float, std::vector<TextureUVCoordinateSet> const&); // _ZN13BlockGraphics19chooseRandomTextureEfRKSt6vectorI22TextureUVCoordinateSetSaIS1_EE
    void getTexture(BlockPos const&, unsigned long, Block const&)const; // _ZNK13BlockGraphics10getTextureERK8BlockPosmRK5Block
    void _chooseRandomTexture(float, std::vector<TextureUVCoordinateSet> const&); // _ZN13BlockGraphics20_chooseRandomTextureEfRKSt6vectorI22TextureUVCoordinateSetSaIS1_EE
    bool isValid()const; // _ZNK13BlockGraphics7isValidEv
    void getAtlasItem(unsigned long)const; // _ZNK13BlockGraphics12getAtlasItemEm
    void getTextureUVCoordinateSet(std::string const&, int, int); // _ZN13BlockGraphics25getTextureUVCoordinateSetERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEii
    bool isAlphaTested(); // _ZN13BlockGraphics13isAlphaTestedEv
    void getRenderLayer()const; // _ZNK13BlockGraphics14getRenderLayerEv
    bool isFull()const; // _ZNK13BlockGraphics6isFullEv
    bool isFullAndOpaque()const; // _ZNK13BlockGraphics15isFullAndOpaqueEv
    bool isFullAndOpaque(Block const&); // _ZN13BlockGraphics15isFullAndOpaqueERK5Block
    void getSoundType()const; // _ZNK13BlockGraphics12getSoundTypeEv
    void lookupByName(std::string const&, bool); // _ZN13BlockGraphics12lookupByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void getTessellatedModelTextures(unsigned long, BlockPos const&, int, bool, std::vector<TextureUVCoordinateSet> &)const; // _ZNK13BlockGraphics27getTessellatedModelTexturesEmRK8BlockPosibRSt6vectorI22TextureUVCoordinateSetSaIS4_EE
    void getPositionVariantIndex(int, BlockPos const&)const; // _ZNK13BlockGraphics23getPositionVariantIndexEiRK8BlockPos
    void setBrightnessGamma(float); // _ZN13BlockGraphics18setBrightnessGammaEf
    BlockGraphics(BlockGraphics const&); // _ZN13BlockGraphicsC2ERKS_
    class ModelItem {

    public:
        ModelItem(); // _ZN13BlockGraphics9ModelItemC2Ev
        ~ModelItem(); // _ZN13BlockGraphics9ModelItemD2Ev
        ModelItem(BlockGraphics::ModelItem const&); // _ZN13BlockGraphics9ModelItemC2ERKS0_
        ModelItem(BlockGraphics::ModelItem &&); // _ZN13BlockGraphics9ModelItemC2EOS0_
    };
};
