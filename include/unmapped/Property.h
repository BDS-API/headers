#pragma once

#include <string>


namespace Social {

    namespace Events {

        class Property {

        public:
            void getValue()const;
            void operator==(Social::Events::Property const&)const;
            Property(Social::Events::Property const&);
            std::string getName()const;
            ~Property();
            Property();
        };
    }
}
