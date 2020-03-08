#pragma once



class Matrix {

public:

    Matrix(void);
    void translate(glm::tvec30<float, (glm::precision>);
    void rotate(float, glm::tvec30<float, (glm::precision>);
    void translate(float, float, float);
    void transform3(glm::tvec30<float, (glm::precision>)const;
    void transform3(glm::tvec30<float, (glm::precision>)const;
    void mult(Matrix const&);
    Matrix(glm::tquat<float, (glm::precision)0> const&);
    void setRow(int, float, float, float, float);
    void get(int, int)const;
};
