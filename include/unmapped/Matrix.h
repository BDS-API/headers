#pragma once



class Matrix {

public:
    Matrix(); // _ZN6MatrixC2Ev
//    void translate(long); //TODO: incomplete function definition // _ZN6Matrix9translateERKN3glm5tvec3IfLNS0_9precisionE0EEE
//    void rotate(float, long); //TODO: incomplete function definition // _ZN6Matrix6rotateEfRKN3glm5tvec3IfLNS0_9precisionE0EEE
    void translate(float, float, float); // _ZN6Matrix9translateEfff
//    void transform3(long)const; //TODO: incomplete function definition // _ZNK6Matrix10transform3ERN3glm5tvec3IfLNS0_9precisionE0EEERf
//    void transform3(long)const; //TODO: incomplete function definition // _ZNK6Matrix10transform3ERN3glm5tvec3IfLNS0_9precisionE0EEE
    void mult(Matrix const&); // _ZN6Matrix4multERKS_
//    Matrix(long); //TODO: incomplete function definition // _ZN6MatrixC2ERKN3glm5tquatIfLNS0_9precisionE0EEE
    void setRow(int, float, float, float, float); // _ZN6Matrix6setRowEiffff
    void get(int, int)const; // _ZNK6Matrix3getEii
};
