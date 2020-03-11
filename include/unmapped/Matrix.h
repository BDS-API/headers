#pragma once

#include "./Matrix.h"


class Matrix {

public:

    Matrix();
//  void translate(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
//  void rotate(float, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void translate(float, float, float);
//  void transform3(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
//  void transform3(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
    void mult(Matrix const&);
//  Matrix(glm::tquat0<float, (glm::precision>); //TODO: incomplete function definition
    void setRow(int, float, float, float, float);
    void get(int, int)const;
};
