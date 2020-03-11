#pragma once

#include "../bedrock/util/Vec3.h"
#include "./HashedString.h"
#include "./BoneOrientationTransform.h"
#include "./BoneOrientation.h"
#include "./Matrix.h"


class BoneOrientation {

public:

    BoneOrientation(HashedString const&);
    void init(BoneOrientationTransform &);
//  void add(float, float, float, BoneTransformType); //TODO: incomplete function definition
//  void scale(float, float, float, BoneTransformType); //TODO: incomplete function definition
    void applyShortestPathBlend(BoneOrientation const&, BoneOrientation const&, float, float);
    void getTransform()const;
    void setDefaultTransform(BoneOrientationTransform const&);
    void setTransform(BoneOrientationTransform const&);
    void getDefaultTransform()const;
    void getDefaultTransform();
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition
    void getRotationRelativeMode()const;
    void setPivot(Vec3 const&);
    void getPivot()const;
    void getPivot();
    void transform3(Vec3 &);
    void getName()const;
    void setMatrix(Matrix const&);
    void getMatrix()const;
    void shouldOverrideStackMatrix()const;
    void setOverrideStackMatrix(bool);
    void updateLocalPreTransformMatrix();
    void shouldApplyLocalPreTransformMatrix()const;
    void rotateLocalPreTransformMatrix(float, Vec3 const&);
    void getLocalPreTransformMatrix()const;
    void copySourceDataFrom(BoneOrientation const&);
    void getIdentityBoneOrientation();
    void setDefaultPose();
    BoneOrientation();
    ~BoneOrientation();
    BoneOrientation(BoneOrientation const&);
};
