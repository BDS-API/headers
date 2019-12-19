#pragma once

using namespace Social::Events;

class Event {

public:

    void setShouldAggregate(bool);
    void addProperty(Social::Events::Property const&);
    void setCustomAggregationTime(unsigned int);
    Event(unsigned int, std::string const&, std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &&, int);
    bool hasMeasurements(void);
    void stampWithRecord(unsigned int);
    void propertiesAsJsonValue(void)const;
    void measurementsAsJsonValue(void)const;
    void updateMeasurements(Social::Events::Event const&);
    void passesFilter(int)const;
    void getUserId(void)const;
    void shouldAggregate(void)const;
};
