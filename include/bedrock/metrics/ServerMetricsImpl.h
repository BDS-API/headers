#pragma once

#include <string>
#include <memory>
#include "ServerMetrics.h"


class ServerMetricsImpl : ServerMetrics {

public:
    ~ServerMetricsImpl(); // _ZN17ServerMetricsImplD2Ev
    virtual void sendPeriodicMetrics(ServerInstance &); // _ZN17ServerMetricsImpl19sendPeriodicMetricsER14ServerInstance
//  virtual void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::string const&); //TODO: incomplete function definition // _ZN17ServerMetricsImpl21sendLatencyTimepointsERKNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEES6_RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&); //TODO: incomplete function definition // _ZN17ServerMetricsImpl18sendServerTickTimeERKNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEE
    ServerMetricsImpl(ServerCommunicationInterface *); // _ZN17ServerMetricsImplC2EP28ServerCommunicationInterface
    void sendPeriodicMetricsInternal(ServerInstance &); // _ZN17ServerMetricsImpl27sendPeriodicMetricsInternalER14ServerInstance
    void addMetrics(std::unique_ptr<com::mojang::clacks::protocol::MetricReport>); // _ZN17ServerMetricsImpl10addMetricsESt10unique_ptrIN3com6mojang6clacks8protocol12MetricReportESt14default_deleteIS5_EE
    bool isEnabledMetricQueuing()const; // _ZNK17ServerMetricsImpl22isEnabledMetricQueuingEv
    void popMetric(); // _ZN17ServerMetricsImpl9popMetricEv
    void setEnableMetricQueuing(bool); // _ZN17ServerMetricsImpl22setEnableMetricQueuingEb
};
