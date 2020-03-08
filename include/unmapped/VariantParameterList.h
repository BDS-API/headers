#pragma once



class VariantParameterList {

public:

    VariantParameterList(void);
    void clear();
    bool hasParameter(FilterSubject)const;
    void getParameterType(FilterSubject)const;
    void getParameterCount()const;
    void clearParameter(FilterSubject);
};
