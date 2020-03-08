#pragma once



using namespace mce;

class MathUtility {

public:

    void interpolateTransforms(glm::tmat4x40<float, (glm::precision>);
    void getBestHorizDirFromViewMatrix(glm::tmat4x40<float, (glm::precision>);
    void getRotationFromNegZToVector(glm::tvec30<float, (glm::precision>);
    void floatEqualsEpsilon(float, float, float);
    void rotateVec2(glm::tvec20<float, (glm::precision>);
    void getBasis(glm::tvec30<float, (glm::precision>);
    void getBezier(glm::tvec30<float, (glm::precision>);
    void generateRotationAroundPivotMat(glm::tmat4x40<float, (glm::precision>);
    void generateRotationAroundPivotMat(glm::tquat0<float, (glm::precision>);
    void rotatePointAroundPivot(glm::tmat4x40<float, (glm::precision>);
    void rotatePointAroundPivot(glm::tquat0<float, (glm::precision>);
};
