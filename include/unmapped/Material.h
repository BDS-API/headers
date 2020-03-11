#pragma once

#include <memory>
#include "../bedrock/util/Color.h"
#include "./Material.h"


class Material {

public:
    static long mMaterials;
    static long mInitialized;


    void getType()const;
    void operator==(Material const&)const;
    void operator!=(Material const&)const;
    void initMaterials();
    void teardownMaterials();
    void _setupSurfaceMaterials();
//  Material(MaterialType, Material::Settings, float); //TODO: incomplete function definition
    void _setReplaceable();
    ~Material();
//  bool isType(MaterialType)const; //TODO: incomplete function definition
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
//  void getMaterial(MaterialType); //TODO: incomplete function definition
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
