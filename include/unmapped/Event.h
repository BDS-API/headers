#pragma once



using namespace Social::Events;

class Event {

public:

    void setShouldAggregate(bool);
    void addProperty(Social::Events::Property const&);
    void setCustomAggregationTime(unsigned int);
    Event(unsigned int, std::string const&, std::unordered_map<std::string, Social::Events::Property, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, Social::Events::Property>>> &&, int);
    bool hasMeasurements();
    void stampWithRecord(unsigned int);
    bool propertiesAsJsonValue()const;
    bool measurementsAsJsonValue()const;
    void updateMeasurements(Social::Events::Event const&);
    bool passesFilter(int)const;
    void getUserId()const;
    void shouldAggregate()const;
};
