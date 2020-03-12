#pragma once



class Matrix {

public:
    void mult(Matrix const&);
//  void translate(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
//  void rotate(float, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void setRow(int, float, float, float, float);
//  Matrix(glm::tquat0<float, (glm::precision>); //TODO: incomplete function definition
//  void transform3(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
    void get(int, int)const;
//  void transform3(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
    void translate(float, float, float);
    Matrix();
};
