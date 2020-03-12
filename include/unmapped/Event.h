#pragma once

#include <string>
#include <unordered_map>


namespace Social {

    namespace Events {

        class Event {

        public:
            ~Event();
            void getUserId()const;
            void shouldAggregate()const;
            void addProperty(Social::Events::Property const&);
            void stampWithRecord(unsigned int);
            void updateMeasurements(Social::Events::Event const&);
            Event(unsigned int, std::string const&, std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &&, int);
            void setCustomAggregationTime(unsigned int);
            void setShouldAggregate(bool);
            bool propertiesAsJsonValue()const;
            bool measurementsAsJsonValue()const;
            bool passesFilter(int)const;
            void operator==(Social::Events::Event const&)const;
            bool hasMeasurements();
        };
    }
}
