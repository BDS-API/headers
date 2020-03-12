#pragma once



namespace Social {

    namespace Events {

        class Property {

        public:
            std::string getName()const;
            void getValue()const;
            Property(Social::Events::Property const&);
            void operator==(Social::Events::Property const&)const;
            ~Property();
            Property();
        };
    }
}
