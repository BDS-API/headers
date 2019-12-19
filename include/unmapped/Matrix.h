#pragma once

class Matrix {

public:

    Matrix(void);
    void translate(glm::tvec3<float, (glm::precision)0> const&);
    void rotate(float, glm::tvec3<float, (glm::precision)0> const&);
    void translate(float, float, float);
    void transform3(glm::tvec3<float, (glm::precision)0> &, float &)const;
    void transform3(glm::tvec3<float, (glm::precision)0> &)const;
    void mult(Matrix const&);
    Matrix(glm::tquat<float, (glm::precision)0> const&);
    void setRow(int, float, float, float, float);
    void get(int, int)const;
};
