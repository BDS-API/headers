#pragma once



class Matrix {

public:
//  Matrix(glm::tquat0<float, (glm::precision>); //TODO: incomplete function definition
    Matrix();
//  void transform3(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
    void setRow(int, float, float, float, float);
//  void translate(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void get(int, int)const;
    void mult(Matrix const&);
//  void transform3(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
    void translate(float, float, float);
//  void rotate(float, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
};
