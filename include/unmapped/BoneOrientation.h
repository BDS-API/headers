#pragma once

#include "../bedrock/util/Vec3"


class BoneOrientation {

public:

    BoneOrientation(HashedString const&);
    void init(BoneOrientationTransform &);
    void add(float, float, float, BoneTransformType);
    void scale(float, float, float, BoneTransformType);
    void applyShortestPathBlend(BoneOrientation const&, BoneOrientation const&, float, float);
    void getTransform()const;
    void setDefaultTransform(BoneOrientationTransform const&);
    void setTransform(BoneOrientationTransform const&);
    void getDefaultTransform()const;
    void getDefaultTransform();
    void setRotationRelativeMode(BoneAnimationRelativeMode);
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
    BoneOrientation(void);
    BoneOrientation(BoneOrientation const&);
};
