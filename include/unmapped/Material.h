#pragma once

#include "../bedrock/util/Color"


class Material {

public:
    static long mMaterials;
    static long mInitialized;


    void getType()const;
    void initMaterials();
    void teardownMaterials();
    void _setupSurfaceMaterials();
    Material(MaterialType, Material::Settings, float);
    void _setReplaceable();
    bool isType(MaterialType)const;
    bool isSolidBlocking()const;
    void getBlocksMotion()const;
    bool isFlammable()const;
    bool isNeverBuildable()const;
    bool isAlwaysDestroyable()const;
    bool isReplaceable()const;
    bool isLiquid()const;
    void getTranslucency()const;
    void getBlocksPrecipitation()const;
    bool isSolid()const;
    void getColor()const;
    bool isSuperHot()const;
    bool isTopSolid(bool, bool)const;
    void getMaterial(MaterialType);
    void addMaterial(std::unique_ptr<Material, std::default_delete<Material>>);
    void _setFlammable();
    void _setNotAlwaysDestroyable();
    void _setNeverBuildable();
    void _setNotBlockingMotion();
    void _setNotBlockingPrecipitation();
    void _setNotSolid();
    void _setSuperHot();
    void _setMapColor(Color const&);
};
