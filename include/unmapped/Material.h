#pragma once

#include <memory>


class Material {

public:
    static long mMaterials;
    static long mInitialized;

    void operator==(Material const&)const;
    bool isReplaceable()const;
    void _setupSurfaceMaterials();
    bool isTopSolid(bool, bool)const;
    void getTranslucency()const;
    void getBlocksMotion()const;
    void _setMapColor(Color const&);
    void getColor()const;
    void _setReplaceable();
    void _setNotBlockingMotion();
    void _setNotBlockingPrecipitation();
    bool isLiquid()const;
    void _setNotSolid();
    void _setNotAlwaysDestroyable();
//  Material(MaterialType, Material::Settings, float); //TODO: incomplete function definition
    void teardownMaterials();
//  void getMaterial(MaterialType); //TODO: incomplete function definition
    bool isSuperHot()const;
    bool isNeverBuildable()const;
    bool isFlammable()const;
    void getBlocksPrecipitation()const;
//  bool isType(MaterialType)const; //TODO: incomplete function definition
    ~Material();
    bool isSolid()const;
    void _setNeverBuildable();
    void _setFlammable();
    void _setSuperHot();
    void initMaterials();
    void addMaterial(std::unique_ptr<Material>);
    void operator!=(Material const&)const;
    bool isSolidBlocking()const;
    void getType()const;
    bool isAlwaysDestroyable()const;
};
