#pragma once

#include <memory>
#include "../bedrock/util/Color.h"


class Material {

public:
    static long mMaterials;
    static long mInitialized;

    void _setNotSolid();
    bool isLiquid()const;
    void _setMapColor(Color const&);
//  Material(MaterialType, Material::Settings, float); //TODO: incomplete function definition
    void teardownMaterials();
    ~Material();
    void _setupSurfaceMaterials();
    void getColor()const;
//  void getMaterial(MaterialType); //TODO: incomplete function definition
    void initMaterials();
//  bool isType(MaterialType)const; //TODO: incomplete function definition
    bool isFlammable()const;
    void getBlocksMotion()const;
    bool isSuperHot()const;
    void _setNotBlockingMotion();
    void getBlocksPrecipitation()const;
    void getType()const;
    void getTranslucency()const;
    bool isReplaceable()const;
    void _setNotBlockingPrecipitation();
    void _setSuperHot();
    bool isTopSolid(bool, bool)const;
    void operator==(Material const&)const;
    bool isSolid()const;
    bool isSolidBlocking()const;
    void _setReplaceable();
    void _setNotAlwaysDestroyable();
    void addMaterial(std::unique_ptr<Material>);
    bool isAlwaysDestroyable()const;
    void _setFlammable();
    void operator!=(Material const&)const;
    void _setNeverBuildable();
    bool isNeverBuildable()const;
};
