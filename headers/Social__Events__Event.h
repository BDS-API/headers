#pragma once

class Social::Events::Event {

public:

    void setShouldAggregate(bool);
    void addProperty(Social::Events::Property const&);
    void setCustomAggregationTime(unsigned int);
    void Event(unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Social::Events::Property, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, Social::Events::Property>>> &&, int);
    bool hasMeasurements(void);
    void stampWithRecord(unsigned int);
    void propertiesAsJsonValue(void)const;
    void measurementsAsJsonValue(void)const;
    void updateMeasurements(Social::Events::Event const&);
    void passesFilter(int)const;
    void getUserId(void)const;
    void shouldAggregate(void)const;
};
