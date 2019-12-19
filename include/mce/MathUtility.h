#pragma once

using namespace mce;

class MathUtility {

public:

    void interpolateTransforms(glm::tmat4x4<float, (glm::precision)0> &, glm::tmat4x4<float, (glm::precision)0> const&, glm::tmat4x4<float, (glm::precision)0> const&, float);
    void getBestHorizDirFromViewMatrix(glm::tmat4x4<float, (glm::precision)0> const&);
    void getRotationFromNegZToVector(glm::tvec3<float, (glm::precision)0> const&);
    void floatEqualsEpsilon(float, float, float);
    void rotateVec2(glm::tvec2<float, (glm::precision)0> const&, float);
    void getBasis(glm::tvec3<float, (glm::precision)0> const&, glm::tvec3<float, (glm::precision)0>&, glm::tvec3<float, (glm::precision)0>&);
    void getBezier(glm::tvec3<float, (glm::precision)0> const&, glm::tvec3<float, (glm::precision)0> const&, glm::tvec3<float, (glm::precision)0> const&, float);
    void generateRotationAroundPivotMat(glm::tmat4x4<float, (glm::precision)0> const&, glm::tvec3<float, (glm::precision)0> const&);
    void generateRotationAroundPivotMat(glm::tquat<float, (glm::precision)0> const&, glm::tvec3<float, (glm::precision)0> const&);
    void rotatePointAroundPivot(glm::tmat4x4<float, (glm::precision)0> const&, glm::tvec3<float, (glm::precision)0> const&, glm::tvec4<float, (glm::precision)0> const&);
    void rotatePointAroundPivot(glm::tquat<float, (glm::precision)0> const&, glm::tvec3<float, (glm::precision)0> const&, glm::tvec4<float, (glm::precision)0> const&);
};
