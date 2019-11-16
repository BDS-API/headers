#pragma once

class ServerMetricsImpl : ServerMetrics {

    virtual void ServerMetricsImpl::~ServerMetricsImpl();
    virtual void ServerMetricsImpl::~ServerMetricsImpl();
    virtual void sendPeriodicMetrics(ServerInstance &);
    virtual void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&);
}
