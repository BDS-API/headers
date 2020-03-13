#pragma once

#include <string>
#include <unordered_map>


namespace Social {

    namespace Events {

        class Event {

        public:
            void setShouldAggregate(bool); // _ZN6Social6Events5Event18setShouldAggregateEb
            void addProperty(Social::Events::Property const&); // _ZN6Social6Events5Event11addPropertyERKNS0_8PropertyE
            void setCustomAggregationTime(unsigned int); // _ZN6Social6Events5Event24setCustomAggregationTimeEj
            Event(unsigned int, std::string const&, std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &&, int); // _ZN6Social6Events5EventC2EjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt13unordered_mapIS7_NS0_8PropertyESt4hashIS7_ESt8equal_toIS7_ESaISt4pairIS8_SB_EEEi
            bool hasMeasurements(); // _ZN6Social6Events5Event15hasMeasurementsEv
            ~Event(); // _ZN6Social6Events5EventD2Ev
            void stampWithRecord(unsigned int); // _ZN6Social6Events5Event15stampWithRecordEj
            bool propertiesAsJsonValue()const; // _ZNK6Social6Events5Event21propertiesAsJsonValueEv
            bool measurementsAsJsonValue()const; // _ZNK6Social6Events5Event23measurementsAsJsonValueEv
            void operator==(Social::Events::Event const&)const; // _ZNK6Social6Events5EventeqERKS1_
            void updateMeasurements(Social::Events::Event const&); // _ZN6Social6Events5Event18updateMeasurementsERKS1_
            bool passesFilter(int)const; // _ZNK6Social6Events5Event12passesFilterEi
            void getUserId()const; // _ZNK6Social6Events5Event9getUserIdEv
            void shouldAggregate()const; // _ZNK6Social6Events5Event15shouldAggregateEv
        };
    }
}
