#pragma once

#include <memory>


class Material {

public:
    static long mMaterials;
    static long mInitialized;

    void getType()const; // _ZNK8Material7getTypeEv
    void operator==(Material const&)const; // _ZNK8MaterialeqERKS_
    void operator!=(Material const&)const; // _ZNK8MaterialneERKS_
    void initMaterials(); // _ZN8Material13initMaterialsEv
    void teardownMaterials(); // _ZN8Material17teardownMaterialsEv
    void _setupSurfaceMaterials(); // _ZN8Material22_setupSurfaceMaterialsEv
//  Material(MaterialType, Material::Settings, float); //TODO: incomplete function definition // _ZN8MaterialC2E12MaterialTypeNS_8SettingsEf
    void _setReplaceable(); // _ZN8Material15_setReplaceableEv
    ~Material(); // _ZN8MaterialD2Ev
//  bool isType(MaterialType)const; //TODO: incomplete function definition // _ZNK8Material6isTypeE12MaterialType
    bool isSolidBlocking()const; // _ZNK8Material15isSolidBlockingEv
    void getBlocksMotion()const; // _ZNK8Material15getBlocksMotionEv
    bool isFlammable()const; // _ZNK8Material11isFlammableEv
    bool isNeverBuildable()const; // _ZNK8Material16isNeverBuildableEv
    bool isAlwaysDestroyable()const; // _ZNK8Material19isAlwaysDestroyableEv
    bool isReplaceable()const; // _ZNK8Material13isReplaceableEv
    bool isLiquid()const; // _ZNK8Material8isLiquidEv
    void getTranslucency()const; // _ZNK8Material15getTranslucencyEv
    void getBlocksPrecipitation()const; // _ZNK8Material22getBlocksPrecipitationEv
    bool isSolid()const; // _ZNK8Material7isSolidEv
    void getColor()const; // _ZNK8Material8getColorEv
    bool isSuperHot()const; // _ZNK8Material10isSuperHotEv
    bool isTopSolid(bool, bool)const; // _ZNK8Material10isTopSolidEbb
//  void getMaterial(MaterialType); //TODO: incomplete function definition // _ZN8Material11getMaterialE12MaterialType
    void addMaterial(std::unique_ptr<Material>); // _ZN8Material11addMaterialESt10unique_ptrIS_St14default_deleteIS_EE
    void _setFlammable(); // _ZN8Material13_setFlammableEv
    void _setNotAlwaysDestroyable(); // _ZN8Material24_setNotAlwaysDestroyableEv
    void _setNeverBuildable(); // _ZN8Material18_setNeverBuildableEv
    void _setNotBlockingMotion(); // _ZN8Material21_setNotBlockingMotionEv
    void _setNotBlockingPrecipitation(); // _ZN8Material28_setNotBlockingPrecipitationEv
    void _setNotSolid(); // _ZN8Material12_setNotSolidEv
    void _setSuperHot(); // _ZN8Material12_setSuperHotEv
    void _setMapColor(Color const&); // _ZN8Material12_setMapColorERK5Color
};
