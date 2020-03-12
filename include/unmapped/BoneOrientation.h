#pragma once

#include "HashedString.h"
#include "BoneOrientationTransform.h"
#include "Matrix.h"
#include "../bedrock/util/Vec3.h"


class BoneOrientation {

public:
    void getPivot();
    void transform3(Vec3 &);
    void shouldApplyLocalPreTransformMatrix()const;
    void setDefaultTransform(BoneOrientationTransform const&);
//  void scale(float, float, float, BoneTransformType); //TODO: incomplete function definition
    void setTransform(BoneOrientationTransform const&);
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition
    BoneOrientation(HashedString const&);
    void getLocalPreTransformMatrix()const;
    void copySourceDataFrom(BoneOrientation const&);
    void getTransform()const;
    void updateLocalPreTransformMatrix();
    void setDefaultPose();
    void applyShortestPathBlend(BoneOrientation const&, BoneOrientation const&, float, float);
    void getDefaultTransform();
    void setPivot(Vec3 const&);
    void getMatrix()const;
    void shouldOverrideStackMatrix()const;
    void setOverrideStackMatrix(bool);
    void getRotationRelativeMode()const;
    ~BoneOrientation();
    void getIdentityBoneOrientation();
    BoneOrientation(BoneOrientation const&);
//  void add(float, float, float, BoneTransformType); //TODO: incomplete function definition
    void getPivot()const;
    void init(BoneOrientationTransform &);
    void setMatrix(Matrix const&);
    void rotateLocalPreTransformMatrix(float, Vec3 const&);
    BoneOrientation();
    void getDefaultTransform()const;
    void getName()const;
};
