#pragma once



class BoneOrientation {

public:
    void shouldOverrideStackMatrix()const;
    void getLocalPreTransformMatrix()const;
    void setDefaultPose();
    void setDefaultTransform(BoneOrientationTransform const&);
    void setMatrix(Matrix const&);
    ~BoneOrientation();
    void getDefaultTransform();
    void getPivot()const;
    void copySourceDataFrom(BoneOrientation const&);
    void getDefaultTransform()const;
//  void setRotationRelativeMode(BoneAnimationRelativeMode); //TODO: incomplete function definition
    void shouldApplyLocalPreTransformMatrix()const;
    void transform3(Vec3 &);
    void setOverrideStackMatrix(bool);
    BoneOrientation(HashedString const&);
//  void add(float, float, float, BoneTransformType); //TODO: incomplete function definition
    void getTransform()const;
    void setTransform(BoneOrientationTransform const&);
    void applyShortestPathBlend(BoneOrientation const&, BoneOrientation const&, float, float);
    void getPivot();
    void getMatrix()const;
    void getIdentityBoneOrientation();
    BoneOrientation();
    BoneOrientation(BoneOrientation const&);
    void init(BoneOrientationTransform &);
    void setPivot(Vec3 const&);
    void rotateLocalPreTransformMatrix(float, Vec3 const&);
//  void scale(float, float, float, BoneTransformType); //TODO: incomplete function definition
    void getName()const;
    void updateLocalPreTransformMatrix();
    void getRotationRelativeMode()const;
};
