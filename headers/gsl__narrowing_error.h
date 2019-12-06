#pragma once

class gsl::narrowing_error {

public:
    virtual ~narrowing_error();

    void narrowing_error(void);
};
