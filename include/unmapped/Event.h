#pragma once

#include <utility>
#include <unordered_map>
#include "./Property.h"
#include <memory>
#include "./Event.h"
#include <functional>
#include <string>


namespace Social::Events {

class Event {

public:

    void setShouldAggregate(bool);
    void addProperty(Social::Events::Property const&);
    void setCustomAggregationTime(unsigned int);
//  Event(unsigned int, std::string const&, std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &&, int); //TODO: incomplete function definition
    bool hasMeasurements();
    ~Event();
    void stampWithRecord(unsigned int);
    bool propertiesAsJsonValue()const;
    bool measurementsAsJsonValue()const;
    void operator==(Social::Events::Event const&)const;
    void updateMeasurements(Social::Events::Event const&);
    bool passesFilter(int)const;
    void getUserId()const;
    void shouldAggregate()const;
};

}