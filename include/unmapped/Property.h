#pragma once

#include "./Property.h"
#include <string>


namespace Social::Events {

class Property {

public:

    ~Property();
    void getValue()const;
    std::string getName()const;
    Property(Social::Events::Property const&);
    Property();
    void operator==(Social::Events::Property const&)const;
};

}