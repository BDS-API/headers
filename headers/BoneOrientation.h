#pragma once

class BoneOrientation {

public:

    void BoneOrientation(HashedString const&);
    void init(BoneOrientationTransform &);
    void add(float, float, float, BoneTransformType);
    void scale(float, float, float, BoneTransformType);
    void applyShortestPathBlend(BoneOrientation const&, BoneOrientation const&, float, float);
    void getTransform(void)const;
    void setDefaultTransform(BoneOrientationTransform const&);
    void setTransform(BoneOrientationTransform const&);
    void getDefaultTransform(void)const;
    void getDefaultTransform(void);
    void setRotationRelativeMode(BoneAnimationRelativeMode);
    void getRotationRelativeMode(void)const;
    void setPivot(Vec3 const&);
    void getPivot(void)const;
    void getPivot(void);
    void transform3(Vec3 &);
    void getName(void)const;
    void setMatrix(Matrix const&);
    void getMatrix(void)const;
    void shouldOverrideStackMatrix(void)const;
    void setOverrideStackMatrix(bool);
    void updateLocalPreTransformMatrix(void);
    void shouldApplyLocalPreTransformMatrix(void)const;
    void rotateLocalPreTransformMatrix(float, Vec3 const&);
    void getLocalPreTransformMatrix(void)const;
    void copySourceDataFrom(BoneOrientation const&);
    void getIdentityBoneOrientation(void);
    void setDefaultPose(void);
    void BoneOrientation(void);
    void BoneOrientation(BoneOrientation const&);
};
