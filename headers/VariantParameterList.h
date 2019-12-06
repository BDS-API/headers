#pragma once

class VariantParameterList {

public:

    void VariantParameterList(void);
    void clear(void);
    bool hasParameter(FilterSubject)const;
    void getParameterType(FilterSubject)const;
    void getParameterCount(void)const;
    void clearParameter(FilterSubject);
};
