#pragma once



class VariantParameterList {

public:
    class Parameter;

    VariantParameterList(); // _ZN20VariantParameterListC2Ev
    void clear(); // _ZN20VariantParameterList5clearEv
//  bool hasParameter(FilterSubject)const; //TODO: incomplete function definition // _ZNK20VariantParameterList12hasParameterE13FilterSubject
//  void getParameterType(FilterSubject)const; //TODO: incomplete function definition // _ZNK20VariantParameterList16getParameterTypeE13FilterSubject
    void getParameterCount()const; // _ZNK20VariantParameterList17getParameterCountEv
//  void clearParameter(FilterSubject); //TODO: incomplete function definition // _ZN20VariantParameterList14clearParameterE13FilterSubject
    class Parameter {

    public:
        Parameter(); // _ZN20VariantParameterList9ParameterC2Ev
    };
};
