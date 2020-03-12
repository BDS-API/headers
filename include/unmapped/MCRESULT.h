#pragma once



class MCRESULT {

public:
    void operator!=(MCRESULT const&)const;
    MCRESULT(int);
    bool isSuccess()const;
    void getFullCode()const;
//  MCRESULT(bool, MCCATEGORY, unsigned short); //TODO: incomplete function definition
    bool isSuccess(int);
    void operator==(MCRESULT const&)const;
};
