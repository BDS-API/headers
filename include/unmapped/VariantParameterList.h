#pragma once



class VariantParameterList {

public:
    class Parameter;

//  void clearParameter(FilterSubject); //TODO: incomplete function definition
    void getParameterCount()const;
//  void getParameterType(FilterSubject)const; //TODO: incomplete function definition
    void clear();
//  bool hasParameter(FilterSubject)const; //TODO: incomplete function definition
    VariantParameterList();
    class Parameter {

    public:
        Parameter();
    };
};
