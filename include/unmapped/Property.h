#pragma once

#include <string>


namespace Social {

    namespace Events {

        class Property {

        public:
            ~Property(); // _ZN6Social6Events8PropertyD2Ev
            void getValue()const; // _ZNK6Social6Events8Property8getValueEv
            std::string getName()const; // _ZNK6Social6Events8Property7getNameB5cxx11Ev
            Property(Social::Events::Property const&); // _ZN6Social6Events8PropertyC2ERKS1_
            Property(); // _ZN6Social6Events8PropertyC2Ev
            void operator==(Social::Events::Property const&)const; // _ZNK6Social6Events8PropertyeqERKS1_
        };
    }
}
