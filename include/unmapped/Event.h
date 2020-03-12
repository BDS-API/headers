#pragma once

#include <string>
#include <unordered_map>
#include "Property.h"
#include <functional>
#include <memory>
#include <utility>


namespace Social {

    namespace Events {

        class Event {

        public:
            void addProperty(Social::Events::Property const&);
            void operator==(Social::Events::Event const&)const;
            bool hasMeasurements();
            void stampWithRecord(unsigned int);
            void setCustomAggregationTime(unsigned int);
            void shouldAggregate()const;
            bool measurementsAsJsonValue()const;
            void setShouldAggregate(bool);
            bool passesFilter(int)const;
            void getUserId()const;
            bool propertiesAsJsonValue()const;
            void updateMeasurements(Social::Events::Event const&);
//          Event(unsigned int, std::string const&, std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &&, int); //TODO: incomplete function definition
            ~Event();
        };
    }
}
