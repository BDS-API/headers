#pragma once



namespace Social {

    namespace Events {

        class Measurement {

        public:
            void updateMeasurement(Social::Events::Measurement const&);
            void getValue()const;
            ~Measurement();
            Measurement(Social::Events::Measurement const&);
        };
    }
}
