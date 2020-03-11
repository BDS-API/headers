#pragma once

#include "./MCRESULT.h"


class MCRESULT {

public:

//  MCRESULT(bool, MCCATEGORY, unsigned short); //TODO: incomplete function definition
    MCRESULT(int);
    void operator==(MCRESULT const&)const;
    void operator!=(MCRESULT const&)const;
    bool isSuccess()const;
    bool isSuccess(int);
    void getFullCode()const;
};
