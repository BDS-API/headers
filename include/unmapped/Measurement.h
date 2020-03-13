#pragma once



namespace Social {

    namespace Events {

        class Measurement {

        public:
            ~Measurement(); // _ZN6Social6Events11MeasurementD2Ev
            Measurement(Social::Events::Measurement const&); // _ZN6Social6Events11MeasurementC2ERKS1_
            void getValue()const; // _ZNK6Social6Events11Measurement8getValueEv
            void updateMeasurement(Social::Events::Measurement const&); // _ZN6Social6Events11Measurement17updateMeasurementERKS1_
        };
    }
}
