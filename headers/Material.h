#pragma once

class Material {

public:
    static long Material::mMaterials;
    static long Material::mInitialized;


    void getType(void)const;
    void initMaterials(void);
    void teardownMaterials(void);
    void _setupSurfaceMaterials(void);
    void Material(MaterialType, Material::Settings, float);
    void _setReplaceable(void);
    bool isType(MaterialType)const;
    bool isSolidBlocking(void)const;
    void getBlocksMotion(void)const;
    bool isFlammable(void)const;
    bool isNeverBuildable(void)const;
    bool isAlwaysDestroyable(void)const;
    bool isReplaceable(void)const;
    bool isLiquid(void)const;
    void getTranslucency(void)const;
    void getBlocksPrecipitation(void)const;
    bool isSolid(void)const;
    void getColor(void)const;
    bool isSuperHot(void)const;
    bool isTopSolid(bool, bool)const;
    void getMaterial(MaterialType);
    void addMaterial(std::unique_ptr<Material, std::default_delete<Material>>);
    void _setFlammable(void);
    void _setNotAlwaysDestroyable(void);
    void _setNeverBuildable(void);
    void _setNotBlockingMotion(void);
    void _setNotBlockingPrecipitation(void);
    void _setNotSolid(void);
    void _setSuperHot(void);
    void _setMapColor(Color const&);
};
