// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MSE20190531_H_
#define ALIBABACLOUD_MSE20190531_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Mse20190531 {
class GatewayOptionLogConfigDetails : public Darabonba::Model {
public:
  shared_ptr<bool> logEnabled{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> projectName{};

  GatewayOptionLogConfigDetails() {}

  explicit GatewayOptionLogConfigDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logEnabled) {
      res["LogEnabled"] = boost::any(*logEnabled);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogEnabled") != m.end() && !m["LogEnabled"].empty()) {
      logEnabled = make_shared<bool>(boost::any_cast<bool>(m["LogEnabled"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~GatewayOptionLogConfigDetails() = default;
};
class GatewayOptionTraceDetails : public Darabonba::Model {
public:
  shared_ptr<long> sample{};
  shared_ptr<bool> traceEnabled{};

  GatewayOptionTraceDetails() {}

  explicit GatewayOptionTraceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sample) {
      res["Sample"] = boost::any(*sample);
    }
    if (traceEnabled) {
      res["TraceEnabled"] = boost::any(*traceEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sample") != m.end() && !m["Sample"].empty()) {
      sample = make_shared<long>(boost::any_cast<long>(m["Sample"]));
    }
    if (m.find("TraceEnabled") != m.end() && !m["TraceEnabled"].empty()) {
      traceEnabled = make_shared<bool>(boost::any_cast<bool>(m["TraceEnabled"]));
    }
  }


  virtual ~GatewayOptionTraceDetails() = default;
};
class GatewayOption : public Darabonba::Model {
public:
  shared_ptr<bool> disableHttp2Alpn{};
  shared_ptr<bool> enableHardwareAcceleration{};
  shared_ptr<GatewayOptionLogConfigDetails> logConfigDetails{};
  shared_ptr<GatewayOptionTraceDetails> traceDetails{};

  GatewayOption() {}

  explicit GatewayOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableHttp2Alpn) {
      res["DisableHttp2Alpn"] = boost::any(*disableHttp2Alpn);
    }
    if (enableHardwareAcceleration) {
      res["EnableHardwareAcceleration"] = boost::any(*enableHardwareAcceleration);
    }
    if (logConfigDetails) {
      res["LogConfigDetails"] = logConfigDetails ? boost::any(logConfigDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (traceDetails) {
      res["TraceDetails"] = traceDetails ? boost::any(traceDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableHttp2Alpn") != m.end() && !m["DisableHttp2Alpn"].empty()) {
      disableHttp2Alpn = make_shared<bool>(boost::any_cast<bool>(m["DisableHttp2Alpn"]));
    }
    if (m.find("EnableHardwareAcceleration") != m.end() && !m["EnableHardwareAcceleration"].empty()) {
      enableHardwareAcceleration = make_shared<bool>(boost::any_cast<bool>(m["EnableHardwareAcceleration"]));
    }
    if (m.find("LogConfigDetails") != m.end() && !m["LogConfigDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogConfigDetails"].type()) {
        GatewayOptionLogConfigDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogConfigDetails"]));
        logConfigDetails = make_shared<GatewayOptionLogConfigDetails>(model1);
      }
    }
    if (m.find("TraceDetails") != m.end() && !m["TraceDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceDetails"].type()) {
        GatewayOptionTraceDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceDetails"]));
        traceDetails = make_shared<GatewayOptionTraceDetails>(model1);
      }
    }
  }


  virtual ~GatewayOption() = default;
};
class TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> path{};
  shared_ptr<string> TTL{};

  TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie() {}

  explicit TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (TTL) {
      res["TTL"] = boost::any(*TTL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("TTL") != m.end() && !m["TTL"].empty()) {
      TTL = make_shared<string>(boost::any_cast<string>(m["TTL"]));
    }
  }


  virtual ~TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie() = default;
};
class TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig : public Darabonba::Model {
public:
  shared_ptr<string> consistentHashLBType{};
  shared_ptr<TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie> httpCookie{};
  shared_ptr<string> parameterName{};

  TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig() {}

  explicit TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consistentHashLBType) {
      res["ConsistentHashLBType"] = boost::any(*consistentHashLBType);
    }
    if (httpCookie) {
      res["HttpCookie"] = httpCookie ? boost::any(httpCookie->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsistentHashLBType") != m.end() && !m["ConsistentHashLBType"].empty()) {
      consistentHashLBType = make_shared<string>(boost::any_cast<string>(m["ConsistentHashLBType"]));
    }
    if (m.find("HttpCookie") != m.end() && !m["HttpCookie"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpCookie"].type()) {
        TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpCookie"]));
        httpCookie = make_shared<TrafficPolicyLoadBalancerSettingsConsistentHashLBConfigHttpCookie>(model1);
      }
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
  }


  virtual ~TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig() = default;
};
class TrafficPolicyLoadBalancerSettings : public Darabonba::Model {
public:
  shared_ptr<TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig> consistentHashLBConfig{};
  shared_ptr<string> loadbalancerType{};

  TrafficPolicyLoadBalancerSettings() {}

  explicit TrafficPolicyLoadBalancerSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consistentHashLBConfig) {
      res["ConsistentHashLBConfig"] = consistentHashLBConfig ? boost::any(consistentHashLBConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadbalancerType) {
      res["LoadbalancerType"] = boost::any(*loadbalancerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsistentHashLBConfig") != m.end() && !m["ConsistentHashLBConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsistentHashLBConfig"].type()) {
        TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsistentHashLBConfig"]));
        consistentHashLBConfig = make_shared<TrafficPolicyLoadBalancerSettingsConsistentHashLBConfig>(model1);
      }
    }
    if (m.find("LoadbalancerType") != m.end() && !m["LoadbalancerType"].empty()) {
      loadbalancerType = make_shared<string>(boost::any_cast<string>(m["LoadbalancerType"]));
    }
  }


  virtual ~TrafficPolicyLoadBalancerSettings() = default;
};
class TrafficPolicyTlsSetting : public Darabonba::Model {
public:
  shared_ptr<string> caCertContent{};
  shared_ptr<string> certId{};
  shared_ptr<string> sni{};
  shared_ptr<string> tlsMode{};

  TrafficPolicyTlsSetting() {}

  explicit TrafficPolicyTlsSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertContent) {
      res["CaCertContent"] = boost::any(*caCertContent);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (sni) {
      res["Sni"] = boost::any(*sni);
    }
    if (tlsMode) {
      res["TlsMode"] = boost::any(*tlsMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaCertContent") != m.end() && !m["CaCertContent"].empty()) {
      caCertContent = make_shared<string>(boost::any_cast<string>(m["CaCertContent"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("Sni") != m.end() && !m["Sni"].empty()) {
      sni = make_shared<string>(boost::any_cast<string>(m["Sni"]));
    }
    if (m.find("TlsMode") != m.end() && !m["TlsMode"].empty()) {
      tlsMode = make_shared<string>(boost::any_cast<string>(m["TlsMode"]));
    }
  }


  virtual ~TrafficPolicyTlsSetting() = default;
};
class TrafficPolicy : public Darabonba::Model {
public:
  shared_ptr<TrafficPolicyLoadBalancerSettings> loadBalancerSettings{};
  shared_ptr<TrafficPolicyTlsSetting> tlsSetting{};

  TrafficPolicy() {}

  explicit TrafficPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerSettings) {
      res["LoadBalancerSettings"] = loadBalancerSettings ? boost::any(loadBalancerSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tlsSetting) {
      res["TlsSetting"] = tlsSetting ? boost::any(tlsSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerSettings") != m.end() && !m["LoadBalancerSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerSettings"].type()) {
        TrafficPolicyLoadBalancerSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerSettings"]));
        loadBalancerSettings = make_shared<TrafficPolicyLoadBalancerSettings>(model1);
      }
    }
    if (m.find("TlsSetting") != m.end() && !m["TlsSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["TlsSetting"].type()) {
        TrafficPolicyTlsSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TlsSetting"]));
        tlsSetting = make_shared<TrafficPolicyTlsSetting>(model1);
      }
    }
  }


  virtual ~TrafficPolicy() = default;
};
class GatewayService : public Darabonba::Model {
public:
  shared_ptr<TrafficPolicy> gatewayTrafficPolicy{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> id{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> sourceType{};

  GatewayService() {}

  explicit GatewayService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayTrafficPolicy) {
      res["GatewayTrafficPolicy"] = gatewayTrafficPolicy ? boost::any(gatewayTrafficPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayTrafficPolicy") != m.end() && !m["GatewayTrafficPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayTrafficPolicy"].type()) {
        TrafficPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatewayTrafficPolicy"]));
        gatewayTrafficPolicy = make_shared<TrafficPolicy>(model1);
      }
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~GatewayService() = default;
};
class AddAuthResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> authId{};
  shared_ptr<long> domainId{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> path{};

  AddAuthResourceRequest() {}

  explicit AddAuthResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (authId) {
      res["AuthId"] = boost::any(*authId);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AuthId") != m.end() && !m["AuthId"].empty()) {
      authId = make_shared<long>(boost::any_cast<long>(m["AuthId"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~AddAuthResourceRequest() = default;
};
class AddAuthResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddAuthResourceResponseBody() {}

  explicit AddAuthResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddAuthResourceResponseBody() = default;
};
class AddAuthResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddAuthResourceResponseBody> body{};

  AddAuthResourceResponse() {}

  explicit AddAuthResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddAuthResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddAuthResourceResponseBody>(model1);
      }
    }
  }


  virtual ~AddAuthResourceResponse() = default;
};
class AddBlackWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> content{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<bool> isWhite{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  AddBlackWhiteListRequest() {}

  explicit AddBlackWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (isWhite) {
      res["IsWhite"] = boost::any(*isWhite);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("IsWhite") != m.end() && !m["IsWhite"].empty()) {
      isWhite = make_shared<bool>(boost::any_cast<bool>(m["IsWhite"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AddBlackWhiteListRequest() = default;
};
class AddBlackWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddBlackWhiteListResponseBody() {}

  explicit AddBlackWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddBlackWhiteListResponseBody() = default;
};
class AddBlackWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddBlackWhiteListResponseBody> body{};

  AddBlackWhiteListResponse() {}

  explicit AddBlackWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddBlackWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBlackWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~AddBlackWhiteListResponse() = default;
};
class AddGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> enterpriseSecurityGroup{};
  shared_ptr<string> internetSlbSpec{};
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<long> replica{};
  shared_ptr<string> slbSpec{};
  shared_ptr<string> spec{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchId2{};
  shared_ptr<string> vpc{};

  AddGatewayRequest() {}

  explicit AddGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (enterpriseSecurityGroup) {
      res["EnterpriseSecurityGroup"] = boost::any(*enterpriseSecurityGroup);
    }
    if (internetSlbSpec) {
      res["InternetSlbSpec"] = boost::any(*internetSlbSpec);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (replica) {
      res["Replica"] = boost::any(*replica);
    }
    if (slbSpec) {
      res["SlbSpec"] = boost::any(*slbSpec);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchId2) {
      res["VSwitchId2"] = boost::any(*vSwitchId2);
    }
    if (vpc) {
      res["Vpc"] = boost::any(*vpc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("EnterpriseSecurityGroup") != m.end() && !m["EnterpriseSecurityGroup"].empty()) {
      enterpriseSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["EnterpriseSecurityGroup"]));
    }
    if (m.find("InternetSlbSpec") != m.end() && !m["InternetSlbSpec"].empty()) {
      internetSlbSpec = make_shared<string>(boost::any_cast<string>(m["InternetSlbSpec"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Replica") != m.end() && !m["Replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["Replica"]));
    }
    if (m.find("SlbSpec") != m.end() && !m["SlbSpec"].empty()) {
      slbSpec = make_shared<string>(boost::any_cast<string>(m["SlbSpec"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchId2") != m.end() && !m["VSwitchId2"].empty()) {
      vSwitchId2 = make_shared<string>(boost::any_cast<string>(m["VSwitchId2"]));
    }
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      vpc = make_shared<string>(boost::any_cast<string>(m["Vpc"]));
    }
  }


  virtual ~AddGatewayRequest() = default;
};
class AddGatewayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gatewayUniqueId{};

  AddGatewayResponseBodyData() {}

  explicit AddGatewayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~AddGatewayResponseBodyData() = default;
};
class AddGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AddGatewayResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddGatewayResponseBody() {}

  explicit AddGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddGatewayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddGatewayResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddGatewayResponseBody() = default;
};
class AddGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddGatewayResponseBody> body{};

  AddGatewayResponse() {}

  explicit AddGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~AddGatewayResponse() = default;
};
class AddGatewayDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<bool> mustHttps{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};

  AddGatewayDomainRequest() {}

  explicit AddGatewayDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (mustHttps) {
      res["MustHttps"] = boost::any(*mustHttps);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("MustHttps") != m.end() && !m["MustHttps"].empty()) {
      mustHttps = make_shared<bool>(boost::any_cast<bool>(m["MustHttps"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~AddGatewayDomainRequest() = default;
};
class AddGatewayDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddGatewayDomainResponseBody() {}

  explicit AddGatewayDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddGatewayDomainResponseBody() = default;
};
class AddGatewayDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddGatewayDomainResponseBody> body{};

  AddGatewayDomainResponse() {}

  explicit AddGatewayDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddGatewayDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGatewayDomainResponseBody>(model1);
      }
    }
  }


  virtual ~AddGatewayDomainResponse() = default;
};
class AddGatewayServiceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> serviceVersion{};

  AddGatewayServiceVersionRequest() {}

  explicit AddGatewayServiceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~AddGatewayServiceVersionRequest() = default;
};
class AddGatewayServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddGatewayServiceVersionResponseBody() {}

  explicit AddGatewayServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddGatewayServiceVersionResponseBody() = default;
};
class AddGatewayServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddGatewayServiceVersionResponseBody> body{};

  AddGatewayServiceVersionResponse() {}

  explicit AddGatewayServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddGatewayServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGatewayServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~AddGatewayServiceVersionResponse() = default;
};
class AddGatewaySlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> slbId{};
  shared_ptr<string> type{};

  AddGatewaySlbRequest() {}

  explicit AddGatewaySlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AddGatewaySlbRequest() = default;
};
class AddGatewaySlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddGatewaySlbResponseBody() {}

  explicit AddGatewaySlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddGatewaySlbResponseBody() = default;
};
class AddGatewaySlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddGatewaySlbResponseBody> body{};

  AddGatewaySlbResponse() {}

  explicit AddGatewaySlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddGatewaySlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGatewaySlbResponseBody>(model1);
      }
    }
  }


  virtual ~AddGatewaySlbResponse() = default;
};
class AddMockRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> consumerAppIds{};
  shared_ptr<string> dubboMockItems{};
  shared_ptr<bool> enable{};
  shared_ptr<string> extraJson{};
  shared_ptr<long> mockType{};
  shared_ptr<string> name{};
  shared_ptr<string> providerAppId{};
  shared_ptr<string> providerAppName{};
  shared_ptr<string> region{};
  shared_ptr<string> scMockItems{};
  shared_ptr<string> source{};

  AddMockRuleRequest() {}

  explicit AddMockRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (consumerAppIds) {
      res["ConsumerAppIds"] = boost::any(*consumerAppIds);
    }
    if (dubboMockItems) {
      res["DubboMockItems"] = boost::any(*dubboMockItems);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (extraJson) {
      res["ExtraJson"] = boost::any(*extraJson);
    }
    if (mockType) {
      res["MockType"] = boost::any(*mockType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (providerAppId) {
      res["ProviderAppId"] = boost::any(*providerAppId);
    }
    if (providerAppName) {
      res["ProviderAppName"] = boost::any(*providerAppName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (scMockItems) {
      res["ScMockItems"] = boost::any(*scMockItems);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ConsumerAppIds") != m.end() && !m["ConsumerAppIds"].empty()) {
      consumerAppIds = make_shared<string>(boost::any_cast<string>(m["ConsumerAppIds"]));
    }
    if (m.find("DubboMockItems") != m.end() && !m["DubboMockItems"].empty()) {
      dubboMockItems = make_shared<string>(boost::any_cast<string>(m["DubboMockItems"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("ExtraJson") != m.end() && !m["ExtraJson"].empty()) {
      extraJson = make_shared<string>(boost::any_cast<string>(m["ExtraJson"]));
    }
    if (m.find("MockType") != m.end() && !m["MockType"].empty()) {
      mockType = make_shared<long>(boost::any_cast<long>(m["MockType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProviderAppId") != m.end() && !m["ProviderAppId"].empty()) {
      providerAppId = make_shared<string>(boost::any_cast<string>(m["ProviderAppId"]));
    }
    if (m.find("ProviderAppName") != m.end() && !m["ProviderAppName"].empty()) {
      providerAppName = make_shared<string>(boost::any_cast<string>(m["ProviderAppName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ScMockItems") != m.end() && !m["ScMockItems"].empty()) {
      scMockItems = make_shared<string>(boost::any_cast<string>(m["ScMockItems"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~AddMockRuleRequest() = default;
};
class AddMockRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> consumerAppId{};
  shared_ptr<string> consumerAppName{};
  shared_ptr<bool> enable{};
  shared_ptr<string> extraJson{};
  shared_ptr<long> id{};
  shared_ptr<long> mockType{};
  shared_ptr<string> name{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> providerAppId{};
  shared_ptr<string> providerAppName{};
  shared_ptr<string> region{};
  shared_ptr<string> scMockItemJson{};
  shared_ptr<string> source{};

  AddMockRuleResponseBodyData() {}

  explicit AddMockRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (consumerAppId) {
      res["ConsumerAppId"] = boost::any(*consumerAppId);
    }
    if (consumerAppName) {
      res["ConsumerAppName"] = boost::any(*consumerAppName);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (extraJson) {
      res["ExtraJson"] = boost::any(*extraJson);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mockType) {
      res["MockType"] = boost::any(*mockType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (providerAppId) {
      res["ProviderAppId"] = boost::any(*providerAppId);
    }
    if (providerAppName) {
      res["ProviderAppName"] = boost::any(*providerAppName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (scMockItemJson) {
      res["ScMockItemJson"] = boost::any(*scMockItemJson);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ConsumerAppId") != m.end() && !m["ConsumerAppId"].empty()) {
      consumerAppId = make_shared<string>(boost::any_cast<string>(m["ConsumerAppId"]));
    }
    if (m.find("ConsumerAppName") != m.end() && !m["ConsumerAppName"].empty()) {
      consumerAppName = make_shared<string>(boost::any_cast<string>(m["ConsumerAppName"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("ExtraJson") != m.end() && !m["ExtraJson"].empty()) {
      extraJson = make_shared<string>(boost::any_cast<string>(m["ExtraJson"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MockType") != m.end() && !m["MockType"].empty()) {
      mockType = make_shared<long>(boost::any_cast<long>(m["MockType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ProviderAppId") != m.end() && !m["ProviderAppId"].empty()) {
      providerAppId = make_shared<string>(boost::any_cast<string>(m["ProviderAppId"]));
    }
    if (m.find("ProviderAppName") != m.end() && !m["ProviderAppName"].empty()) {
      providerAppName = make_shared<string>(boost::any_cast<string>(m["ProviderAppName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ScMockItemJson") != m.end() && !m["ScMockItemJson"].empty()) {
      scMockItemJson = make_shared<string>(boost::any_cast<string>(m["ScMockItemJson"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~AddMockRuleResponseBodyData() = default;
};
class AddMockRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AddMockRuleResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddMockRuleResponseBody() {}

  explicit AddMockRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddMockRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddMockRuleResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddMockRuleResponseBody() = default;
};
class AddMockRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddMockRuleResponseBody> body{};

  AddMockRuleResponse() {}

  explicit AddMockRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMockRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMockRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AddMockRuleResponse() = default;
};
class AddSSLCertRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<long> domainId{};
  shared_ptr<string> gatewayUniqueId{};

  AddSSLCertRequest() {}

  explicit AddSSLCertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~AddSSLCertRequest() = default;
};
class AddSSLCertResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddSSLCertResponseBody() {}

  explicit AddSSLCertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddSSLCertResponseBody() = default;
};
class AddSSLCertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddSSLCertResponseBody> body{};

  AddSSLCertResponse() {}

  explicit AddSSLCertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddSSLCertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSSLCertResponseBody>(model1);
      }
    }
  }


  virtual ~AddSSLCertResponse() = default;
};
class AddServiceSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> address{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> type{};

  AddServiceSourceRequest() {}

  explicit AddServiceSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AddServiceSourceRequest() = default;
};
class AddServiceSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddServiceSourceResponseBody() {}

  explicit AddServiceSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddServiceSourceResponseBody() = default;
};
class AddServiceSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddServiceSourceResponseBody> body{};

  AddServiceSourceResponse() {}

  explicit AddServiceSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddServiceSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddServiceSourceResponseBody>(model1);
      }
    }
  }


  virtual ~AddServiceSourceResponse() = default;
};
class CloneNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> ids{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> originNamespaceId{};
  shared_ptr<string> policy{};
  shared_ptr<string> targetNamespaceId{};

  CloneNacosConfigRequest() {}

  explicit CloneNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (originNamespaceId) {
      res["OriginNamespaceId"] = boost::any(*originNamespaceId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (targetNamespaceId) {
      res["TargetNamespaceId"] = boost::any(*targetNamespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OriginNamespaceId") != m.end() && !m["OriginNamespaceId"].empty()) {
      originNamespaceId = make_shared<string>(boost::any_cast<string>(m["OriginNamespaceId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("TargetNamespaceId") != m.end() && !m["TargetNamespaceId"].empty()) {
      targetNamespaceId = make_shared<string>(boost::any_cast<string>(m["TargetNamespaceId"]));
    }
  }


  virtual ~CloneNacosConfigRequest() = default;
};
class CloneNacosConfigResponseBodyDataFailData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  CloneNacosConfigResponseBodyDataFailData() {}

  explicit CloneNacosConfigResponseBodyDataFailData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~CloneNacosConfigResponseBodyDataFailData() = default;
};
class CloneNacosConfigResponseBodyDataSkipData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  CloneNacosConfigResponseBodyDataSkipData() {}

  explicit CloneNacosConfigResponseBodyDataSkipData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~CloneNacosConfigResponseBodyDataSkipData() = default;
};
class CloneNacosConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CloneNacosConfigResponseBodyDataFailData>> failData{};
  shared_ptr<long> skipCount{};
  shared_ptr<vector<CloneNacosConfigResponseBodyDataSkipData>> skipData{};
  shared_ptr<long> succCount{};

  CloneNacosConfigResponseBodyData() {}

  explicit CloneNacosConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failData) {
      vector<boost::any> temp1;
      for(auto item1:*failData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailData"] = boost::any(temp1);
    }
    if (skipCount) {
      res["SkipCount"] = boost::any(*skipCount);
    }
    if (skipData) {
      vector<boost::any> temp1;
      for(auto item1:*skipData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkipData"] = boost::any(temp1);
    }
    if (succCount) {
      res["SuccCount"] = boost::any(*succCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailData") != m.end() && !m["FailData"].empty()) {
      if (typeid(vector<boost::any>) == m["FailData"].type()) {
        vector<CloneNacosConfigResponseBodyDataFailData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CloneNacosConfigResponseBodyDataFailData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failData = make_shared<vector<CloneNacosConfigResponseBodyDataFailData>>(expect1);
      }
    }
    if (m.find("SkipCount") != m.end() && !m["SkipCount"].empty()) {
      skipCount = make_shared<long>(boost::any_cast<long>(m["SkipCount"]));
    }
    if (m.find("SkipData") != m.end() && !m["SkipData"].empty()) {
      if (typeid(vector<boost::any>) == m["SkipData"].type()) {
        vector<CloneNacosConfigResponseBodyDataSkipData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkipData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CloneNacosConfigResponseBodyDataSkipData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skipData = make_shared<vector<CloneNacosConfigResponseBodyDataSkipData>>(expect1);
      }
    }
    if (m.find("SuccCount") != m.end() && !m["SuccCount"].empty()) {
      succCount = make_shared<long>(boost::any_cast<long>(m["SuccCount"]));
    }
  }


  virtual ~CloneNacosConfigResponseBodyData() = default;
};
class CloneNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CloneNacosConfigResponseBodyData> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CloneNacosConfigResponseBody() {}

  explicit CloneNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CloneNacosConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CloneNacosConfigResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CloneNacosConfigResponseBody() = default;
};
class CloneNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloneNacosConfigResponseBody> body{};

  CloneNacosConfigResponse() {}

  explicit CloneNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloneNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CloneNacosConfigResponse() = default;
};
class CreateAlarmRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> aggregates{};
  shared_ptr<string> alarmAliasName{};
  shared_ptr<string> alarmItem{};
  shared_ptr<map<string, boost::any>> alertWay{};
  shared_ptr<map<string, boost::any>> contactGroupIds{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> NValue{};
  shared_ptr<string> operator_{};
  shared_ptr<double> value{};

  CreateAlarmRuleRequest() {}

  explicit CreateAlarmRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (aggregates) {
      res["Aggregates"] = boost::any(*aggregates);
    }
    if (alarmAliasName) {
      res["AlarmAliasName"] = boost::any(*alarmAliasName);
    }
    if (alarmItem) {
      res["AlarmItem"] = boost::any(*alarmItem);
    }
    if (alertWay) {
      res["AlertWay"] = boost::any(*alertWay);
    }
    if (contactGroupIds) {
      res["ContactGroupIds"] = boost::any(*contactGroupIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (NValue) {
      res["NValue"] = boost::any(*NValue);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Aggregates") != m.end() && !m["Aggregates"].empty()) {
      aggregates = make_shared<string>(boost::any_cast<string>(m["Aggregates"]));
    }
    if (m.find("AlarmAliasName") != m.end() && !m["AlarmAliasName"].empty()) {
      alarmAliasName = make_shared<string>(boost::any_cast<string>(m["AlarmAliasName"]));
    }
    if (m.find("AlarmItem") != m.end() && !m["AlarmItem"].empty()) {
      alarmItem = make_shared<string>(boost::any_cast<string>(m["AlarmItem"]));
    }
    if (m.find("AlertWay") != m.end() && !m["AlertWay"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AlertWay"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      alertWay = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContactGroupIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contactGroupIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NValue") != m.end() && !m["NValue"].empty()) {
      NValue = make_shared<long>(boost::any_cast<long>(m["NValue"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~CreateAlarmRuleRequest() = default;
};
class CreateAlarmRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> aggregates{};
  shared_ptr<string> alarmAliasName{};
  shared_ptr<string> alarmItem{};
  shared_ptr<string> alertWayShrink{};
  shared_ptr<string> contactGroupIdsShrink{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> NValue{};
  shared_ptr<string> operator_{};
  shared_ptr<double> value{};

  CreateAlarmRuleShrinkRequest() {}

  explicit CreateAlarmRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (aggregates) {
      res["Aggregates"] = boost::any(*aggregates);
    }
    if (alarmAliasName) {
      res["AlarmAliasName"] = boost::any(*alarmAliasName);
    }
    if (alarmItem) {
      res["AlarmItem"] = boost::any(*alarmItem);
    }
    if (alertWayShrink) {
      res["AlertWay"] = boost::any(*alertWayShrink);
    }
    if (contactGroupIdsShrink) {
      res["ContactGroupIds"] = boost::any(*contactGroupIdsShrink);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (NValue) {
      res["NValue"] = boost::any(*NValue);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Aggregates") != m.end() && !m["Aggregates"].empty()) {
      aggregates = make_shared<string>(boost::any_cast<string>(m["Aggregates"]));
    }
    if (m.find("AlarmAliasName") != m.end() && !m["AlarmAliasName"].empty()) {
      alarmAliasName = make_shared<string>(boost::any_cast<string>(m["AlarmAliasName"]));
    }
    if (m.find("AlarmItem") != m.end() && !m["AlarmItem"].empty()) {
      alarmItem = make_shared<string>(boost::any_cast<string>(m["AlarmItem"]));
    }
    if (m.find("AlertWay") != m.end() && !m["AlertWay"].empty()) {
      alertWayShrink = make_shared<string>(boost::any_cast<string>(m["AlertWay"]));
    }
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      contactGroupIdsShrink = make_shared<string>(boost::any_cast<string>(m["ContactGroupIds"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NValue") != m.end() && !m["NValue"].empty()) {
      NValue = make_shared<long>(boost::any_cast<long>(m["NValue"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~CreateAlarmRuleShrinkRequest() = default;
};
class CreateAlarmRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAlarmRuleResponseBody() {}

  explicit CreateAlarmRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateAlarmRuleResponseBody() = default;
};
class CreateAlarmRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAlarmRuleResponseBody> body{};

  CreateAlarmRuleResponse() {}

  explicit CreateAlarmRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAlarmRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlarmRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlarmRuleResponse() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> language{};
  shared_ptr<string> region{};
  shared_ptr<string> source{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> language{};
  shared_ptr<string> licenseKey{};
  shared_ptr<string> regionId{};
  shared_ptr<string> source{};
  shared_ptr<long> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  CreateApplicationResponseBodyData() {}

  explicit CreateApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (licenseKey) {
      res["LicenseKey"] = boost::any(*licenseKey);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LicenseKey") != m.end() && !m["LicenseKey"].empty()) {
      licenseKey = make_shared<string>(boost::any_cast<string>(m["LicenseKey"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateApplicationResponseBodyData() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateApplicationResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterSpecification{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> clusterVersion{};
  shared_ptr<string> connectionType{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<string> diskType{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> mseVersion{};
  shared_ptr<string> netType{};
  shared_ptr<string> privateSlbSpecification{};
  shared_ptr<string> pubNetworkFlow{};
  shared_ptr<string> pubSlbSpecification{};
  shared_ptr<string> region{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterSpecification) {
      res["ClusterSpecification"] = boost::any(*clusterSpecification);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (clusterVersion) {
      res["ClusterVersion"] = boost::any(*clusterVersion);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (mseVersion) {
      res["MseVersion"] = boost::any(*mseVersion);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (privateSlbSpecification) {
      res["PrivateSlbSpecification"] = boost::any(*privateSlbSpecification);
    }
    if (pubNetworkFlow) {
      res["PubNetworkFlow"] = boost::any(*pubNetworkFlow);
    }
    if (pubSlbSpecification) {
      res["PubSlbSpecification"] = boost::any(*pubSlbSpecification);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterSpecification") != m.end() && !m["ClusterSpecification"].empty()) {
      clusterSpecification = make_shared<string>(boost::any_cast<string>(m["ClusterSpecification"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ClusterVersion") != m.end() && !m["ClusterVersion"].empty()) {
      clusterVersion = make_shared<string>(boost::any_cast<string>(m["ClusterVersion"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("MseVersion") != m.end() && !m["MseVersion"].empty()) {
      mseVersion = make_shared<string>(boost::any_cast<string>(m["MseVersion"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PrivateSlbSpecification") != m.end() && !m["PrivateSlbSpecification"].empty()) {
      privateSlbSpecification = make_shared<string>(boost::any_cast<string>(m["PrivateSlbSpecification"]));
    }
    if (m.find("PubNetworkFlow") != m.end() && !m["PubNetworkFlow"].empty()) {
      pubNetworkFlow = make_shared<string>(boost::any_cast<string>(m["PubNetworkFlow"]));
    }
    if (m.find("PubSlbSpecification") != m.end() && !m["PubSlbSpecification"].empty()) {
      pubSlbSpecification = make_shared<string>(boost::any_cast<string>(m["PubSlbSpecification"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateEngineNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> desc{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceCount{};

  CreateEngineNamespaceRequest() {}

  explicit CreateEngineNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
  }


  virtual ~CreateEngineNamespaceRequest() = default;
};
class CreateEngineNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> configCount{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<long> quota{};
  shared_ptr<long> serviceCount{};
  shared_ptr<long> type{};

  CreateEngineNamespaceResponseBodyData() {}

  explicit CreateEngineNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<long>(boost::any_cast<long>(m["ConfigCount"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~CreateEngineNamespaceResponseBodyData() = default;
};
class CreateEngineNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<CreateEngineNamespaceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateEngineNamespaceResponseBody() {}

  explicit CreateEngineNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateEngineNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateEngineNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEngineNamespaceResponseBody() = default;
};
class CreateEngineNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEngineNamespaceResponseBody> body{};

  CreateEngineNamespaceResponse() {}

  explicit CreateEngineNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEngineNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEngineNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEngineNamespaceResponse() = default;
};
class CreateNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> betaIps{};
  shared_ptr<string> content{};
  shared_ptr<string> dataId{};
  shared_ptr<string> desc{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> tags{};
  shared_ptr<string> type{};

  CreateNacosConfigRequest() {}

  explicit CreateNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (betaIps) {
      res["BetaIps"] = boost::any(*betaIps);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BetaIps") != m.end() && !m["BetaIps"].empty()) {
      betaIps = make_shared<string>(boost::any_cast<string>(m["BetaIps"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateNacosConfigRequest() = default;
};
class CreateNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateNacosConfigResponseBody() {}

  explicit CreateNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateNacosConfigResponseBody() = default;
};
class CreateNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNacosConfigResponseBody> body{};

  CreateNacosConfigResponse() {}

  explicit CreateNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNacosConfigResponse() = default;
};
class CreateNacosInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> ephemeral{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> metadata{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> port{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> weight{};

  CreateNacosInstanceRequest() {}

  explicit CreateNacosInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (ephemeral) {
      res["Ephemeral"] = boost::any(*ephemeral);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Ephemeral") != m.end() && !m["Ephemeral"].empty()) {
      ephemeral = make_shared<bool>(boost::any_cast<bool>(m["Ephemeral"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
  }


  virtual ~CreateNacosInstanceRequest() = default;
};
class CreateNacosInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateNacosInstanceResponseBody() {}

  explicit CreateNacosInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateNacosInstanceResponseBody() = default;
};
class CreateNacosInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNacosInstanceResponseBody> body{};

  CreateNacosInstanceResponse() {}

  explicit CreateNacosInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNacosInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNacosInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNacosInstanceResponse() = default;
};
class CreateNacosServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ephemeral{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> protectThreshold{};
  shared_ptr<string> serviceName{};

  CreateNacosServiceRequest() {}

  explicit CreateNacosServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ephemeral) {
      res["Ephemeral"] = boost::any(*ephemeral);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (protectThreshold) {
      res["ProtectThreshold"] = boost::any(*protectThreshold);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Ephemeral") != m.end() && !m["Ephemeral"].empty()) {
      ephemeral = make_shared<bool>(boost::any_cast<bool>(m["Ephemeral"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ProtectThreshold") != m.end() && !m["ProtectThreshold"].empty()) {
      protectThreshold = make_shared<string>(boost::any_cast<string>(m["ProtectThreshold"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CreateNacosServiceRequest() = default;
};
class CreateNacosServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateNacosServiceResponseBody() {}

  explicit CreateNacosServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateNacosServiceResponseBody() = default;
};
class CreateNacosServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNacosServiceResponseBody> body{};

  CreateNacosServiceResponse() {}

  explicit CreateNacosServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNacosServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNacosServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNacosServiceResponse() = default;
};
class CreateZnodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> data{};
  shared_ptr<string> path{};

  CreateZnodeRequest() {}

  explicit CreateZnodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateZnodeRequest() = default;
};
class CreateZnodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  CreateZnodeResponseBodyData() {}

  explicit CreateZnodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateZnodeResponseBodyData() = default;
};
class CreateZnodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateZnodeResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateZnodeResponseBody() {}

  explicit CreateZnodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateZnodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateZnodeResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateZnodeResponseBody() = default;
};
class CreateZnodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateZnodeResponseBody> body{};

  CreateZnodeResponse() {}

  explicit CreateZnodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateZnodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateZnodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateZnodeResponse() = default;
};
class DeleteAlarmRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> alarmRuleId{};
  shared_ptr<string> requestPars{};

  DeleteAlarmRuleRequest() {}

  explicit DeleteAlarmRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (alarmRuleId) {
      res["AlarmRuleId"] = boost::any(*alarmRuleId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AlarmRuleId") != m.end() && !m["AlarmRuleId"].empty()) {
      alarmRuleId = make_shared<string>(boost::any_cast<string>(m["AlarmRuleId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~DeleteAlarmRuleRequest() = default;
};
class DeleteAlarmRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAlarmRuleResponseBody() {}

  explicit DeleteAlarmRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAlarmRuleResponseBody() = default;
};
class DeleteAlarmRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAlarmRuleResponseBody> body{};

  DeleteAlarmRuleResponse() {}

  explicit DeleteAlarmRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAlarmRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlarmRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlarmRuleResponse() = default;
};
class DeleteAuthResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> id{};

  DeleteAuthResourceRequest() {}

  explicit DeleteAuthResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteAuthResourceRequest() = default;
};
class DeleteAuthResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> authId{};
  shared_ptr<long> domainId{};
  shared_ptr<string> domainName{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isWhite{};
  shared_ptr<string> path{};

  DeleteAuthResourceResponseBodyData() {}

  explicit DeleteAuthResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authId) {
      res["AuthId"] = boost::any(*authId);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isWhite) {
      res["IsWhite"] = boost::any(*isWhite);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthId") != m.end() && !m["AuthId"].empty()) {
      authId = make_shared<long>(boost::any_cast<long>(m["AuthId"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsWhite") != m.end() && !m["IsWhite"].empty()) {
      isWhite = make_shared<bool>(boost::any_cast<bool>(m["IsWhite"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DeleteAuthResourceResponseBodyData() = default;
};
class DeleteAuthResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DeleteAuthResourceResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAuthResourceResponseBody() {}

  explicit DeleteAuthResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteAuthResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteAuthResourceResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAuthResourceResponseBody() = default;
};
class DeleteAuthResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAuthResourceResponseBody> body{};

  DeleteAuthResourceResponse() {}

  explicit DeleteAuthResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAuthResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAuthResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAuthResourceResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> instanceId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteClusterResponseBody() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class DeleteEngineNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};

  DeleteEngineNamespaceRequest() {}

  explicit DeleteEngineNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteEngineNamespaceRequest() = default;
};
class DeleteEngineNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEngineNamespaceResponseBody() {}

  explicit DeleteEngineNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEngineNamespaceResponseBody() = default;
};
class DeleteEngineNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEngineNamespaceResponseBody> body{};

  DeleteEngineNamespaceResponse() {}

  explicit DeleteEngineNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEngineNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEngineNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEngineNamespaceResponse() = default;
};
class DeleteGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> deleteSlb{};
  shared_ptr<string> gatewayUniqueId{};

  DeleteGatewayRequest() {}

  explicit DeleteGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (deleteSlb) {
      res["DeleteSlb"] = boost::any(*deleteSlb);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DeleteSlb") != m.end() && !m["DeleteSlb"].empty()) {
      deleteSlb = make_shared<bool>(boost::any_cast<bool>(m["DeleteSlb"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~DeleteGatewayRequest() = default;
};
class DeleteGatewayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> primaryUser{};
  shared_ptr<string> region{};
  shared_ptr<long> replica{};
  shared_ptr<string> securityGroup{};
  shared_ptr<string> spec{};
  shared_ptr<long> status{};
  shared_ptr<string> vpc{};
  shared_ptr<string> vswitch{};

  DeleteGatewayResponseBodyData() {}

  explicit DeleteGatewayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (primaryUser) {
      res["PrimaryUser"] = boost::any(*primaryUser);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (replica) {
      res["Replica"] = boost::any(*replica);
    }
    if (securityGroup) {
      res["SecurityGroup"] = boost::any(*securityGroup);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpc) {
      res["Vpc"] = boost::any(*vpc);
    }
    if (vswitch) {
      res["Vswitch"] = boost::any(*vswitch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrimaryUser") != m.end() && !m["PrimaryUser"].empty()) {
      primaryUser = make_shared<string>(boost::any_cast<string>(m["PrimaryUser"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Replica") != m.end() && !m["Replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["Replica"]));
    }
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      securityGroup = make_shared<string>(boost::any_cast<string>(m["SecurityGroup"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      vpc = make_shared<string>(boost::any_cast<string>(m["Vpc"]));
    }
    if (m.find("Vswitch") != m.end() && !m["Vswitch"].empty()) {
      vswitch = make_shared<string>(boost::any_cast<string>(m["Vswitch"]));
    }
  }


  virtual ~DeleteGatewayResponseBodyData() = default;
};
class DeleteGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DeleteGatewayResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGatewayResponseBody() {}

  explicit DeleteGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteGatewayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteGatewayResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGatewayResponseBody() = default;
};
class DeleteGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGatewayResponseBody> body{};

  DeleteGatewayResponse() {}

  explicit DeleteGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayResponse() = default;
};
class DeleteGatewayDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> id{};

  DeleteGatewayDomainRequest() {}

  explicit DeleteGatewayDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteGatewayDomainRequest() = default;
};
class DeleteGatewayDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> certIdentifier{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mustHttps{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};

  DeleteGatewayDomainResponseBodyData() {}

  explicit DeleteGatewayDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mustHttps) {
      res["MustHttps"] = boost::any(*mustHttps);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<long>(boost::any_cast<long>(m["CertIdentifier"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MustHttps") != m.end() && !m["MustHttps"].empty()) {
      mustHttps = make_shared<bool>(boost::any_cast<bool>(m["MustHttps"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DeleteGatewayDomainResponseBodyData() = default;
};
class DeleteGatewayDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DeleteGatewayDomainResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGatewayDomainResponseBody() {}

  explicit DeleteGatewayDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteGatewayDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteGatewayDomainResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGatewayDomainResponseBody() = default;
};
class DeleteGatewayDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGatewayDomainResponseBody> body{};

  DeleteGatewayDomainResponse() {}

  explicit DeleteGatewayDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayDomainResponse() = default;
};
class DeleteGatewayServiceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> serviceVersion{};

  DeleteGatewayServiceVersionRequest() {}

  explicit DeleteGatewayServiceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~DeleteGatewayServiceVersionRequest() = default;
};
class DeleteGatewayServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGatewayServiceVersionResponseBody() {}

  explicit DeleteGatewayServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGatewayServiceVersionResponseBody() = default;
};
class DeleteGatewayServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGatewayServiceVersionResponseBody> body{};

  DeleteGatewayServiceVersionResponse() {}

  explicit DeleteGatewayServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayServiceVersionResponse() = default;
};
class DeleteGatewaySlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> deleteSlb{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> id{};

  DeleteGatewaySlbRequest() {}

  explicit DeleteGatewaySlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (deleteSlb) {
      res["DeleteSlb"] = boost::any(*deleteSlb);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DeleteSlb") != m.end() && !m["DeleteSlb"].empty()) {
      deleteSlb = make_shared<bool>(boost::any_cast<bool>(m["DeleteSlb"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteGatewaySlbRequest() = default;
};
class DeleteGatewaySlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGatewaySlbResponseBody() {}

  explicit DeleteGatewaySlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGatewaySlbResponseBody() = default;
};
class DeleteGatewaySlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGatewaySlbResponseBody> body{};

  DeleteGatewaySlbResponse() {}

  explicit DeleteGatewaySlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewaySlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewaySlbResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewaySlbResponse() = default;
};
class DeleteNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> beta{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};

  DeleteNacosConfigRequest() {}

  explicit DeleteNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (beta) {
      res["Beta"] = boost::any(*beta);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Beta") != m.end() && !m["Beta"].empty()) {
      beta = make_shared<bool>(boost::any_cast<bool>(m["Beta"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DeleteNacosConfigRequest() = default;
};
class DeleteNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteNacosConfigResponseBody() {}

  explicit DeleteNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteNacosConfigResponseBody() = default;
};
class DeleteNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNacosConfigResponseBody> body{};

  DeleteNacosConfigResponse() {}

  explicit DeleteNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNacosConfigResponse() = default;
};
class DeleteNacosConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> ids{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};

  DeleteNacosConfigsRequest() {}

  explicit DeleteNacosConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DeleteNacosConfigsRequest() = default;
};
class DeleteNacosConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteNacosConfigsResponseBody() {}

  explicit DeleteNacosConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteNacosConfigsResponseBody() = default;
};
class DeleteNacosConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNacosConfigsResponseBody> body{};

  DeleteNacosConfigsResponse() {}

  explicit DeleteNacosConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNacosConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNacosConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNacosConfigsResponse() = default;
};
class DeleteNacosServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> serviceName{};

  DeleteNacosServiceRequest() {}

  explicit DeleteNacosServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~DeleteNacosServiceRequest() = default;
};
class DeleteNacosServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteNacosServiceResponseBody() {}

  explicit DeleteNacosServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteNacosServiceResponseBody() = default;
};
class DeleteNacosServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNacosServiceResponseBody> body{};

  DeleteNacosServiceResponse() {}

  explicit DeleteNacosServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNacosServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNacosServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNacosServiceResponse() = default;
};
class DeleteServiceSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> sourceId{};

  DeleteServiceSourceRequest() {}

  explicit DeleteServiceSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["SourceId"]));
    }
  }


  virtual ~DeleteServiceSourceRequest() = default;
};
class DeleteServiceSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteServiceSourceResponseBody() {}

  explicit DeleteServiceSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteServiceSourceResponseBody() = default;
};
class DeleteServiceSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceSourceResponseBody> body{};

  DeleteServiceSourceResponse() {}

  explicit DeleteServiceSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceSourceResponse() = default;
};
class DeleteZnodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> path{};
  shared_ptr<string> requestPars{};

  DeleteZnodeRequest() {}

  explicit DeleteZnodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~DeleteZnodeRequest() = default;
};
class DeleteZnodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  DeleteZnodeResponseBodyData() {}

  explicit DeleteZnodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DeleteZnodeResponseBodyData() = default;
};
class DeleteZnodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteZnodeResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteZnodeResponseBody() {}

  explicit DeleteZnodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteZnodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteZnodeResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteZnodeResponseBody() = default;
};
class DeleteZnodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteZnodeResponseBody> body{};

  DeleteZnodeResponse() {}

  explicit DeleteZnodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteZnodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteZnodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteZnodeResponse() = default;
};
class ExportNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> ids{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};

  ExportNacosConfigRequest() {}

  explicit ExportNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ExportNacosConfigRequest() = default;
};
class ExportNacosConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  ExportNacosConfigResponseBodyData() {}

  explicit ExportNacosConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ExportNacosConfigResponseBodyData() = default;
};
class ExportNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ExportNacosConfigResponseBodyData> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportNacosConfigResponseBody() {}

  explicit ExportNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExportNacosConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExportNacosConfigResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportNacosConfigResponseBody() = default;
};
class ExportNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExportNacosConfigResponseBody> body{};

  ExportNacosConfigResponse() {}

  explicit ExportNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExportNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ExportNacosConfigResponse() = default;
};
class GetBlackWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<bool> isWhite{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> type{};

  GetBlackWhiteListRequest() {}

  explicit GetBlackWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (isWhite) {
      res["IsWhite"] = boost::any(*isWhite);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("IsWhite") != m.end() && !m["IsWhite"].empty()) {
      isWhite = make_shared<bool>(boost::any_cast<bool>(m["IsWhite"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetBlackWhiteListRequest() = default;
};
class GetBlackWhiteListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isWhite{};
  shared_ptr<long> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetBlackWhiteListResponseBodyData() {}

  explicit GetBlackWhiteListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isWhite) {
      res["IsWhite"] = boost::any(*isWhite);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsWhite") != m.end() && !m["IsWhite"].empty()) {
      isWhite = make_shared<bool>(boost::any_cast<bool>(m["IsWhite"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetBlackWhiteListResponseBodyData() = default;
};
class GetBlackWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetBlackWhiteListResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetBlackWhiteListResponseBody() {}

  explicit GetBlackWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetBlackWhiteListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetBlackWhiteListResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetBlackWhiteListResponseBody() = default;
};
class GetBlackWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBlackWhiteListResponseBody> body{};

  GetBlackWhiteListResponse() {}

  explicit GetBlackWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetBlackWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBlackWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~GetBlackWhiteListResponse() = default;
};
class GetEngineNamepaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};

  GetEngineNamepaceRequest() {}

  explicit GetEngineNamepaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetEngineNamepaceRequest() = default;
};
class GetEngineNamepaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> configCount{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<string> quota{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> type{};

  GetEngineNamepaceResponseBody() {}

  explicit GetEngineNamepaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<string>(boost::any_cast<string>(m["ConfigCount"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<string>(boost::any_cast<string>(m["Quota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetEngineNamepaceResponseBody() = default;
};
class GetEngineNamepaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEngineNamepaceResponseBody> body{};

  GetEngineNamepaceResponse() {}

  explicit GetEngineNamepaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEngineNamepaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEngineNamepaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetEngineNamepaceResponse() = default;
};
class GetGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};

  GetGatewayRequest() {}

  explicit GetGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~GetGatewayRequest() = default;
};
class GetGatewayResponseBodyDataLogConfigDetails : public Darabonba::Model {
public:
  shared_ptr<bool> logEnabled{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> projectName{};

  GetGatewayResponseBodyDataLogConfigDetails() {}

  explicit GetGatewayResponseBodyDataLogConfigDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logEnabled) {
      res["LogEnabled"] = boost::any(*logEnabled);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogEnabled") != m.end() && !m["LogEnabled"].empty()) {
      logEnabled = make_shared<bool>(boost::any_cast<bool>(m["LogEnabled"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataLogConfigDetails() = default;
};
class GetGatewayResponseBodyDataXtraceDetails : public Darabonba::Model {
public:
  shared_ptr<long> sample{};
  shared_ptr<bool> traceOn{};

  GetGatewayResponseBodyDataXtraceDetails() {}

  explicit GetGatewayResponseBodyDataXtraceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sample) {
      res["Sample"] = boost::any(*sample);
    }
    if (traceOn) {
      res["TraceOn"] = boost::any(*traceOn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sample") != m.end() && !m["Sample"].empty()) {
      sample = make_shared<long>(boost::any_cast<long>(m["Sample"]));
    }
    if (m.find("TraceOn") != m.end() && !m["TraceOn"].empty()) {
      traceOn = make_shared<bool>(boost::any_cast<bool>(m["TraceOn"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataXtraceDetails() = default;
};
class GetGatewayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> endDate{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<GetGatewayResponseBodyDataLogConfigDetails> logConfigDetails{};
  shared_ptr<string> name{};
  shared_ptr<string> primaryUser{};
  shared_ptr<string> region{};
  shared_ptr<long> replica{};
  shared_ptr<string> securityGroup{};
  shared_ptr<string> spec{};
  shared_ptr<long> status{};
  shared_ptr<string> vpc{};
  shared_ptr<string> vswitch{};
  shared_ptr<string> vswitch2{};
  shared_ptr<GetGatewayResponseBodyDataXtraceDetails> xtraceDetails{};

  GetGatewayResponseBodyData() {}

  explicit GetGatewayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (logConfigDetails) {
      res["LogConfigDetails"] = logConfigDetails ? boost::any(logConfigDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (primaryUser) {
      res["PrimaryUser"] = boost::any(*primaryUser);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (replica) {
      res["Replica"] = boost::any(*replica);
    }
    if (securityGroup) {
      res["SecurityGroup"] = boost::any(*securityGroup);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpc) {
      res["Vpc"] = boost::any(*vpc);
    }
    if (vswitch) {
      res["Vswitch"] = boost::any(*vswitch);
    }
    if (vswitch2) {
      res["Vswitch2"] = boost::any(*vswitch2);
    }
    if (xtraceDetails) {
      res["XtraceDetails"] = xtraceDetails ? boost::any(xtraceDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LogConfigDetails") != m.end() && !m["LogConfigDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogConfigDetails"].type()) {
        GetGatewayResponseBodyDataLogConfigDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogConfigDetails"]));
        logConfigDetails = make_shared<GetGatewayResponseBodyDataLogConfigDetails>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrimaryUser") != m.end() && !m["PrimaryUser"].empty()) {
      primaryUser = make_shared<string>(boost::any_cast<string>(m["PrimaryUser"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Replica") != m.end() && !m["Replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["Replica"]));
    }
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      securityGroup = make_shared<string>(boost::any_cast<string>(m["SecurityGroup"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      vpc = make_shared<string>(boost::any_cast<string>(m["Vpc"]));
    }
    if (m.find("Vswitch") != m.end() && !m["Vswitch"].empty()) {
      vswitch = make_shared<string>(boost::any_cast<string>(m["Vswitch"]));
    }
    if (m.find("Vswitch2") != m.end() && !m["Vswitch2"].empty()) {
      vswitch2 = make_shared<string>(boost::any_cast<string>(m["Vswitch2"]));
    }
    if (m.find("XtraceDetails") != m.end() && !m["XtraceDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["XtraceDetails"].type()) {
        GetGatewayResponseBodyDataXtraceDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["XtraceDetails"]));
        xtraceDetails = make_shared<GetGatewayResponseBodyDataXtraceDetails>(model1);
      }
    }
  }


  virtual ~GetGatewayResponseBodyData() = default;
};
class GetGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetGatewayResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGatewayResponseBody() {}

  explicit GetGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetGatewayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGatewayResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetGatewayResponseBody() = default;
};
class GetGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGatewayResponseBody> body{};

  GetGatewayResponse() {}

  explicit GetGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayResponse() = default;
};
class GetGatewayDomainDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> id{};

  GetGatewayDomainDetailRequest() {}

  explicit GetGatewayDomainDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetGatewayDomainDetailRequest() = default;
};
class GetGatewayDomainDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<long> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtAfter{};
  shared_ptr<string> gmtBefore{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> issuer{};
  shared_ptr<bool> mustHttps{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};
  shared_ptr<string> sans{};

  GetGatewayDomainDetailResponseBodyData() {}

  explicit GetGatewayDomainDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtAfter) {
      res["GmtAfter"] = boost::any(*gmtAfter);
    }
    if (gmtBefore) {
      res["GmtBefore"] = boost::any(*gmtBefore);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (mustHttps) {
      res["MustHttps"] = boost::any(*mustHttps);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<long>(boost::any_cast<long>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtAfter") != m.end() && !m["GmtAfter"].empty()) {
      gmtAfter = make_shared<string>(boost::any_cast<string>(m["GmtAfter"]));
    }
    if (m.find("GmtBefore") != m.end() && !m["GmtBefore"].empty()) {
      gmtBefore = make_shared<string>(boost::any_cast<string>(m["GmtBefore"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("MustHttps") != m.end() && !m["MustHttps"].empty()) {
      mustHttps = make_shared<bool>(boost::any_cast<bool>(m["MustHttps"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
  }


  virtual ~GetGatewayDomainDetailResponseBodyData() = default;
};
class GetGatewayDomainDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetGatewayDomainDetailResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGatewayDomainDetailResponseBody() {}

  explicit GetGatewayDomainDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetGatewayDomainDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGatewayDomainDetailResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetGatewayDomainDetailResponseBody() = default;
};
class GetGatewayDomainDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGatewayDomainDetailResponseBody> body{};

  GetGatewayDomainDetailResponse() {}

  explicit GetGatewayDomainDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayDomainDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayDomainDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayDomainDetailResponse() = default;
};
class GetGatewayOptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayUniqueId{};

  GetGatewayOptionRequest() {}

  explicit GetGatewayOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~GetGatewayOptionRequest() = default;
};
class GetGatewayOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GatewayOption> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGatewayOptionResponseBody() {}

  explicit GetGatewayOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GatewayOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GatewayOption>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetGatewayOptionResponseBody() = default;
};
class GetGatewayOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGatewayOptionResponseBody> body{};

  GetGatewayOptionResponse() {}

  explicit GetGatewayOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayOptionResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayOptionResponse() = default;
};
class GetGatewayServiceDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> serviceId{};

  GetGatewayServiceDetailRequest() {}

  explicit GetGatewayServiceDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
  }


  virtual ~GetGatewayServiceDetailRequest() = default;
};
class GetGatewayServiceDetailResponseBodyDataLabelDetails : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  GetGatewayServiceDetailResponseBodyDataLabelDetails() {}

  explicit GetGatewayServiceDetailResponseBodyDataLabelDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetGatewayServiceDetailResponseBodyDataLabelDetails() = default;
};
class GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels() {}

  explicit GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels() = default;
};
class GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion : public Darabonba::Model {
public:
  shared_ptr<vector<GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels>> labels{};
  shared_ptr<string> name{};

  GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion() {}

  explicit GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersionLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion() = default;
};
class GetGatewayServiceDetailResponseBodyDataVersionDetails : public Darabonba::Model {
public:
  shared_ptr<long> endpointNum{};
  shared_ptr<string> endpointNumPercent{};
  shared_ptr<GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion> serviceVersion{};

  GetGatewayServiceDetailResponseBodyDataVersionDetails() {}

  explicit GetGatewayServiceDetailResponseBodyDataVersionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointNum) {
      res["EndpointNum"] = boost::any(*endpointNum);
    }
    if (endpointNumPercent) {
      res["EndpointNumPercent"] = boost::any(*endpointNumPercent);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = serviceVersion ? boost::any(serviceVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointNum") != m.end() && !m["EndpointNum"].empty()) {
      endpointNum = make_shared<long>(boost::any_cast<long>(m["EndpointNum"]));
    }
    if (m.find("EndpointNumPercent") != m.end() && !m["EndpointNumPercent"].empty()) {
      endpointNumPercent = make_shared<string>(boost::any_cast<string>(m["EndpointNumPercent"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceVersion"].type()) {
        GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceVersion"]));
        serviceVersion = make_shared<GetGatewayServiceDetailResponseBodyDataVersionDetailsServiceVersion>(model1);
      }
    }
  }


  virtual ~GetGatewayServiceDetailResponseBodyDataVersionDetails() = default;
};
class GetGatewayServiceDetailResponseBodyDataVersions : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  GetGatewayServiceDetailResponseBodyDataVersions() {}

  explicit GetGatewayServiceDetailResponseBodyDataVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetGatewayServiceDetailResponseBodyDataVersions() = default;
};
class GetGatewayServiceDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> gatewayId{};
  shared_ptr<TrafficPolicy> gatewayTrafficPolicy{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> groupName{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> ips{};
  shared_ptr<vector<GetGatewayServiceDetailResponseBodyDataLabelDetails>> labelDetails{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceNameInRegistry{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<GetGatewayServiceDetailResponseBodyDataVersionDetails>> versionDetails{};
  shared_ptr<vector<GetGatewayServiceDetailResponseBodyDataVersions>> versions{};

  GetGatewayServiceDetailResponseBodyData() {}

  explicit GetGatewayServiceDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayTrafficPolicy) {
      res["GatewayTrafficPolicy"] = gatewayTrafficPolicy ? boost::any(gatewayTrafficPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (labelDetails) {
      vector<boost::any> temp1;
      for(auto item1:*labelDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelDetails"] = boost::any(temp1);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceNameInRegistry) {
      res["ServiceNameInRegistry"] = boost::any(*serviceNameInRegistry);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (versionDetails) {
      vector<boost::any> temp1;
      for(auto item1:*versionDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VersionDetails"] = boost::any(temp1);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayTrafficPolicy") != m.end() && !m["GatewayTrafficPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayTrafficPolicy"].type()) {
        TrafficPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatewayTrafficPolicy"]));
        gatewayTrafficPolicy = make_shared<TrafficPolicy>(model1);
      }
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LabelDetails") != m.end() && !m["LabelDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelDetails"].type()) {
        vector<GetGatewayServiceDetailResponseBodyDataLabelDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayServiceDetailResponseBodyDataLabelDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelDetails = make_shared<vector<GetGatewayServiceDetailResponseBodyDataLabelDetails>>(expect1);
      }
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceNameInRegistry") != m.end() && !m["ServiceNameInRegistry"].empty()) {
      serviceNameInRegistry = make_shared<string>(boost::any_cast<string>(m["ServiceNameInRegistry"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VersionDetails") != m.end() && !m["VersionDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["VersionDetails"].type()) {
        vector<GetGatewayServiceDetailResponseBodyDataVersionDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VersionDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayServiceDetailResponseBodyDataVersionDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionDetails = make_shared<vector<GetGatewayServiceDetailResponseBodyDataVersionDetails>>(expect1);
      }
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<GetGatewayServiceDetailResponseBodyDataVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayServiceDetailResponseBodyDataVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<GetGatewayServiceDetailResponseBodyDataVersions>>(expect1);
      }
    }
  }


  virtual ~GetGatewayServiceDetailResponseBodyData() = default;
};
class GetGatewayServiceDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetGatewayServiceDetailResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGatewayServiceDetailResponseBody() {}

  explicit GetGatewayServiceDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetGatewayServiceDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGatewayServiceDetailResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetGatewayServiceDetailResponseBody() = default;
};
class GetGatewayServiceDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGatewayServiceDetailResponseBody> body{};

  GetGatewayServiceDetailResponse() {}

  explicit GetGatewayServiceDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayServiceDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayServiceDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayServiceDetailResponse() = default;
};
class GetGovernanceKubernetesClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  GetGovernanceKubernetesClusterRequest() {}

  explicit GetGovernanceKubernetesClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterRequest() = default;
};
class GetGovernanceKubernetesClusterResponseBodyDataNamespaces : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> tags{};

  GetGovernanceKubernetesClusterResponseBodyDataNamespaces() {}

  explicit GetGovernanceKubernetesClusterResponseBodyDataNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterResponseBodyDataNamespaces() = default;
};
class GetGovernanceKubernetesClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> k8sVersion{};
  shared_ptr<string> namespaceInfos{};
  shared_ptr<vector<GetGovernanceKubernetesClusterResponseBodyDataNamespaces>> namespaces{};
  shared_ptr<string> pilotStartTime{};
  shared_ptr<string> region{};
  shared_ptr<string> updateTime{};

  GetGovernanceKubernetesClusterResponseBodyData() {}

  explicit GetGovernanceKubernetesClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (k8sVersion) {
      res["K8sVersion"] = boost::any(*k8sVersion);
    }
    if (namespaceInfos) {
      res["NamespaceInfos"] = boost::any(*namespaceInfos);
    }
    if (namespaces) {
      vector<boost::any> temp1;
      for(auto item1:*namespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Namespaces"] = boost::any(temp1);
    }
    if (pilotStartTime) {
      res["PilotStartTime"] = boost::any(*pilotStartTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("K8sVersion") != m.end() && !m["K8sVersion"].empty()) {
      k8sVersion = make_shared<string>(boost::any_cast<string>(m["K8sVersion"]));
    }
    if (m.find("NamespaceInfos") != m.end() && !m["NamespaceInfos"].empty()) {
      namespaceInfos = make_shared<string>(boost::any_cast<string>(m["NamespaceInfos"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<GetGovernanceKubernetesClusterResponseBodyDataNamespaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Namespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGovernanceKubernetesClusterResponseBodyDataNamespaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaces = make_shared<vector<GetGovernanceKubernetesClusterResponseBodyDataNamespaces>>(expect1);
      }
    }
    if (m.find("PilotStartTime") != m.end() && !m["PilotStartTime"].empty()) {
      pilotStartTime = make_shared<string>(boost::any_cast<string>(m["PilotStartTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterResponseBodyData() = default;
};
class GetGovernanceKubernetesClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetGovernanceKubernetesClusterResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGovernanceKubernetesClusterResponseBody() {}

  explicit GetGovernanceKubernetesClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetGovernanceKubernetesClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGovernanceKubernetesClusterResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterResponseBody() = default;
};
class GetGovernanceKubernetesClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGovernanceKubernetesClusterResponseBody> body{};

  GetGovernanceKubernetesClusterResponse() {}

  explicit GetGovernanceKubernetesClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGovernanceKubernetesClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGovernanceKubernetesClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetGovernanceKubernetesClusterResponse() = default;
};
class GetGovernanceKubernetesClusterListRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  GetGovernanceKubernetesClusterListRequest() {}

  explicit GetGovernanceKubernetesClusterListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterListRequest() = default;
};
class GetGovernanceKubernetesClusterListResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> k8sVersion{};
  shared_ptr<string> namespaceInfos{};
  shared_ptr<string> pilotStartTime{};
  shared_ptr<string> region{};

  GetGovernanceKubernetesClusterListResponseBodyDataResult() {}

  explicit GetGovernanceKubernetesClusterListResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (k8sVersion) {
      res["K8sVersion"] = boost::any(*k8sVersion);
    }
    if (namespaceInfos) {
      res["NamespaceInfos"] = boost::any(*namespaceInfos);
    }
    if (pilotStartTime) {
      res["PilotStartTime"] = boost::any(*pilotStartTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("K8sVersion") != m.end() && !m["K8sVersion"].empty()) {
      k8sVersion = make_shared<string>(boost::any_cast<string>(m["K8sVersion"]));
    }
    if (m.find("NamespaceInfos") != m.end() && !m["NamespaceInfos"].empty()) {
      namespaceInfos = make_shared<string>(boost::any_cast<string>(m["NamespaceInfos"]));
    }
    if (m.find("PilotStartTime") != m.end() && !m["PilotStartTime"].empty()) {
      pilotStartTime = make_shared<string>(boost::any_cast<string>(m["PilotStartTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterListResponseBodyDataResult() = default;
};
class GetGovernanceKubernetesClusterListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetGovernanceKubernetesClusterListResponseBodyDataResult>> result{};
  shared_ptr<long> totalSize{};

  GetGovernanceKubernetesClusterListResponseBodyData() {}

  explicit GetGovernanceKubernetesClusterListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetGovernanceKubernetesClusterListResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGovernanceKubernetesClusterListResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetGovernanceKubernetesClusterListResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterListResponseBodyData() = default;
};
class GetGovernanceKubernetesClusterListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetGovernanceKubernetesClusterListResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGovernanceKubernetesClusterListResponseBody() {}

  explicit GetGovernanceKubernetesClusterListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetGovernanceKubernetesClusterListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGovernanceKubernetesClusterListResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetGovernanceKubernetesClusterListResponseBody() = default;
};
class GetGovernanceKubernetesClusterListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGovernanceKubernetesClusterListResponseBody> body{};

  GetGovernanceKubernetesClusterListResponse() {}

  explicit GetGovernanceKubernetesClusterListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGovernanceKubernetesClusterListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGovernanceKubernetesClusterListResponseBody>(model1);
      }
    }
  }


  virtual ~GetGovernanceKubernetesClusterListResponse() = default;
};
class GetImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> versionCode{};

  GetImageRequest() {}

  explicit GetImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
  }


  virtual ~GetImageRequest() = default;
};
class GetImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currentVersionFullShowName{};
  shared_ptr<string> maxVersionChangelogUrl{};
  shared_ptr<string> maxVersionCode{};
  shared_ptr<string> maxVersionFullShowName{};

  GetImageResponseBodyData() {}

  explicit GetImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentVersionFullShowName) {
      res["CurrentVersionFullShowName"] = boost::any(*currentVersionFullShowName);
    }
    if (maxVersionChangelogUrl) {
      res["MaxVersionChangelogUrl"] = boost::any(*maxVersionChangelogUrl);
    }
    if (maxVersionCode) {
      res["MaxVersionCode"] = boost::any(*maxVersionCode);
    }
    if (maxVersionFullShowName) {
      res["MaxVersionFullShowName"] = boost::any(*maxVersionFullShowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentVersionFullShowName") != m.end() && !m["CurrentVersionFullShowName"].empty()) {
      currentVersionFullShowName = make_shared<string>(boost::any_cast<string>(m["CurrentVersionFullShowName"]));
    }
    if (m.find("MaxVersionChangelogUrl") != m.end() && !m["MaxVersionChangelogUrl"].empty()) {
      maxVersionChangelogUrl = make_shared<string>(boost::any_cast<string>(m["MaxVersionChangelogUrl"]));
    }
    if (m.find("MaxVersionCode") != m.end() && !m["MaxVersionCode"].empty()) {
      maxVersionCode = make_shared<string>(boost::any_cast<string>(m["MaxVersionCode"]));
    }
    if (m.find("MaxVersionFullShowName") != m.end() && !m["MaxVersionFullShowName"].empty()) {
      maxVersionFullShowName = make_shared<string>(boost::any_cast<string>(m["MaxVersionFullShowName"]));
    }
  }


  virtual ~GetImageResponseBodyData() = default;
};
class GetImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetImageResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetImageResponseBody() {}

  explicit GetImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImageResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetImageResponseBody() = default;
};
class GetImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetImageResponseBody> body{};

  GetImageResponse() {}

  explicit GetImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageResponse() = default;
};
class GetImportFileUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> contentType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};

  GetImportFileUrlRequest() {}

  explicit GetImportFileUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~GetImportFileUrlRequest() = default;
};
class GetImportFileUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  GetImportFileUrlResponseBodyData() {}

  explicit GetImportFileUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetImportFileUrlResponseBodyData() = default;
};
class GetImportFileUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetImportFileUrlResponseBodyData> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetImportFileUrlResponseBody() {}

  explicit GetImportFileUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetImportFileUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImportFileUrlResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetImportFileUrlResponseBody() = default;
};
class GetImportFileUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetImportFileUrlResponseBody> body{};

  GetImportFileUrlResponse() {}

  explicit GetImportFileUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetImportFileUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImportFileUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetImportFileUrlResponse() = default;
};
class GetKubernetesSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};

  GetKubernetesSourceRequest() {}

  explicit GetKubernetesSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~GetKubernetesSourceRequest() = default;
};
class GetKubernetesSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<string> name{};

  GetKubernetesSourceResponseBodyData() {}

  explicit GetKubernetesSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["Cluster"] = boost::any(*cluster);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["Cluster"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetKubernetesSourceResponseBodyData() = default;
};
class GetKubernetesSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetKubernetesSourceResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetKubernetesSourceResponseBody() {}

  explicit GetKubernetesSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetKubernetesSourceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetKubernetesSourceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetKubernetesSourceResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetKubernetesSourceResponseBody() = default;
};
class GetKubernetesSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetKubernetesSourceResponseBody> body{};

  GetKubernetesSourceResponse() {}

  explicit GetKubernetesSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetKubernetesSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKubernetesSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetKubernetesSourceResponse() = default;
};
class GetMseFeatureSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  GetMseFeatureSwitchRequest() {}

  explicit GetMseFeatureSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~GetMseFeatureSwitchRequest() = default;
};
class GetMseFeatureSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};
  shared_ptr<bool> success{};

  GetMseFeatureSwitchResponseBody() {}

  explicit GetMseFeatureSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMseFeatureSwitchResponseBody() = default;
};
class GetMseFeatureSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMseFeatureSwitchResponseBody> body{};

  GetMseFeatureSwitchResponse() {}

  explicit GetMseFeatureSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMseFeatureSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMseFeatureSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~GetMseFeatureSwitchResponse() = default;
};
class GetMseSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};

  GetMseSourceRequest() {}

  explicit GetMseSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~GetMseSourceRequest() = default;
};
class GetMseSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetMseSourceResponseBodyData() {}

  explicit GetMseSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetMseSourceResponseBodyData() = default;
};
class GetMseSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetMseSourceResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMseSourceResponseBody() {}

  explicit GetMseSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetMseSourceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMseSourceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetMseSourceResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMseSourceResponseBody() = default;
};
class GetMseSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMseSourceResponseBody> body{};

  GetMseSourceResponse() {}

  explicit GetMseSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMseSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMseSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetMseSourceResponse() = default;
};
class GetNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> beta{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};

  GetNacosConfigRequest() {}

  explicit GetNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (beta) {
      res["Beta"] = boost::any(*beta);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Beta") != m.end() && !m["Beta"].empty()) {
      beta = make_shared<bool>(boost::any_cast<bool>(m["Beta"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~GetNacosConfigRequest() = default;
};
class GetNacosConfigResponseBodyConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> betaIps{};
  shared_ptr<string> content{};
  shared_ptr<string> dataId{};
  shared_ptr<string> desc{};
  shared_ptr<string> encryptedDataKey{};
  shared_ptr<string> group{};
  shared_ptr<string> md5{};
  shared_ptr<string> tags{};
  shared_ptr<string> type{};

  GetNacosConfigResponseBodyConfiguration() {}

  explicit GetNacosConfigResponseBodyConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (betaIps) {
      res["BetaIps"] = boost::any(*betaIps);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (encryptedDataKey) {
      res["EncryptedDataKey"] = boost::any(*encryptedDataKey);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BetaIps") != m.end() && !m["BetaIps"].empty()) {
      betaIps = make_shared<string>(boost::any_cast<string>(m["BetaIps"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("EncryptedDataKey") != m.end() && !m["EncryptedDataKey"].empty()) {
      encryptedDataKey = make_shared<string>(boost::any_cast<string>(m["EncryptedDataKey"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetNacosConfigResponseBodyConfiguration() = default;
};
class GetNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetNacosConfigResponseBodyConfiguration> configuration{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetNacosConfigResponseBody() {}

  explicit GetNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["Configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Configuration"].type()) {
        GetNacosConfigResponseBodyConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Configuration"]));
        configuration = make_shared<GetNacosConfigResponseBodyConfiguration>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNacosConfigResponseBody() = default;
};
class GetNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNacosConfigResponseBody> body{};

  GetNacosConfigResponse() {}

  explicit GetNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetNacosConfigResponse() = default;
};
class GetNacosHistoryConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> nid{};

  GetNacosHistoryConfigRequest() {}

  explicit GetNacosHistoryConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (nid) {
      res["Nid"] = boost::any(*nid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Nid") != m.end() && !m["Nid"].empty()) {
      nid = make_shared<string>(boost::any_cast<string>(m["Nid"]));
    }
  }


  virtual ~GetNacosHistoryConfigRequest() = default;
};
class GetNacosHistoryConfigResponseBodyConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> content{};
  shared_ptr<string> dataId{};
  shared_ptr<string> encryptedDataKey{};
  shared_ptr<string> group{};
  shared_ptr<string> md5{};
  shared_ptr<string> opType{};

  GetNacosHistoryConfigResponseBodyConfiguration() {}

  explicit GetNacosHistoryConfigResponseBodyConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (encryptedDataKey) {
      res["EncryptedDataKey"] = boost::any(*encryptedDataKey);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (opType) {
      res["OpType"] = boost::any(*opType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("EncryptedDataKey") != m.end() && !m["EncryptedDataKey"].empty()) {
      encryptedDataKey = make_shared<string>(boost::any_cast<string>(m["EncryptedDataKey"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("OpType") != m.end() && !m["OpType"].empty()) {
      opType = make_shared<string>(boost::any_cast<string>(m["OpType"]));
    }
  }


  virtual ~GetNacosHistoryConfigResponseBodyConfiguration() = default;
};
class GetNacosHistoryConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetNacosHistoryConfigResponseBodyConfiguration> configuration{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetNacosHistoryConfigResponseBody() {}

  explicit GetNacosHistoryConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["Configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Configuration"].type()) {
        GetNacosHistoryConfigResponseBodyConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Configuration"]));
        configuration = make_shared<GetNacosHistoryConfigResponseBodyConfiguration>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNacosHistoryConfigResponseBody() = default;
};
class GetNacosHistoryConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNacosHistoryConfigResponseBody> body{};

  GetNacosHistoryConfigResponse() {}

  explicit GetNacosHistoryConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNacosHistoryConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNacosHistoryConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetNacosHistoryConfigResponse() = default;
};
class GetOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> period{};
  shared_ptr<string> region{};

  GetOverviewRequest() {}

  explicit GetOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetOverviewRequest() = default;
};
class GetOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetOverviewResponseBody() {}

  explicit GetOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetOverviewResponseBody() = default;
};
class GetOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOverviewResponseBody> body{};

  GetOverviewResponse() {}

  explicit GetOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~GetOverviewResponse() = default;
};
class ImportNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> policy{};

  ImportNacosConfigRequest() {}

  explicit ImportNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
  }


  virtual ~ImportNacosConfigRequest() = default;
};
class ImportNacosConfigResponseBodyDataFailData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  ImportNacosConfigResponseBodyDataFailData() {}

  explicit ImportNacosConfigResponseBodyDataFailData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~ImportNacosConfigResponseBodyDataFailData() = default;
};
class ImportNacosConfigResponseBodyDataSkipData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  ImportNacosConfigResponseBodyDataSkipData() {}

  explicit ImportNacosConfigResponseBodyDataSkipData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~ImportNacosConfigResponseBodyDataSkipData() = default;
};
class ImportNacosConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ImportNacosConfigResponseBodyDataFailData>> failData{};
  shared_ptr<long> skipCount{};
  shared_ptr<vector<ImportNacosConfigResponseBodyDataSkipData>> skipData{};
  shared_ptr<long> succCount{};

  ImportNacosConfigResponseBodyData() {}

  explicit ImportNacosConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failData) {
      vector<boost::any> temp1;
      for(auto item1:*failData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailData"] = boost::any(temp1);
    }
    if (skipCount) {
      res["SkipCount"] = boost::any(*skipCount);
    }
    if (skipData) {
      vector<boost::any> temp1;
      for(auto item1:*skipData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkipData"] = boost::any(temp1);
    }
    if (succCount) {
      res["SuccCount"] = boost::any(*succCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailData") != m.end() && !m["FailData"].empty()) {
      if (typeid(vector<boost::any>) == m["FailData"].type()) {
        vector<ImportNacosConfigResponseBodyDataFailData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportNacosConfigResponseBodyDataFailData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failData = make_shared<vector<ImportNacosConfigResponseBodyDataFailData>>(expect1);
      }
    }
    if (m.find("SkipCount") != m.end() && !m["SkipCount"].empty()) {
      skipCount = make_shared<long>(boost::any_cast<long>(m["SkipCount"]));
    }
    if (m.find("SkipData") != m.end() && !m["SkipData"].empty()) {
      if (typeid(vector<boost::any>) == m["SkipData"].type()) {
        vector<ImportNacosConfigResponseBodyDataSkipData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkipData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportNacosConfigResponseBodyDataSkipData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skipData = make_shared<vector<ImportNacosConfigResponseBodyDataSkipData>>(expect1);
      }
    }
    if (m.find("SuccCount") != m.end() && !m["SuccCount"].empty()) {
      succCount = make_shared<long>(boost::any_cast<long>(m["SuccCount"]));
    }
  }


  virtual ~ImportNacosConfigResponseBodyData() = default;
};
class ImportNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ImportNacosConfigResponseBodyData> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ImportNacosConfigResponseBody() {}

  explicit ImportNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ImportNacosConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImportNacosConfigResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ImportNacosConfigResponseBody() = default;
};
class ImportNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportNacosConfigResponseBody> body{};

  ImportNacosConfigResponse() {}

  explicit ImportNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ImportNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ImportNacosConfigResponse() = default;
};
class ImportServicesRequestServiceList : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<string>> ips{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> servicePort{};
  shared_ptr<string> serviceProtocol{};

  ImportServicesRequestServiceList() {}

  explicit ImportServicesRequestServiceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (servicePort) {
      res["ServicePort"] = boost::any(*servicePort);
    }
    if (serviceProtocol) {
      res["ServiceProtocol"] = boost::any(*serviceProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServicePort") != m.end() && !m["ServicePort"].empty()) {
      servicePort = make_shared<long>(boost::any_cast<long>(m["ServicePort"]));
    }
    if (m.find("ServiceProtocol") != m.end() && !m["ServiceProtocol"].empty()) {
      serviceProtocol = make_shared<string>(boost::any_cast<string>(m["ServiceProtocol"]));
    }
  }


  virtual ~ImportServicesRequestServiceList() = default;
};
class ImportServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<vector<ImportServicesRequestServiceList>> serviceList{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};

  ImportServicesRequest() {}

  explicit ImportServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (serviceList) {
      vector<boost::any> temp1;
      for(auto item1:*serviceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceList"] = boost::any(temp1);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("ServiceList") != m.end() && !m["ServiceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceList"].type()) {
        vector<ImportServicesRequestServiceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportServicesRequestServiceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceList = make_shared<vector<ImportServicesRequestServiceList>>(expect1);
      }
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~ImportServicesRequest() = default;
};
class ImportServicesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> serviceListShrink{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};

  ImportServicesShrinkRequest() {}

  explicit ImportServicesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (serviceListShrink) {
      res["ServiceList"] = boost::any(*serviceListShrink);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("ServiceList") != m.end() && !m["ServiceList"].empty()) {
      serviceListShrink = make_shared<string>(boost::any_cast<string>(m["ServiceList"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~ImportServicesShrinkRequest() = default;
};
class ImportServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ImportServicesResponseBody() {}

  explicit ImportServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ImportServicesResponseBody() = default;
};
class ImportServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportServicesResponseBody> body{};

  ImportServicesResponse() {}

  explicit ImportServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ImportServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ImportServicesResponse() = default;
};
class ListAlarmContactGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestPars{};

  ListAlarmContactGroupsRequest() {}

  explicit ListAlarmContactGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListAlarmContactGroupsRequest() = default;
};
class ListAlarmContactGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> contactGroupId{};
  shared_ptr<string> contactGroupName{};

  ListAlarmContactGroupsResponseBodyData() {}

  explicit ListAlarmContactGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupId) {
      res["ContactGroupId"] = boost::any(*contactGroupId);
    }
    if (contactGroupName) {
      res["ContactGroupName"] = boost::any(*contactGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupId") != m.end() && !m["ContactGroupId"].empty()) {
      contactGroupId = make_shared<string>(boost::any_cast<string>(m["ContactGroupId"]));
    }
    if (m.find("ContactGroupName") != m.end() && !m["ContactGroupName"].empty()) {
      contactGroupName = make_shared<string>(boost::any_cast<string>(m["ContactGroupName"]));
    }
  }


  virtual ~ListAlarmContactGroupsResponseBodyData() = default;
};
class ListAlarmContactGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlarmContactGroupsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListAlarmContactGroupsResponseBody() {}

  explicit ListAlarmContactGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmContactGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmContactGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmContactGroupsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlarmContactGroupsResponseBody() = default;
};
class ListAlarmContactGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmContactGroupsResponseBody> body{};

  ListAlarmContactGroupsResponse() {}

  explicit ListAlarmContactGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmContactGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmContactGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmContactGroupsResponse() = default;
};
class ListAlarmHistoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> alarmMseType{};
  shared_ptr<string> alarmName{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestPars{};
  shared_ptr<long> startTime{};

  ListAlarmHistoriesRequest() {}

  explicit ListAlarmHistoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (alarmMseType) {
      res["AlarmMseType"] = boost::any(*alarmMseType);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AlarmMseType") != m.end() && !m["AlarmMseType"].empty()) {
      alarmMseType = make_shared<string>(boost::any_cast<string>(m["AlarmMseType"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListAlarmHistoriesRequest() = default;
};
class ListAlarmHistoriesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmContent{};
  shared_ptr<string> alarmDingDing{};
  shared_ptr<string> alarmEmail{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> alarmPhone{};
  shared_ptr<string> alarmTime{};

  ListAlarmHistoriesResponseBodyData() {}

  explicit ListAlarmHistoriesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmContent) {
      res["AlarmContent"] = boost::any(*alarmContent);
    }
    if (alarmDingDing) {
      res["AlarmDingDing"] = boost::any(*alarmDingDing);
    }
    if (alarmEmail) {
      res["AlarmEmail"] = boost::any(*alarmEmail);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (alarmPhone) {
      res["AlarmPhone"] = boost::any(*alarmPhone);
    }
    if (alarmTime) {
      res["AlarmTime"] = boost::any(*alarmTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmContent") != m.end() && !m["AlarmContent"].empty()) {
      alarmContent = make_shared<string>(boost::any_cast<string>(m["AlarmContent"]));
    }
    if (m.find("AlarmDingDing") != m.end() && !m["AlarmDingDing"].empty()) {
      alarmDingDing = make_shared<string>(boost::any_cast<string>(m["AlarmDingDing"]));
    }
    if (m.find("AlarmEmail") != m.end() && !m["AlarmEmail"].empty()) {
      alarmEmail = make_shared<string>(boost::any_cast<string>(m["AlarmEmail"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("AlarmPhone") != m.end() && !m["AlarmPhone"].empty()) {
      alarmPhone = make_shared<string>(boost::any_cast<string>(m["AlarmPhone"]));
    }
    if (m.find("AlarmTime") != m.end() && !m["AlarmTime"].empty()) {
      alarmTime = make_shared<string>(boost::any_cast<string>(m["AlarmTime"]));
    }
  }


  virtual ~ListAlarmHistoriesResponseBodyData() = default;
};
class ListAlarmHistoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlarmHistoriesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListAlarmHistoriesResponseBody() {}

  explicit ListAlarmHistoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmHistoriesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmHistoriesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmHistoriesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlarmHistoriesResponseBody() = default;
};
class ListAlarmHistoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmHistoriesResponseBody> body{};

  ListAlarmHistoriesResponse() {}

  explicit ListAlarmHistoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmHistoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmHistoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmHistoriesResponse() = default;
};
class ListAlarmItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> requestPars{};

  ListAlarmItemsRequest() {}

  explicit ListAlarmItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListAlarmItemsRequest() = default;
};
class ListAlarmItemsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmCode{};
  shared_ptr<string> alarmDesc{};
  shared_ptr<string> clusterType{};

  ListAlarmItemsResponseBodyData() {}

  explicit ListAlarmItemsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmCode) {
      res["AlarmCode"] = boost::any(*alarmCode);
    }
    if (alarmDesc) {
      res["AlarmDesc"] = boost::any(*alarmDesc);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmCode") != m.end() && !m["AlarmCode"].empty()) {
      alarmCode = make_shared<string>(boost::any_cast<string>(m["AlarmCode"]));
    }
    if (m.find("AlarmDesc") != m.end() && !m["AlarmDesc"].empty()) {
      alarmDesc = make_shared<string>(boost::any_cast<string>(m["AlarmDesc"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
  }


  virtual ~ListAlarmItemsResponseBodyData() = default;
};
class ListAlarmItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlarmItemsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListAlarmItemsResponseBody() {}

  explicit ListAlarmItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmItemsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmItemsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmItemsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlarmItemsResponseBody() = default;
};
class ListAlarmItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmItemsResponseBody> body{};

  ListAlarmItemsResponse() {}

  explicit ListAlarmItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmItemsResponse() = default;
};
class ListAlarmRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> alarmMseType{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestPars{};

  ListAlarmRulesRequest() {}

  explicit ListAlarmRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (alarmMseType) {
      res["AlarmMseType"] = boost::any(*alarmMseType);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AlarmMseType") != m.end() && !m["AlarmMseType"].empty()) {
      alarmMseType = make_shared<string>(boost::any_cast<string>(m["AlarmMseType"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListAlarmRulesRequest() = default;
};
class ListAlarmRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmName{};
  shared_ptr<string> alarmRuleDetail{};
  shared_ptr<string> alarmRuleId{};
  shared_ptr<string> alarmStatus{};
  shared_ptr<string> createTime{};

  ListAlarmRulesResponseBodyData() {}

  explicit ListAlarmRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (alarmRuleDetail) {
      res["AlarmRuleDetail"] = boost::any(*alarmRuleDetail);
    }
    if (alarmRuleId) {
      res["AlarmRuleId"] = boost::any(*alarmRuleId);
    }
    if (alarmStatus) {
      res["AlarmStatus"] = boost::any(*alarmStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("AlarmRuleDetail") != m.end() && !m["AlarmRuleDetail"].empty()) {
      alarmRuleDetail = make_shared<string>(boost::any_cast<string>(m["AlarmRuleDetail"]));
    }
    if (m.find("AlarmRuleId") != m.end() && !m["AlarmRuleId"].empty()) {
      alarmRuleId = make_shared<string>(boost::any_cast<string>(m["AlarmRuleId"]));
    }
    if (m.find("AlarmStatus") != m.end() && !m["AlarmStatus"].empty()) {
      alarmStatus = make_shared<string>(boost::any_cast<string>(m["AlarmStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~ListAlarmRulesResponseBodyData() = default;
};
class ListAlarmRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlarmRulesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListAlarmRulesResponseBody() {}

  explicit ListAlarmRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmRulesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmRulesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmRulesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAlarmRulesResponseBody() = default;
};
class ListAlarmRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmRulesResponseBody> body{};

  ListAlarmRulesResponse() {}

  explicit ListAlarmRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmRulesResponse() = default;
};
class ListAnsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> serviceName{};

  ListAnsInstancesRequest() {}

  explicit ListAnsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListAnsInstancesRequest() = default;
};
class ListAnsInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> app{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> datumKey{};
  shared_ptr<string> defaultKey{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> ephemeral{};
  shared_ptr<long> failCount{};
  shared_ptr<bool> healthy{};
  shared_ptr<long> instanceHeartBeatInterval{};
  shared_ptr<long> instanceHeartBeatTimeOut{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<long> ipDeleteTimeout{};
  shared_ptr<long> lastBeat{};
  shared_ptr<bool> marked{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<long> okCount{};
  shared_ptr<long> port{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> weight{};

  ListAnsInstancesResponseBodyData() {}

  explicit ListAnsInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (datumKey) {
      res["DatumKey"] = boost::any(*datumKey);
    }
    if (defaultKey) {
      res["DefaultKey"] = boost::any(*defaultKey);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (ephemeral) {
      res["Ephemeral"] = boost::any(*ephemeral);
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (healthy) {
      res["Healthy"] = boost::any(*healthy);
    }
    if (instanceHeartBeatInterval) {
      res["InstanceHeartBeatInterval"] = boost::any(*instanceHeartBeatInterval);
    }
    if (instanceHeartBeatTimeOut) {
      res["InstanceHeartBeatTimeOut"] = boost::any(*instanceHeartBeatTimeOut);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ipDeleteTimeout) {
      res["IpDeleteTimeout"] = boost::any(*ipDeleteTimeout);
    }
    if (lastBeat) {
      res["LastBeat"] = boost::any(*lastBeat);
    }
    if (marked) {
      res["Marked"] = boost::any(*marked);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (okCount) {
      res["OkCount"] = boost::any(*okCount);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("DatumKey") != m.end() && !m["DatumKey"].empty()) {
      datumKey = make_shared<string>(boost::any_cast<string>(m["DatumKey"]));
    }
    if (m.find("DefaultKey") != m.end() && !m["DefaultKey"].empty()) {
      defaultKey = make_shared<string>(boost::any_cast<string>(m["DefaultKey"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Ephemeral") != m.end() && !m["Ephemeral"].empty()) {
      ephemeral = make_shared<bool>(boost::any_cast<bool>(m["Ephemeral"]));
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("Healthy") != m.end() && !m["Healthy"].empty()) {
      healthy = make_shared<bool>(boost::any_cast<bool>(m["Healthy"]));
    }
    if (m.find("InstanceHeartBeatInterval") != m.end() && !m["InstanceHeartBeatInterval"].empty()) {
      instanceHeartBeatInterval = make_shared<long>(boost::any_cast<long>(m["InstanceHeartBeatInterval"]));
    }
    if (m.find("InstanceHeartBeatTimeOut") != m.end() && !m["InstanceHeartBeatTimeOut"].empty()) {
      instanceHeartBeatTimeOut = make_shared<long>(boost::any_cast<long>(m["InstanceHeartBeatTimeOut"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IpDeleteTimeout") != m.end() && !m["IpDeleteTimeout"].empty()) {
      ipDeleteTimeout = make_shared<long>(boost::any_cast<long>(m["IpDeleteTimeout"]));
    }
    if (m.find("LastBeat") != m.end() && !m["LastBeat"].empty()) {
      lastBeat = make_shared<long>(boost::any_cast<long>(m["LastBeat"]));
    }
    if (m.find("Marked") != m.end() && !m["Marked"].empty()) {
      marked = make_shared<bool>(boost::any_cast<bool>(m["Marked"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OkCount") != m.end() && !m["OkCount"].empty()) {
      okCount = make_shared<long>(boost::any_cast<long>(m["OkCount"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~ListAnsInstancesResponseBodyData() = default;
};
class ListAnsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAnsInstancesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListAnsInstancesResponseBody() {}

  explicit ListAnsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAnsInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnsInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAnsInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAnsInstancesResponseBody() = default;
};
class ListAnsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAnsInstancesResponseBody> body{};

  ListAnsInstancesResponse() {}

  explicit ListAnsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnsInstancesResponse() = default;
};
class ListAnsServiceClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> serviceName{};

  ListAnsServiceClustersRequest() {}

  explicit ListAnsServiceClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListAnsServiceClustersRequest() = default;
};
class ListAnsServiceClustersResponseBodyDataClusters : public Darabonba::Model {
public:
  shared_ptr<long> defaultCheckPort{};
  shared_ptr<long> defaultPort{};
  shared_ptr<string> healthCheckerType{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<string> name{};
  shared_ptr<string> serviceName{};
  shared_ptr<bool> useIPPort4Check{};

  ListAnsServiceClustersResponseBodyDataClusters() {}

  explicit ListAnsServiceClustersResponseBodyDataClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultCheckPort) {
      res["DefaultCheckPort"] = boost::any(*defaultCheckPort);
    }
    if (defaultPort) {
      res["DefaultPort"] = boost::any(*defaultPort);
    }
    if (healthCheckerType) {
      res["HealthCheckerType"] = boost::any(*healthCheckerType);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (useIPPort4Check) {
      res["UseIPPort4Check"] = boost::any(*useIPPort4Check);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultCheckPort") != m.end() && !m["DefaultCheckPort"].empty()) {
      defaultCheckPort = make_shared<long>(boost::any_cast<long>(m["DefaultCheckPort"]));
    }
    if (m.find("DefaultPort") != m.end() && !m["DefaultPort"].empty()) {
      defaultPort = make_shared<long>(boost::any_cast<long>(m["DefaultPort"]));
    }
    if (m.find("HealthCheckerType") != m.end() && !m["HealthCheckerType"].empty()) {
      healthCheckerType = make_shared<string>(boost::any_cast<string>(m["HealthCheckerType"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("UseIPPort4Check") != m.end() && !m["UseIPPort4Check"].empty()) {
      useIPPort4Check = make_shared<bool>(boost::any_cast<bool>(m["UseIPPort4Check"]));
    }
  }


  virtual ~ListAnsServiceClustersResponseBodyDataClusters() = default;
};
class ListAnsServiceClustersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAnsServiceClustersResponseBodyDataClusters>> clusters{};
  shared_ptr<bool> ephemeral{};
  shared_ptr<string> groupName{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<string> name{};
  shared_ptr<double> protectThreshold{};
  shared_ptr<string> selectorType{};

  ListAnsServiceClustersResponseBodyData() {}

  explicit ListAnsServiceClustersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
    }
    if (ephemeral) {
      res["Ephemeral"] = boost::any(*ephemeral);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protectThreshold) {
      res["ProtectThreshold"] = boost::any(*protectThreshold);
    }
    if (selectorType) {
      res["SelectorType"] = boost::any(*selectorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<ListAnsServiceClustersResponseBodyDataClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnsServiceClustersResponseBodyDataClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<ListAnsServiceClustersResponseBodyDataClusters>>(expect1);
      }
    }
    if (m.find("Ephemeral") != m.end() && !m["Ephemeral"].empty()) {
      ephemeral = make_shared<bool>(boost::any_cast<bool>(m["Ephemeral"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProtectThreshold") != m.end() && !m["ProtectThreshold"].empty()) {
      protectThreshold = make_shared<double>(boost::any_cast<double>(m["ProtectThreshold"]));
    }
    if (m.find("SelectorType") != m.end() && !m["SelectorType"].empty()) {
      selectorType = make_shared<string>(boost::any_cast<string>(m["SelectorType"]));
    }
  }


  virtual ~ListAnsServiceClustersResponseBodyData() = default;
};
class ListAnsServiceClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAnsServiceClustersResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAnsServiceClustersResponseBody() {}

  explicit ListAnsServiceClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAnsServiceClustersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAnsServiceClustersResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAnsServiceClustersResponseBody() = default;
};
class ListAnsServiceClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAnsServiceClustersResponseBody> body{};

  ListAnsServiceClustersResponse() {}

  explicit ListAnsServiceClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnsServiceClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnsServiceClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnsServiceClustersResponse() = default;
};
class ListAnsServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> hasIpCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> serviceName{};

  ListAnsServicesRequest() {}

  explicit ListAnsServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (hasIpCount) {
      res["HasIpCount"] = boost::any(*hasIpCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HasIpCount") != m.end() && !m["HasIpCount"].empty()) {
      hasIpCount = make_shared<string>(boost::any_cast<string>(m["HasIpCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListAnsServicesRequest() = default;
};
class ListAnsServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> clusterCount{};
  shared_ptr<string> groupName{};
  shared_ptr<long> healthyInstanceCount{};
  shared_ptr<long> ipCount{};
  shared_ptr<string> name{};

  ListAnsServicesResponseBodyData() {}

  explicit ListAnsServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterCount) {
      res["ClusterCount"] = boost::any(*clusterCount);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (healthyInstanceCount) {
      res["HealthyInstanceCount"] = boost::any(*healthyInstanceCount);
    }
    if (ipCount) {
      res["IpCount"] = boost::any(*ipCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterCount") != m.end() && !m["ClusterCount"].empty()) {
      clusterCount = make_shared<long>(boost::any_cast<long>(m["ClusterCount"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HealthyInstanceCount") != m.end() && !m["HealthyInstanceCount"].empty()) {
      healthyInstanceCount = make_shared<long>(boost::any_cast<long>(m["HealthyInstanceCount"]));
    }
    if (m.find("IpCount") != m.end() && !m["IpCount"].empty()) {
      ipCount = make_shared<long>(boost::any_cast<long>(m["IpCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListAnsServicesResponseBodyData() = default;
};
class ListAnsServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAnsServicesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListAnsServicesResponseBody() {}

  explicit ListAnsServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAnsServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnsServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAnsServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAnsServicesResponseBody() = default;
};
class ListAnsServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAnsServicesResponseBody> body{};

  ListAnsServicesResponse() {}

  explicit ListAnsServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnsServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnsServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnsServicesResponse() = default;
};
class ListClusterConnectionTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  ListClusterConnectionTypesRequest() {}

  explicit ListClusterConnectionTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~ListClusterConnectionTypesRequest() = default;
};
class ListClusterConnectionTypesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> showName{};

  ListClusterConnectionTypesResponseBodyData() {}

  explicit ListClusterConnectionTypesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
  }


  virtual ~ListClusterConnectionTypesResponseBodyData() = default;
};
class ListClusterConnectionTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListClusterConnectionTypesResponseBodyData>> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListClusterConnectionTypesResponseBody() {}

  explicit ListClusterConnectionTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClusterConnectionTypesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterConnectionTypesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterConnectionTypesResponseBodyData>>(expect1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListClusterConnectionTypesResponseBody() = default;
};
class ListClusterConnectionTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClusterConnectionTypesResponseBody> body{};

  ListClusterConnectionTypesResponse() {}

  explicit ListClusterConnectionTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterConnectionTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterConnectionTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterConnectionTypesResponse() = default;
};
class ListClusterTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> connectType{};
  shared_ptr<string> regionId{};

  ListClusterTypesRequest() {}

  explicit ListClusterTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (connectType) {
      res["ConnectType"] = boost::any(*connectType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ConnectType") != m.end() && !m["ConnectType"].empty()) {
      connectType = make_shared<string>(boost::any_cast<string>(m["ConnectType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListClusterTypesRequest() = default;
};
class ListClusterTypesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> showName{};

  ListClusterTypesResponseBodyData() {}

  explicit ListClusterTypesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
  }


  virtual ~ListClusterTypesResponseBodyData() = default;
};
class ListClusterTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListClusterTypesResponseBodyData>> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListClusterTypesResponseBody() {}

  explicit ListClusterTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClusterTypesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterTypesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterTypesResponseBodyData>>(expect1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListClusterTypesResponseBody() = default;
};
class ListClusterTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClusterTypesResponseBody> body{};

  ListClusterTypesResponse() {}

  explicit ListClusterTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterTypesResponse() = default;
};
class ListClusterVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterType{};

  ListClusterVersionsRequest() {}

  explicit ListClusterVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
  }


  virtual ~ListClusterVersionsRequest() = default;
};
class ListClusterVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> code{};
  shared_ptr<string> showName{};

  ListClusterVersionsResponseBodyData() {}

  explicit ListClusterVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
  }


  virtual ~ListClusterVersionsResponseBodyData() = default;
};
class ListClusterVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListClusterVersionsResponseBodyData>> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListClusterVersionsResponseBody() {}

  explicit ListClusterVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClusterVersionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterVersionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterVersionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListClusterVersionsResponseBody() = default;
};
class ListClusterVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClusterVersionsResponseBody> body{};

  ListClusterVersionsResponse() {}

  explicit ListClusterVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterVersionsResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestPars{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<bool> canUpdate{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endDate{};
  shared_ptr<string> initStatus{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetAddress{};
  shared_ptr<string> internetDomain{};
  shared_ptr<string> intranetAddress{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<string> versionCode{};

  ListClustersResponseBodyData() {}

  explicit ListClustersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (canUpdate) {
      res["CanUpdate"] = boost::any(*canUpdate);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (initStatus) {
      res["InitStatus"] = boost::any(*initStatus);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetAddress) {
      res["InternetAddress"] = boost::any(*internetAddress);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (intranetAddress) {
      res["IntranetAddress"] = boost::any(*intranetAddress);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CanUpdate") != m.end() && !m["CanUpdate"].empty()) {
      canUpdate = make_shared<bool>(boost::any_cast<bool>(m["CanUpdate"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("InitStatus") != m.end() && !m["InitStatus"].empty()) {
      initStatus = make_shared<string>(boost::any_cast<string>(m["InitStatus"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetAddress") != m.end() && !m["InternetAddress"].empty()) {
      internetAddress = make_shared<string>(boost::any_cast<string>(m["InternetAddress"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("IntranetAddress") != m.end() && !m["IntranetAddress"].empty()) {
      intranetAddress = make_shared<string>(boost::any_cast<string>(m["IntranetAddress"]));
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
  }


  virtual ~ListClustersResponseBodyData() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClustersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClustersResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListEngineNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> instanceId{};

  ListEngineNamespacesRequest() {}

  explicit ListEngineNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListEngineNamespacesRequest() = default;
};
class ListEngineNamespacesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> configCount{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<long> quota{};
  shared_ptr<string> serviceCount{};
  shared_ptr<long> type{};

  ListEngineNamespacesResponseBodyData() {}

  explicit ListEngineNamespacesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<long>(boost::any_cast<long>(m["ConfigCount"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<string>(boost::any_cast<string>(m["ServiceCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ListEngineNamespacesResponseBodyData() = default;
};
class ListEngineNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEngineNamespacesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListEngineNamespacesResponseBody() {}

  explicit ListEngineNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEngineNamespacesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEngineNamespacesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEngineNamespacesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEngineNamespacesResponseBody() = default;
};
class ListEngineNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEngineNamespacesResponseBody> body{};

  ListEngineNamespacesResponse() {}

  explicit ListEngineNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEngineNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEngineNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEngineNamespacesResponse() = default;
};
class ListEurekaInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> serviceName{};

  ListEurekaInstancesRequest() {}

  explicit ListEurekaInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListEurekaInstancesRequest() = default;
};
class ListEurekaInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> app{};
  shared_ptr<long> durationInSecs{};
  shared_ptr<string> homePageUrl{};
  shared_ptr<string> hostName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipAddr{};
  shared_ptr<long> lastDirtyTimestamp{};
  shared_ptr<long> lastUpdatedTimestamp{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<long> port{};
  shared_ptr<long> renewalIntervalInSecs{};
  shared_ptr<long> securePort{};
  shared_ptr<string> status{};
  shared_ptr<string> vipAddress{};

  ListEurekaInstancesResponseBodyData() {}

  explicit ListEurekaInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (durationInSecs) {
      res["DurationInSecs"] = boost::any(*durationInSecs);
    }
    if (homePageUrl) {
      res["HomePageUrl"] = boost::any(*homePageUrl);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipAddr) {
      res["IpAddr"] = boost::any(*ipAddr);
    }
    if (lastDirtyTimestamp) {
      res["LastDirtyTimestamp"] = boost::any(*lastDirtyTimestamp);
    }
    if (lastUpdatedTimestamp) {
      res["LastUpdatedTimestamp"] = boost::any(*lastUpdatedTimestamp);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (renewalIntervalInSecs) {
      res["RenewalIntervalInSecs"] = boost::any(*renewalIntervalInSecs);
    }
    if (securePort) {
      res["SecurePort"] = boost::any(*securePort);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vipAddress) {
      res["VipAddress"] = boost::any(*vipAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("DurationInSecs") != m.end() && !m["DurationInSecs"].empty()) {
      durationInSecs = make_shared<long>(boost::any_cast<long>(m["DurationInSecs"]));
    }
    if (m.find("HomePageUrl") != m.end() && !m["HomePageUrl"].empty()) {
      homePageUrl = make_shared<string>(boost::any_cast<string>(m["HomePageUrl"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpAddr") != m.end() && !m["IpAddr"].empty()) {
      ipAddr = make_shared<string>(boost::any_cast<string>(m["IpAddr"]));
    }
    if (m.find("LastDirtyTimestamp") != m.end() && !m["LastDirtyTimestamp"].empty()) {
      lastDirtyTimestamp = make_shared<long>(boost::any_cast<long>(m["LastDirtyTimestamp"]));
    }
    if (m.find("LastUpdatedTimestamp") != m.end() && !m["LastUpdatedTimestamp"].empty()) {
      lastUpdatedTimestamp = make_shared<long>(boost::any_cast<long>(m["LastUpdatedTimestamp"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RenewalIntervalInSecs") != m.end() && !m["RenewalIntervalInSecs"].empty()) {
      renewalIntervalInSecs = make_shared<long>(boost::any_cast<long>(m["RenewalIntervalInSecs"]));
    }
    if (m.find("SecurePort") != m.end() && !m["SecurePort"].empty()) {
      securePort = make_shared<long>(boost::any_cast<long>(m["SecurePort"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VipAddress") != m.end() && !m["VipAddress"].empty()) {
      vipAddress = make_shared<string>(boost::any_cast<string>(m["VipAddress"]));
    }
  }


  virtual ~ListEurekaInstancesResponseBodyData() = default;
};
class ListEurekaInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEurekaInstancesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListEurekaInstancesResponseBody() {}

  explicit ListEurekaInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEurekaInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEurekaInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEurekaInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEurekaInstancesResponseBody() = default;
};
class ListEurekaInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEurekaInstancesResponseBody> body{};

  ListEurekaInstancesResponse() {}

  explicit ListEurekaInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEurekaInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEurekaInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEurekaInstancesResponse() = default;
};
class ListEurekaServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestPars{};

  ListEurekaServicesRequest() {}

  explicit ListEurekaServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListEurekaServicesRequest() = default;
};
class ListEurekaServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instancesId{};
  shared_ptr<string> name{};
  shared_ptr<string> upStatus{};

  ListEurekaServicesResponseBodyData() {}

  explicit ListEurekaServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instancesId) {
      res["InstancesId"] = boost::any(*instancesId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (upStatus) {
      res["UpStatus"] = boost::any(*upStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstancesId") != m.end() && !m["InstancesId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstancesId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstancesId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instancesId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpStatus") != m.end() && !m["UpStatus"].empty()) {
      upStatus = make_shared<string>(boost::any_cast<string>(m["UpStatus"]));
    }
  }


  virtual ~ListEurekaServicesResponseBodyData() = default;
};
class ListEurekaServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListEurekaServicesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListEurekaServicesResponseBody() {}

  explicit ListEurekaServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEurekaServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEurekaServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEurekaServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEurekaServicesResponseBody() = default;
};
class ListEurekaServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEurekaServicesResponseBody> body{};

  ListEurekaServicesResponse() {}

  explicit ListEurekaServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEurekaServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEurekaServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEurekaServicesResponse() = default;
};
class ListGatewayRequestFilterParams : public Darabonba::Model {
public:
  shared_ptr<string> gatewayType{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> vpc{};

  ListGatewayRequestFilterParams() {}

  explicit ListGatewayRequestFilterParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayType) {
      res["GatewayType"] = boost::any(*gatewayType);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (vpc) {
      res["Vpc"] = boost::any(*vpc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayType") != m.end() && !m["GatewayType"].empty()) {
      gatewayType = make_shared<string>(boost::any_cast<string>(m["GatewayType"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      vpc = make_shared<string>(boost::any_cast<string>(m["Vpc"]));
    }
  }


  virtual ~ListGatewayRequestFilterParams() = default;
};
class ListGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> descSort{};
  shared_ptr<ListGatewayRequestFilterParams> filterParams{};
  shared_ptr<string> orderItem{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGatewayRequest() {}

  explicit ListGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (descSort) {
      res["DescSort"] = boost::any(*descSort);
    }
    if (filterParams) {
      res["FilterParams"] = filterParams ? boost::any(filterParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderItem) {
      res["OrderItem"] = boost::any(*orderItem);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DescSort") != m.end() && !m["DescSort"].empty()) {
      descSort = make_shared<bool>(boost::any_cast<bool>(m["DescSort"]));
    }
    if (m.find("FilterParams") != m.end() && !m["FilterParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterParams"].type()) {
        ListGatewayRequestFilterParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterParams"]));
        filterParams = make_shared<ListGatewayRequestFilterParams>(model1);
      }
    }
    if (m.find("OrderItem") != m.end() && !m["OrderItem"].empty()) {
      orderItem = make_shared<string>(boost::any_cast<string>(m["OrderItem"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGatewayRequest() = default;
};
class ListGatewayShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> descSort{};
  shared_ptr<string> filterParamsShrink{};
  shared_ptr<string> orderItem{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGatewayShrinkRequest() {}

  explicit ListGatewayShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (descSort) {
      res["DescSort"] = boost::any(*descSort);
    }
    if (filterParamsShrink) {
      res["FilterParams"] = boost::any(*filterParamsShrink);
    }
    if (orderItem) {
      res["OrderItem"] = boost::any(*orderItem);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DescSort") != m.end() && !m["DescSort"].empty()) {
      descSort = make_shared<bool>(boost::any_cast<bool>(m["DescSort"]));
    }
    if (m.find("FilterParams") != m.end() && !m["FilterParams"].empty()) {
      filterParamsShrink = make_shared<string>(boost::any_cast<string>(m["FilterParams"]));
    }
    if (m.find("OrderItem") != m.end() && !m["OrderItem"].empty()) {
      orderItem = make_shared<string>(boost::any_cast<string>(m["OrderItem"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGatewayShrinkRequest() = default;
};
class ListGatewayResponseBodyDataResultInternetSlb : public Darabonba::Model {
public:
  shared_ptr<string> gatewaySlbMode{};
  shared_ptr<string> gatewaySlbStatus{};
  shared_ptr<string> internetNetworkFlow{};
  shared_ptr<string> slbId{};
  shared_ptr<string> slbIp{};
  shared_ptr<string> slbPort{};
  shared_ptr<string> slbSpec{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> type{};

  ListGatewayResponseBodyDataResultInternetSlb() {}

  explicit ListGatewayResponseBodyDataResultInternetSlb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewaySlbMode) {
      res["GatewaySlbMode"] = boost::any(*gatewaySlbMode);
    }
    if (gatewaySlbStatus) {
      res["GatewaySlbStatus"] = boost::any(*gatewaySlbStatus);
    }
    if (internetNetworkFlow) {
      res["InternetNetworkFlow"] = boost::any(*internetNetworkFlow);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (slbIp) {
      res["SlbIp"] = boost::any(*slbIp);
    }
    if (slbPort) {
      res["SlbPort"] = boost::any(*slbPort);
    }
    if (slbSpec) {
      res["SlbSpec"] = boost::any(*slbSpec);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewaySlbMode") != m.end() && !m["GatewaySlbMode"].empty()) {
      gatewaySlbMode = make_shared<string>(boost::any_cast<string>(m["GatewaySlbMode"]));
    }
    if (m.find("GatewaySlbStatus") != m.end() && !m["GatewaySlbStatus"].empty()) {
      gatewaySlbStatus = make_shared<string>(boost::any_cast<string>(m["GatewaySlbStatus"]));
    }
    if (m.find("InternetNetworkFlow") != m.end() && !m["InternetNetworkFlow"].empty()) {
      internetNetworkFlow = make_shared<string>(boost::any_cast<string>(m["InternetNetworkFlow"]));
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("SlbIp") != m.end() && !m["SlbIp"].empty()) {
      slbIp = make_shared<string>(boost::any_cast<string>(m["SlbIp"]));
    }
    if (m.find("SlbPort") != m.end() && !m["SlbPort"].empty()) {
      slbPort = make_shared<string>(boost::any_cast<string>(m["SlbPort"]));
    }
    if (m.find("SlbSpec") != m.end() && !m["SlbSpec"].empty()) {
      slbSpec = make_shared<string>(boost::any_cast<string>(m["SlbSpec"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListGatewayResponseBodyDataResultInternetSlb() = default;
};
class ListGatewayResponseBodyDataResultSlb : public Darabonba::Model {
public:
  shared_ptr<string> gatewaySlbMode{};
  shared_ptr<string> gatewaySlbStatus{};
  shared_ptr<string> slbId{};
  shared_ptr<string> slbIp{};
  shared_ptr<string> slbPort{};
  shared_ptr<string> slbSpec{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> type{};

  ListGatewayResponseBodyDataResultSlb() {}

  explicit ListGatewayResponseBodyDataResultSlb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewaySlbMode) {
      res["GatewaySlbMode"] = boost::any(*gatewaySlbMode);
    }
    if (gatewaySlbStatus) {
      res["GatewaySlbStatus"] = boost::any(*gatewaySlbStatus);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (slbIp) {
      res["SlbIp"] = boost::any(*slbIp);
    }
    if (slbPort) {
      res["SlbPort"] = boost::any(*slbPort);
    }
    if (slbSpec) {
      res["SlbSpec"] = boost::any(*slbSpec);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewaySlbMode") != m.end() && !m["GatewaySlbMode"].empty()) {
      gatewaySlbMode = make_shared<string>(boost::any_cast<string>(m["GatewaySlbMode"]));
    }
    if (m.find("GatewaySlbStatus") != m.end() && !m["GatewaySlbStatus"].empty()) {
      gatewaySlbStatus = make_shared<string>(boost::any_cast<string>(m["GatewaySlbStatus"]));
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("SlbIp") != m.end() && !m["SlbIp"].empty()) {
      slbIp = make_shared<string>(boost::any_cast<string>(m["SlbIp"]));
    }
    if (m.find("SlbPort") != m.end() && !m["SlbPort"].empty()) {
      slbPort = make_shared<string>(boost::any_cast<string>(m["SlbPort"]));
    }
    if (m.find("SlbSpec") != m.end() && !m["SlbSpec"].empty()) {
      slbSpec = make_shared<string>(boost::any_cast<string>(m["SlbSpec"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListGatewayResponseBodyDataResultSlb() = default;
};
class ListGatewayResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<bool> ahasOn{};
  shared_ptr<bool> armsOn{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> endDate{};
  shared_ptr<string> gatewayType{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<ListGatewayResponseBodyDataResultInternetSlb>> internetSlb{};
  shared_ptr<string> latestVersion{};
  shared_ptr<bool> mustUpgrade{};
  shared_ptr<string> name{};
  shared_ptr<string> primaryUser{};
  shared_ptr<string> region{};
  shared_ptr<long> replica{};
  shared_ptr<vector<ListGatewayResponseBodyDataResultSlb>> slb{};
  shared_ptr<string> spec{};
  shared_ptr<long> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> tag{};
  shared_ptr<bool> upgrade{};
  shared_ptr<string> vswitch2{};

  ListGatewayResponseBodyDataResult() {}

  explicit ListGatewayResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ahasOn) {
      res["AhasOn"] = boost::any(*ahasOn);
    }
    if (armsOn) {
      res["ArmsOn"] = boost::any(*armsOn);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (currentVersion) {
      res["CurrentVersion"] = boost::any(*currentVersion);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (gatewayType) {
      res["GatewayType"] = boost::any(*gatewayType);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetSlb) {
      vector<boost::any> temp1;
      for(auto item1:*internetSlb){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InternetSlb"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = boost::any(*latestVersion);
    }
    if (mustUpgrade) {
      res["MustUpgrade"] = boost::any(*mustUpgrade);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (primaryUser) {
      res["PrimaryUser"] = boost::any(*primaryUser);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (replica) {
      res["Replica"] = boost::any(*replica);
    }
    if (slb) {
      vector<boost::any> temp1;
      for(auto item1:*slb){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Slb"] = boost::any(temp1);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (upgrade) {
      res["Upgrade"] = boost::any(*upgrade);
    }
    if (vswitch2) {
      res["Vswitch2"] = boost::any(*vswitch2);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AhasOn") != m.end() && !m["AhasOn"].empty()) {
      ahasOn = make_shared<bool>(boost::any_cast<bool>(m["AhasOn"]));
    }
    if (m.find("ArmsOn") != m.end() && !m["ArmsOn"].empty()) {
      armsOn = make_shared<bool>(boost::any_cast<bool>(m["ArmsOn"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CurrentVersion") != m.end() && !m["CurrentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["CurrentVersion"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("GatewayType") != m.end() && !m["GatewayType"].empty()) {
      gatewayType = make_shared<string>(boost::any_cast<string>(m["GatewayType"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetSlb") != m.end() && !m["InternetSlb"].empty()) {
      if (typeid(vector<boost::any>) == m["InternetSlb"].type()) {
        vector<ListGatewayResponseBodyDataResultInternetSlb> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InternetSlb"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayResponseBodyDataResultInternetSlb model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        internetSlb = make_shared<vector<ListGatewayResponseBodyDataResultInternetSlb>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["LatestVersion"]));
    }
    if (m.find("MustUpgrade") != m.end() && !m["MustUpgrade"].empty()) {
      mustUpgrade = make_shared<bool>(boost::any_cast<bool>(m["MustUpgrade"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrimaryUser") != m.end() && !m["PrimaryUser"].empty()) {
      primaryUser = make_shared<string>(boost::any_cast<string>(m["PrimaryUser"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Replica") != m.end() && !m["Replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["Replica"]));
    }
    if (m.find("Slb") != m.end() && !m["Slb"].empty()) {
      if (typeid(vector<boost::any>) == m["Slb"].type()) {
        vector<ListGatewayResponseBodyDataResultSlb> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Slb"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayResponseBodyDataResultSlb model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slb = make_shared<vector<ListGatewayResponseBodyDataResultSlb>>(expect1);
      }
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Upgrade") != m.end() && !m["Upgrade"].empty()) {
      upgrade = make_shared<bool>(boost::any_cast<bool>(m["Upgrade"]));
    }
    if (m.find("Vswitch2") != m.end() && !m["Vswitch2"].empty()) {
      vswitch2 = make_shared<string>(boost::any_cast<string>(m["Vswitch2"]));
    }
  }


  virtual ~ListGatewayResponseBodyDataResult() = default;
};
class ListGatewayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListGatewayResponseBodyDataResult>> result{};
  shared_ptr<long> totalSize{};

  ListGatewayResponseBodyData() {}

  explicit ListGatewayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListGatewayResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListGatewayResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListGatewayResponseBodyData() = default;
};
class ListGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListGatewayResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGatewayResponseBody() {}

  explicit ListGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGatewayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGatewayResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGatewayResponseBody() = default;
};
class ListGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGatewayResponseBody> body{};

  ListGatewayResponse() {}

  explicit ListGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayResponse() = default;
};
class ListGatewayDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};

  ListGatewayDomainRequest() {}

  explicit ListGatewayDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~ListGatewayDomainRequest() = default;
};
class ListGatewayDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certBeforeDate{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> mustHttps{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};

  ListGatewayDomainResponseBodyData() {}

  explicit ListGatewayDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certBeforeDate) {
      res["CertBeforeDate"] = boost::any(*certBeforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mustHttps) {
      res["MustHttps"] = boost::any(*mustHttps);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertBeforeDate") != m.end() && !m["CertBeforeDate"].empty()) {
      certBeforeDate = make_shared<string>(boost::any_cast<string>(m["CertBeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MustHttps") != m.end() && !m["MustHttps"].empty()) {
      mustHttps = make_shared<bool>(boost::any_cast<bool>(m["MustHttps"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~ListGatewayDomainResponseBodyData() = default;
};
class ListGatewayDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListGatewayDomainResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGatewayDomainResponseBody() {}

  explicit ListGatewayDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListGatewayDomainResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayDomainResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListGatewayDomainResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGatewayDomainResponseBody() = default;
};
class ListGatewayDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGatewayDomainResponseBody> body{};

  ListGatewayDomainResponse() {}

  explicit ListGatewayDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayDomainResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayDomainResponse() = default;
};
class ListGatewayServiceRequestFilterParams : public Darabonba::Model {
public:
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> sourceType{};

  ListGatewayServiceRequestFilterParams() {}

  explicit ListGatewayServiceRequestFilterParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~ListGatewayServiceRequestFilterParams() = default;
};
class ListGatewayServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> descSort{};
  shared_ptr<ListGatewayServiceRequestFilterParams> filterParams{};
  shared_ptr<string> orderItem{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGatewayServiceRequest() {}

  explicit ListGatewayServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (descSort) {
      res["DescSort"] = boost::any(*descSort);
    }
    if (filterParams) {
      res["FilterParams"] = filterParams ? boost::any(filterParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderItem) {
      res["OrderItem"] = boost::any(*orderItem);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DescSort") != m.end() && !m["DescSort"].empty()) {
      descSort = make_shared<bool>(boost::any_cast<bool>(m["DescSort"]));
    }
    if (m.find("FilterParams") != m.end() && !m["FilterParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterParams"].type()) {
        ListGatewayServiceRequestFilterParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterParams"]));
        filterParams = make_shared<ListGatewayServiceRequestFilterParams>(model1);
      }
    }
    if (m.find("OrderItem") != m.end() && !m["OrderItem"].empty()) {
      orderItem = make_shared<string>(boost::any_cast<string>(m["OrderItem"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGatewayServiceRequest() = default;
};
class ListGatewayServiceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<bool> descSort{};
  shared_ptr<string> filterParamsShrink{};
  shared_ptr<string> orderItem{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGatewayServiceShrinkRequest() {}

  explicit ListGatewayServiceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (descSort) {
      res["DescSort"] = boost::any(*descSort);
    }
    if (filterParamsShrink) {
      res["FilterParams"] = boost::any(*filterParamsShrink);
    }
    if (orderItem) {
      res["OrderItem"] = boost::any(*orderItem);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DescSort") != m.end() && !m["DescSort"].empty()) {
      descSort = make_shared<bool>(boost::any_cast<bool>(m["DescSort"]));
    }
    if (m.find("FilterParams") != m.end() && !m["FilterParams"].empty()) {
      filterParamsShrink = make_shared<string>(boost::any_cast<string>(m["FilterParams"]));
    }
    if (m.find("OrderItem") != m.end() && !m["OrderItem"].empty()) {
      orderItem = make_shared<string>(boost::any_cast<string>(m["OrderItem"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListGatewayServiceShrinkRequest() = default;
};
class ListGatewayServiceResponseBodyDataResultVersions : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListGatewayServiceResponseBodyDataResultVersions() {}

  explicit ListGatewayServiceResponseBodyDataResultVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListGatewayServiceResponseBodyDataResultVersions() = default;
};
class ListGatewayServiceResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> groupName{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> ips{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceNameInRegistry{};
  shared_ptr<long> servicePort{};
  shared_ptr<string> serviceProtocol{};
  shared_ptr<long> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<ListGatewayServiceResponseBodyDataResultVersions>> versions{};

  ListGatewayServiceResponseBodyDataResult() {}

  explicit ListGatewayServiceResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceNameInRegistry) {
      res["ServiceNameInRegistry"] = boost::any(*serviceNameInRegistry);
    }
    if (servicePort) {
      res["ServicePort"] = boost::any(*servicePort);
    }
    if (serviceProtocol) {
      res["ServiceProtocol"] = boost::any(*serviceProtocol);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceNameInRegistry") != m.end() && !m["ServiceNameInRegistry"].empty()) {
      serviceNameInRegistry = make_shared<string>(boost::any_cast<string>(m["ServiceNameInRegistry"]));
    }
    if (m.find("ServicePort") != m.end() && !m["ServicePort"].empty()) {
      servicePort = make_shared<long>(boost::any_cast<long>(m["ServicePort"]));
    }
    if (m.find("ServiceProtocol") != m.end() && !m["ServiceProtocol"].empty()) {
      serviceProtocol = make_shared<string>(boost::any_cast<string>(m["ServiceProtocol"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<long>(boost::any_cast<long>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<ListGatewayServiceResponseBodyDataResultVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayServiceResponseBodyDataResultVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListGatewayServiceResponseBodyDataResultVersions>>(expect1);
      }
    }
  }


  virtual ~ListGatewayServiceResponseBodyDataResult() = default;
};
class ListGatewayServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListGatewayServiceResponseBodyDataResult>> result{};
  shared_ptr<long> totalSize{};

  ListGatewayServiceResponseBodyData() {}

  explicit ListGatewayServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListGatewayServiceResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayServiceResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListGatewayServiceResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~ListGatewayServiceResponseBodyData() = default;
};
class ListGatewayServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListGatewayServiceResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGatewayServiceResponseBody() {}

  explicit ListGatewayServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListGatewayServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListGatewayServiceResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGatewayServiceResponseBody() = default;
};
class ListGatewayServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGatewayServiceResponseBody> body{};

  ListGatewayServiceResponse() {}

  explicit ListGatewayServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayServiceResponse() = default;
};
class ListGatewaySlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};

  ListGatewaySlbRequest() {}

  explicit ListGatewaySlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~ListGatewaySlbRequest() = default;
};
class ListGatewaySlbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewaySlbMode{};
  shared_ptr<string> gatewaySlbStatus{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> id{};
  shared_ptr<string> slbId{};
  shared_ptr<string> slbIp{};
  shared_ptr<string> slbPort{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> type{};

  ListGatewaySlbResponseBodyData() {}

  explicit ListGatewaySlbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewaySlbMode) {
      res["GatewaySlbMode"] = boost::any(*gatewaySlbMode);
    }
    if (gatewaySlbStatus) {
      res["GatewaySlbStatus"] = boost::any(*gatewaySlbStatus);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (slbIp) {
      res["SlbIp"] = boost::any(*slbIp);
    }
    if (slbPort) {
      res["SlbPort"] = boost::any(*slbPort);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewaySlbMode") != m.end() && !m["GatewaySlbMode"].empty()) {
      gatewaySlbMode = make_shared<string>(boost::any_cast<string>(m["GatewaySlbMode"]));
    }
    if (m.find("GatewaySlbStatus") != m.end() && !m["GatewaySlbStatus"].empty()) {
      gatewaySlbStatus = make_shared<string>(boost::any_cast<string>(m["GatewaySlbStatus"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("SlbIp") != m.end() && !m["SlbIp"].empty()) {
      slbIp = make_shared<string>(boost::any_cast<string>(m["SlbIp"]));
    }
    if (m.find("SlbPort") != m.end() && !m["SlbPort"].empty()) {
      slbPort = make_shared<string>(boost::any_cast<string>(m["SlbPort"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListGatewaySlbResponseBodyData() = default;
};
class ListGatewaySlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListGatewaySlbResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListGatewaySlbResponseBody() {}

  explicit ListGatewaySlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListGatewaySlbResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaySlbResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListGatewaySlbResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListGatewaySlbResponseBody() = default;
};
class ListGatewaySlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGatewaySlbResponseBody> body{};

  ListGatewaySlbResponse() {}

  explicit ListGatewaySlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewaySlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewaySlbResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewaySlbResponse() = default;
};
class ListListenersByConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> requestPars{};

  ListListenersByConfigRequest() {}

  explicit ListListenersByConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListListenersByConfigRequest() = default;
};
class ListListenersByConfigResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> md5{};

  ListListenersByConfigResponseBodyListeners() {}

  explicit ListListenersByConfigResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
  }


  virtual ~ListListenersByConfigResponseBodyListeners() = default;
};
class ListListenersByConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<vector<ListListenersByConfigResponseBodyListeners>> listeners{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListListenersByConfigResponseBody() {}

  explicit ListListenersByConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<ListListenersByConfigResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersByConfigResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<ListListenersByConfigResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListListenersByConfigResponseBody() = default;
};
class ListListenersByConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenersByConfigResponseBody> body{};

  ListListenersByConfigResponse() {}

  explicit ListListenersByConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenersByConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenersByConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenersByConfigResponse() = default;
};
class ListListenersByIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> requestPars{};

  ListListenersByIpRequest() {}

  explicit ListListenersByIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListListenersByIpRequest() = default;
};
class ListListenersByIpResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> md5{};

  ListListenersByIpResponseBodyListeners() {}

  explicit ListListenersByIpResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
  }


  virtual ~ListListenersByIpResponseBodyListeners() = default;
};
class ListListenersByIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<vector<ListListenersByIpResponseBodyListeners>> listeners{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListListenersByIpResponseBody() {}

  explicit ListListenersByIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<ListListenersByIpResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersByIpResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<ListListenersByIpResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListListenersByIpResponseBody() = default;
};
class ListListenersByIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenersByIpResponseBody> body{};

  ListListenersByIpResponse() {}

  explicit ListListenersByIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenersByIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenersByIpResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenersByIpResponse() = default;
};
class ListNacosConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> tags{};

  ListNacosConfigsRequest() {}

  explicit ListNacosConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListNacosConfigsRequest() = default;
};
class ListNacosConfigsResponseBodyConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> id{};

  ListNacosConfigsResponseBodyConfigurations() {}

  explicit ListNacosConfigsResponseBodyConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListNacosConfigsResponseBodyConfigurations() = default;
};
class ListNacosConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListNacosConfigsResponseBodyConfigurations>> configurations{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListNacosConfigsResponseBody() {}

  explicit ListNacosConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (configurations) {
      vector<boost::any> temp1;
      for(auto item1:*configurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configurations"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Configurations") != m.end() && !m["Configurations"].empty()) {
      if (typeid(vector<boost::any>) == m["Configurations"].type()) {
        vector<ListNacosConfigsResponseBodyConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNacosConfigsResponseBodyConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurations = make_shared<vector<ListNacosConfigsResponseBodyConfigurations>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListNacosConfigsResponseBody() = default;
};
class ListNacosConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNacosConfigsResponseBody> body{};

  ListNacosConfigsResponse() {}

  explicit ListNacosConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNacosConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNacosConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNacosConfigsResponse() = default;
};
class ListNacosHistoryConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestPars{};

  ListNacosHistoryConfigsRequest() {}

  explicit ListNacosHistoryConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListNacosHistoryConfigsRequest() = default;
};
class ListNacosHistoryConfigsResponseBodyHistoryItems : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<long> id{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> opType{};

  ListNacosHistoryConfigsResponseBodyHistoryItems() {}

  explicit ListNacosHistoryConfigsResponseBodyHistoryItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (opType) {
      res["OpType"] = boost::any(*opType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("OpType") != m.end() && !m["OpType"].empty()) {
      opType = make_shared<string>(boost::any_cast<string>(m["OpType"]));
    }
  }


  virtual ~ListNacosHistoryConfigsResponseBodyHistoryItems() = default;
};
class ListNacosHistoryConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListNacosHistoryConfigsResponseBodyHistoryItems>> historyItems{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListNacosHistoryConfigsResponseBody() {}

  explicit ListNacosHistoryConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (historyItems) {
      vector<boost::any> temp1;
      for(auto item1:*historyItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryItems"] = boost::any(temp1);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HistoryItems") != m.end() && !m["HistoryItems"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryItems"].type()) {
        vector<ListNacosHistoryConfigsResponseBodyHistoryItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNacosHistoryConfigsResponseBodyHistoryItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyItems = make_shared<vector<ListNacosHistoryConfigsResponseBodyHistoryItems>>(expect1);
      }
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListNacosHistoryConfigsResponseBody() = default;
};
class ListNacosHistoryConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNacosHistoryConfigsResponseBody> body{};

  ListNacosHistoryConfigsResponse() {}

  explicit ListNacosHistoryConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNacosHistoryConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNacosHistoryConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNacosHistoryConfigsResponse() = default;
};
class ListSSLCertRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};

  ListSSLCertRequest() {}

  explicit ListSSLCertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~ListSSLCertRequest() = default;
};
class ListSSLCertResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> beforeDate{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> gmtAfter{};
  shared_ptr<string> gmtBefore{};
  shared_ptr<string> issuer{};
  shared_ptr<string> sans{};

  ListSSLCertResponseBodyData() {}

  explicit ListSSLCertResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (gmtAfter) {
      res["GmtAfter"] = boost::any(*gmtAfter);
    }
    if (gmtBefore) {
      res["GmtBefore"] = boost::any(*gmtBefore);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<string>(boost::any_cast<string>(m["AfterDate"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<string>(boost::any_cast<string>(m["BeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("GmtAfter") != m.end() && !m["GmtAfter"].empty()) {
      gmtAfter = make_shared<string>(boost::any_cast<string>(m["GmtAfter"]));
    }
    if (m.find("GmtBefore") != m.end() && !m["GmtBefore"].empty()) {
      gmtBefore = make_shared<string>(boost::any_cast<string>(m["GmtBefore"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
  }


  virtual ~ListSSLCertResponseBodyData() = default;
};
class ListSSLCertResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListSSLCertResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListSSLCertResponseBody() {}

  explicit ListSSLCertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListSSLCertResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSSLCertResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSSLCertResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSSLCertResponseBody() = default;
};
class ListSSLCertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSSLCertResponseBody> body{};

  ListSSLCertResponse() {}

  explicit ListSSLCertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSSLCertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSSLCertResponseBody>(model1);
      }
    }
  }


  virtual ~ListSSLCertResponse() = default;
};
class ListServiceSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};

  ListServiceSourceRequest() {}

  explicit ListServiceSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~ListServiceSourceRequest() = default;
};
class ListServiceSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<long> bindingWithGateway{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceUniqueId{};
  shared_ptr<string> type{};

  ListServiceSourceResponseBodyData() {}

  explicit ListServiceSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (bindingWithGateway) {
      res["BindingWithGateway"] = boost::any(*bindingWithGateway);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceUniqueId) {
      res["SourceUniqueId"] = boost::any(*sourceUniqueId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("BindingWithGateway") != m.end() && !m["BindingWithGateway"].empty()) {
      bindingWithGateway = make_shared<long>(boost::any_cast<long>(m["BindingWithGateway"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceUniqueId") != m.end() && !m["SourceUniqueId"].empty()) {
      sourceUniqueId = make_shared<string>(boost::any_cast<string>(m["SourceUniqueId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListServiceSourceResponseBodyData() = default;
};
class ListServiceSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<ListServiceSourceResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListServiceSourceResponseBody() {}

  explicit ListServiceSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListServiceSourceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceSourceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListServiceSourceResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListServiceSourceResponseBody() = default;
};
class ListServiceSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceSourceResponseBody> body{};

  ListServiceSourceResponse() {}

  explicit ListServiceSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceSourceResponse() = default;
};
class ListZnodeChildrenRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> path{};

  ListZnodeChildrenRequest() {}

  explicit ListZnodeChildrenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~ListZnodeChildrenRequest() = default;
};
class ListZnodeChildrenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  ListZnodeChildrenResponseBodyData() {}

  explicit ListZnodeChildrenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~ListZnodeChildrenResponseBodyData() = default;
};
class ListZnodeChildrenResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListZnodeChildrenResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListZnodeChildrenResponseBody() {}

  explicit ListZnodeChildrenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListZnodeChildrenResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListZnodeChildrenResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListZnodeChildrenResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListZnodeChildrenResponseBody() = default;
};
class ListZnodeChildrenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListZnodeChildrenResponseBody> body{};

  ListZnodeChildrenResponse() {}

  explicit ListZnodeChildrenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListZnodeChildrenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListZnodeChildrenResponseBody>(model1);
      }
    }
  }


  virtual ~ListZnodeChildrenResponse() = default;
};
class ModifyGovernanceKubernetesClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> namespaceInfos{};
  shared_ptr<string> regionId{};

  ModifyGovernanceKubernetesClusterRequest() {}

  explicit ModifyGovernanceKubernetesClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (namespaceInfos) {
      res["NamespaceInfos"] = boost::any(*namespaceInfos);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NamespaceInfos") != m.end() && !m["NamespaceInfos"].empty()) {
      namespaceInfos = make_shared<string>(boost::any_cast<string>(m["NamespaceInfos"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyGovernanceKubernetesClusterRequest() = default;
};
class ModifyGovernanceKubernetesClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyGovernanceKubernetesClusterResponseBody() {}

  explicit ModifyGovernanceKubernetesClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyGovernanceKubernetesClusterResponseBody() = default;
};
class ModifyGovernanceKubernetesClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyGovernanceKubernetesClusterResponseBody> body{};

  ModifyGovernanceKubernetesClusterResponse() {}

  explicit ModifyGovernanceKubernetesClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyGovernanceKubernetesClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGovernanceKubernetesClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGovernanceKubernetesClusterResponse() = default;
};
class PullServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};

  PullServicesRequest() {}

  explicit PullServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~PullServicesRequest() = default;
};
class PullServicesResponseBodyDataServices : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};

  PullServicesResponseBodyDataServices() {}

  explicit PullServicesResponseBodyDataServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~PullServicesResponseBodyDataServices() = default;
};
class PullServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> namespace_{};
  shared_ptr<vector<PullServicesResponseBodyDataServices>> services{};

  PullServicesResponseBodyData() {}

  explicit PullServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<PullServicesResponseBodyDataServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PullServicesResponseBodyDataServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<PullServicesResponseBodyDataServices>>(expect1);
      }
    }
  }


  virtual ~PullServicesResponseBodyData() = default;
};
class PullServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<PullServicesResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PullServicesResponseBody() {}

  explicit PullServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<PullServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PullServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PullServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PullServicesResponseBody() = default;
};
class PullServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PullServicesResponseBody> body{};

  PullServicesResponse() {}

  explicit PullServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PullServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PullServicesResponseBody>(model1);
      }
    }
  }


  virtual ~PullServicesResponse() = default;
};
class QueryBusinessLocationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  QueryBusinessLocationsRequest() {}

  explicit QueryBusinessLocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~QueryBusinessLocationsRequest() = default;
};
class QueryBusinessLocationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cnName{};
  shared_ptr<string> description{};
  shared_ptr<string> districtCnName{};
  shared_ptr<string> districtEnName{};
  shared_ptr<string> districtId{};
  shared_ptr<long> districtOrdering{};
  shared_ptr<string> districtShowName{};
  shared_ptr<string> enDescription{};
  shared_ptr<string> enName{};
  shared_ptr<string> name{};
  shared_ptr<long> ordering{};
  shared_ptr<string> showName{};
  shared_ptr<string> type{};

  QueryBusinessLocationsResponseBodyData() {}

  explicit QueryBusinessLocationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnName) {
      res["CnName"] = boost::any(*cnName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (districtCnName) {
      res["DistrictCnName"] = boost::any(*districtCnName);
    }
    if (districtEnName) {
      res["DistrictEnName"] = boost::any(*districtEnName);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (districtOrdering) {
      res["DistrictOrdering"] = boost::any(*districtOrdering);
    }
    if (districtShowName) {
      res["DistrictShowName"] = boost::any(*districtShowName);
    }
    if (enDescription) {
      res["EnDescription"] = boost::any(*enDescription);
    }
    if (enName) {
      res["EnName"] = boost::any(*enName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ordering) {
      res["Ordering"] = boost::any(*ordering);
    }
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CnName") != m.end() && !m["CnName"].empty()) {
      cnName = make_shared<string>(boost::any_cast<string>(m["CnName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DistrictCnName") != m.end() && !m["DistrictCnName"].empty()) {
      districtCnName = make_shared<string>(boost::any_cast<string>(m["DistrictCnName"]));
    }
    if (m.find("DistrictEnName") != m.end() && !m["DistrictEnName"].empty()) {
      districtEnName = make_shared<string>(boost::any_cast<string>(m["DistrictEnName"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("DistrictOrdering") != m.end() && !m["DistrictOrdering"].empty()) {
      districtOrdering = make_shared<long>(boost::any_cast<long>(m["DistrictOrdering"]));
    }
    if (m.find("DistrictShowName") != m.end() && !m["DistrictShowName"].empty()) {
      districtShowName = make_shared<string>(boost::any_cast<string>(m["DistrictShowName"]));
    }
    if (m.find("EnDescription") != m.end() && !m["EnDescription"].empty()) {
      enDescription = make_shared<string>(boost::any_cast<string>(m["EnDescription"]));
    }
    if (m.find("EnName") != m.end() && !m["EnName"].empty()) {
      enName = make_shared<string>(boost::any_cast<string>(m["EnName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Ordering") != m.end() && !m["Ordering"].empty()) {
      ordering = make_shared<long>(boost::any_cast<long>(m["Ordering"]));
    }
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryBusinessLocationsResponseBodyData() = default;
};
class QueryBusinessLocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryBusinessLocationsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  QueryBusinessLocationsResponseBody() {}

  explicit QueryBusinessLocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryBusinessLocationsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBusinessLocationsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryBusinessLocationsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~QueryBusinessLocationsResponseBody() = default;
};
class QueryBusinessLocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryBusinessLocationsResponseBody> body{};

  QueryBusinessLocationsResponse() {}

  explicit QueryBusinessLocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBusinessLocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBusinessLocationsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBusinessLocationsResponse() = default;
};
class QueryClusterDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderId{};

  QueryClusterDetailRequest() {}

  explicit QueryClusterDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~QueryClusterDetailRequest() = default;
};
class QueryClusterDetailResponseBodyDataInstanceModels : public Darabonba::Model {
public:
  shared_ptr<string> creationTimestamp{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> ip{};
  shared_ptr<string> podName{};
  shared_ptr<string> role{};
  shared_ptr<string> singleTunnelVip{};

  QueryClusterDetailResponseBodyDataInstanceModels() {}

  explicit QueryClusterDetailResponseBodyDataInstanceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTimestamp) {
      res["CreationTimestamp"] = boost::any(*creationTimestamp);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (singleTunnelVip) {
      res["SingleTunnelVip"] = boost::any(*singleTunnelVip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTimestamp") != m.end() && !m["CreationTimestamp"].empty()) {
      creationTimestamp = make_shared<string>(boost::any_cast<string>(m["CreationTimestamp"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SingleTunnelVip") != m.end() && !m["SingleTunnelVip"].empty()) {
      singleTunnelVip = make_shared<string>(boost::any_cast<string>(m["SingleTunnelVip"]));
    }
  }


  virtual ~QueryClusterDetailResponseBodyDataInstanceModels() = default;
};
class QueryClusterDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aclEntryList{};
  shared_ptr<string> aclId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterSpecification{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> clusterVersion{};
  shared_ptr<string> connectionType{};
  shared_ptr<long> cpu{};
  shared_ptr<string> createTime{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<string> diskType{};
  shared_ptr<string> healthStatus{};
  shared_ptr<long> initCostTime{};
  shared_ptr<string> initStatus{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<QueryClusterDetailResponseBodyDataInstanceModels>> instanceModels{};
  shared_ptr<string> internetAddress{};
  shared_ptr<string> internetDomain{};
  shared_ptr<string> internetPort{};
  shared_ptr<string> intranetAddress{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<string> intranetPort{};
  shared_ptr<long> memoryCapacity{};
  shared_ptr<string> mseVersion{};
  shared_ptr<string> netType{};
  shared_ptr<string> payInfo{};
  shared_ptr<string> pubNetworkFlow{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  QueryClusterDetailResponseBodyData() {}

  explicit QueryClusterDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEntryList) {
      res["AclEntryList"] = boost::any(*aclEntryList);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterSpecification) {
      res["ClusterSpecification"] = boost::any(*clusterSpecification);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (clusterVersion) {
      res["ClusterVersion"] = boost::any(*clusterVersion);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (initCostTime) {
      res["InitCostTime"] = boost::any(*initCostTime);
    }
    if (initStatus) {
      res["InitStatus"] = boost::any(*initStatus);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceModels) {
      vector<boost::any> temp1;
      for(auto item1:*instanceModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceModels"] = boost::any(temp1);
    }
    if (internetAddress) {
      res["InternetAddress"] = boost::any(*internetAddress);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (internetPort) {
      res["InternetPort"] = boost::any(*internetPort);
    }
    if (intranetAddress) {
      res["IntranetAddress"] = boost::any(*intranetAddress);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (intranetPort) {
      res["IntranetPort"] = boost::any(*intranetPort);
    }
    if (memoryCapacity) {
      res["MemoryCapacity"] = boost::any(*memoryCapacity);
    }
    if (mseVersion) {
      res["MseVersion"] = boost::any(*mseVersion);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (payInfo) {
      res["PayInfo"] = boost::any(*payInfo);
    }
    if (pubNetworkFlow) {
      res["PubNetworkFlow"] = boost::any(*pubNetworkFlow);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclEntryList") != m.end() && !m["AclEntryList"].empty()) {
      aclEntryList = make_shared<string>(boost::any_cast<string>(m["AclEntryList"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterSpecification") != m.end() && !m["ClusterSpecification"].empty()) {
      clusterSpecification = make_shared<string>(boost::any_cast<string>(m["ClusterSpecification"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ClusterVersion") != m.end() && !m["ClusterVersion"].empty()) {
      clusterVersion = make_shared<string>(boost::any_cast<string>(m["ClusterVersion"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("InitCostTime") != m.end() && !m["InitCostTime"].empty()) {
      initCostTime = make_shared<long>(boost::any_cast<long>(m["InitCostTime"]));
    }
    if (m.find("InitStatus") != m.end() && !m["InitStatus"].empty()) {
      initStatus = make_shared<string>(boost::any_cast<string>(m["InitStatus"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceModels") != m.end() && !m["InstanceModels"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceModels"].type()) {
        vector<QueryClusterDetailResponseBodyDataInstanceModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryClusterDetailResponseBodyDataInstanceModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceModels = make_shared<vector<QueryClusterDetailResponseBodyDataInstanceModels>>(expect1);
      }
    }
    if (m.find("InternetAddress") != m.end() && !m["InternetAddress"].empty()) {
      internetAddress = make_shared<string>(boost::any_cast<string>(m["InternetAddress"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("InternetPort") != m.end() && !m["InternetPort"].empty()) {
      internetPort = make_shared<string>(boost::any_cast<string>(m["InternetPort"]));
    }
    if (m.find("IntranetAddress") != m.end() && !m["IntranetAddress"].empty()) {
      intranetAddress = make_shared<string>(boost::any_cast<string>(m["IntranetAddress"]));
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("IntranetPort") != m.end() && !m["IntranetPort"].empty()) {
      intranetPort = make_shared<string>(boost::any_cast<string>(m["IntranetPort"]));
    }
    if (m.find("MemoryCapacity") != m.end() && !m["MemoryCapacity"].empty()) {
      memoryCapacity = make_shared<long>(boost::any_cast<long>(m["MemoryCapacity"]));
    }
    if (m.find("MseVersion") != m.end() && !m["MseVersion"].empty()) {
      mseVersion = make_shared<string>(boost::any_cast<string>(m["MseVersion"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PayInfo") != m.end() && !m["PayInfo"].empty()) {
      payInfo = make_shared<string>(boost::any_cast<string>(m["PayInfo"]));
    }
    if (m.find("PubNetworkFlow") != m.end() && !m["PubNetworkFlow"].empty()) {
      pubNetworkFlow = make_shared<string>(boost::any_cast<string>(m["PubNetworkFlow"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~QueryClusterDetailResponseBodyData() = default;
};
class QueryClusterDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryClusterDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryClusterDetailResponseBody() {}

  explicit QueryClusterDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryClusterDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryClusterDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryClusterDetailResponseBody() = default;
};
class QueryClusterDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryClusterDetailResponseBody> body{};

  QueryClusterDetailResponse() {}

  explicit QueryClusterDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryClusterDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryClusterDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryClusterDetailResponse() = default;
};
class QueryClusterDiskSpecificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterType{};

  QueryClusterDiskSpecificationRequest() {}

  explicit QueryClusterDiskSpecificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
  }


  virtual ~QueryClusterDiskSpecificationRequest() = default;
};
class QueryClusterDiskSpecificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> max{};
  shared_ptr<long> min{};
  shared_ptr<long> step{};

  QueryClusterDiskSpecificationResponseBodyData() {}

  explicit QueryClusterDiskSpecificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (max) {
      res["Max"] = boost::any(*max);
    }
    if (min) {
      res["Min"] = boost::any(*min);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Max") != m.end() && !m["Max"].empty()) {
      max = make_shared<long>(boost::any_cast<long>(m["Max"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      min = make_shared<long>(boost::any_cast<long>(m["Min"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~QueryClusterDiskSpecificationResponseBodyData() = default;
};
class QueryClusterDiskSpecificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryClusterDiskSpecificationResponseBodyData> data{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryClusterDiskSpecificationResponseBody() {}

  explicit QueryClusterDiskSpecificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryClusterDiskSpecificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryClusterDiskSpecificationResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryClusterDiskSpecificationResponseBody() = default;
};
class QueryClusterDiskSpecificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryClusterDiskSpecificationResponseBody> body{};

  QueryClusterDiskSpecificationResponse() {}

  explicit QueryClusterDiskSpecificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryClusterDiskSpecificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryClusterDiskSpecificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryClusterDiskSpecificationResponse() = default;
};
class QueryClusterSpecificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> connectType{};

  QueryClusterSpecificationRequest() {}

  explicit QueryClusterSpecificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (connectType) {
      res["ConnectType"] = boost::any(*connectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ConnectType") != m.end() && !m["ConnectType"].empty()) {
      connectType = make_shared<string>(boost::any_cast<string>(m["ConnectType"]));
    }
  }


  virtual ~QueryClusterSpecificationRequest() = default;
};
class QueryClusterSpecificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterSpecificationName{};
  shared_ptr<string> cpuCapacity{};
  shared_ptr<string> diskCapacity{};
  shared_ptr<string> instanceCount{};
  shared_ptr<string> maxCon{};
  shared_ptr<string> maxTps{};
  shared_ptr<string> memoryCapacity{};

  QueryClusterSpecificationResponseBodyData() {}

  explicit QueryClusterSpecificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterSpecificationName) {
      res["ClusterSpecificationName"] = boost::any(*clusterSpecificationName);
    }
    if (cpuCapacity) {
      res["CpuCapacity"] = boost::any(*cpuCapacity);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (maxCon) {
      res["MaxCon"] = boost::any(*maxCon);
    }
    if (maxTps) {
      res["MaxTps"] = boost::any(*maxTps);
    }
    if (memoryCapacity) {
      res["MemoryCapacity"] = boost::any(*memoryCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterSpecificationName") != m.end() && !m["ClusterSpecificationName"].empty()) {
      clusterSpecificationName = make_shared<string>(boost::any_cast<string>(m["ClusterSpecificationName"]));
    }
    if (m.find("CpuCapacity") != m.end() && !m["CpuCapacity"].empty()) {
      cpuCapacity = make_shared<string>(boost::any_cast<string>(m["CpuCapacity"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<string>(boost::any_cast<string>(m["DiskCapacity"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<string>(boost::any_cast<string>(m["InstanceCount"]));
    }
    if (m.find("MaxCon") != m.end() && !m["MaxCon"].empty()) {
      maxCon = make_shared<string>(boost::any_cast<string>(m["MaxCon"]));
    }
    if (m.find("MaxTps") != m.end() && !m["MaxTps"].empty()) {
      maxTps = make_shared<string>(boost::any_cast<string>(m["MaxTps"]));
    }
    if (m.find("MemoryCapacity") != m.end() && !m["MemoryCapacity"].empty()) {
      memoryCapacity = make_shared<string>(boost::any_cast<string>(m["MemoryCapacity"]));
    }
  }


  virtual ~QueryClusterSpecificationResponseBodyData() = default;
};
class QueryClusterSpecificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryClusterSpecificationResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryClusterSpecificationResponseBody() {}

  explicit QueryClusterSpecificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryClusterSpecificationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryClusterSpecificationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryClusterSpecificationResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryClusterSpecificationResponseBody() = default;
};
class QueryClusterSpecificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryClusterSpecificationResponseBody> body{};

  QueryClusterSpecificationResponse() {}

  explicit QueryClusterSpecificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryClusterSpecificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryClusterSpecificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryClusterSpecificationResponse() = default;
};
class QueryConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> configType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestPars{};

  QueryConfigRequest() {}

  explicit QueryConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~QueryConfigRequest() = default;
};
class QueryConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> autopurgePurgeInterval{};
  shared_ptr<string> autopurgeSnapRetainCount{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> configAuthEnabled{};
  shared_ptr<bool> configAuthSupported{};
  shared_ptr<bool> configSecretEnabled{};
  shared_ptr<bool> configSecretSupported{};
  shared_ptr<string> initLimit{};
  shared_ptr<string> juteMaxbuffer{};
  shared_ptr<string> jvmFlagsCustom{};
  shared_ptr<bool> MCPEnabled{};
  shared_ptr<bool> MCPSupported{};
  shared_ptr<string> maxClientCnxns{};
  shared_ptr<string> maxSessionTimeout{};
  shared_ptr<string> minSessionTimeout{};
  shared_ptr<bool> namingCreateServiceSupported{};
  shared_ptr<bool> openSuperAcl{};
  shared_ptr<string> passWord{};
  shared_ptr<bool> restartFlag{};
  shared_ptr<string> syncLimit{};
  shared_ptr<string> tickTime{};
  shared_ptr<string> userName{};

  QueryConfigResponseBodyData() {}

  explicit QueryConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autopurgePurgeInterval) {
      res["AutopurgePurgeInterval"] = boost::any(*autopurgePurgeInterval);
    }
    if (autopurgeSnapRetainCount) {
      res["AutopurgeSnapRetainCount"] = boost::any(*autopurgeSnapRetainCount);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (configAuthEnabled) {
      res["ConfigAuthEnabled"] = boost::any(*configAuthEnabled);
    }
    if (configAuthSupported) {
      res["ConfigAuthSupported"] = boost::any(*configAuthSupported);
    }
    if (configSecretEnabled) {
      res["ConfigSecretEnabled"] = boost::any(*configSecretEnabled);
    }
    if (configSecretSupported) {
      res["ConfigSecretSupported"] = boost::any(*configSecretSupported);
    }
    if (initLimit) {
      res["InitLimit"] = boost::any(*initLimit);
    }
    if (juteMaxbuffer) {
      res["JuteMaxbuffer"] = boost::any(*juteMaxbuffer);
    }
    if (jvmFlagsCustom) {
      res["JvmFlagsCustom"] = boost::any(*jvmFlagsCustom);
    }
    if (MCPEnabled) {
      res["MCPEnabled"] = boost::any(*MCPEnabled);
    }
    if (MCPSupported) {
      res["MCPSupported"] = boost::any(*MCPSupported);
    }
    if (maxClientCnxns) {
      res["MaxClientCnxns"] = boost::any(*maxClientCnxns);
    }
    if (maxSessionTimeout) {
      res["MaxSessionTimeout"] = boost::any(*maxSessionTimeout);
    }
    if (minSessionTimeout) {
      res["MinSessionTimeout"] = boost::any(*minSessionTimeout);
    }
    if (namingCreateServiceSupported) {
      res["NamingCreateServiceSupported"] = boost::any(*namingCreateServiceSupported);
    }
    if (openSuperAcl) {
      res["OpenSuperAcl"] = boost::any(*openSuperAcl);
    }
    if (passWord) {
      res["PassWord"] = boost::any(*passWord);
    }
    if (restartFlag) {
      res["RestartFlag"] = boost::any(*restartFlag);
    }
    if (syncLimit) {
      res["SyncLimit"] = boost::any(*syncLimit);
    }
    if (tickTime) {
      res["TickTime"] = boost::any(*tickTime);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutopurgePurgeInterval") != m.end() && !m["AutopurgePurgeInterval"].empty()) {
      autopurgePurgeInterval = make_shared<string>(boost::any_cast<string>(m["AutopurgePurgeInterval"]));
    }
    if (m.find("AutopurgeSnapRetainCount") != m.end() && !m["AutopurgeSnapRetainCount"].empty()) {
      autopurgeSnapRetainCount = make_shared<string>(boost::any_cast<string>(m["AutopurgeSnapRetainCount"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ConfigAuthEnabled") != m.end() && !m["ConfigAuthEnabled"].empty()) {
      configAuthEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigAuthEnabled"]));
    }
    if (m.find("ConfigAuthSupported") != m.end() && !m["ConfigAuthSupported"].empty()) {
      configAuthSupported = make_shared<bool>(boost::any_cast<bool>(m["ConfigAuthSupported"]));
    }
    if (m.find("ConfigSecretEnabled") != m.end() && !m["ConfigSecretEnabled"].empty()) {
      configSecretEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigSecretEnabled"]));
    }
    if (m.find("ConfigSecretSupported") != m.end() && !m["ConfigSecretSupported"].empty()) {
      configSecretSupported = make_shared<bool>(boost::any_cast<bool>(m["ConfigSecretSupported"]));
    }
    if (m.find("InitLimit") != m.end() && !m["InitLimit"].empty()) {
      initLimit = make_shared<string>(boost::any_cast<string>(m["InitLimit"]));
    }
    if (m.find("JuteMaxbuffer") != m.end() && !m["JuteMaxbuffer"].empty()) {
      juteMaxbuffer = make_shared<string>(boost::any_cast<string>(m["JuteMaxbuffer"]));
    }
    if (m.find("JvmFlagsCustom") != m.end() && !m["JvmFlagsCustom"].empty()) {
      jvmFlagsCustom = make_shared<string>(boost::any_cast<string>(m["JvmFlagsCustom"]));
    }
    if (m.find("MCPEnabled") != m.end() && !m["MCPEnabled"].empty()) {
      MCPEnabled = make_shared<bool>(boost::any_cast<bool>(m["MCPEnabled"]));
    }
    if (m.find("MCPSupported") != m.end() && !m["MCPSupported"].empty()) {
      MCPSupported = make_shared<bool>(boost::any_cast<bool>(m["MCPSupported"]));
    }
    if (m.find("MaxClientCnxns") != m.end() && !m["MaxClientCnxns"].empty()) {
      maxClientCnxns = make_shared<string>(boost::any_cast<string>(m["MaxClientCnxns"]));
    }
    if (m.find("MaxSessionTimeout") != m.end() && !m["MaxSessionTimeout"].empty()) {
      maxSessionTimeout = make_shared<string>(boost::any_cast<string>(m["MaxSessionTimeout"]));
    }
    if (m.find("MinSessionTimeout") != m.end() && !m["MinSessionTimeout"].empty()) {
      minSessionTimeout = make_shared<string>(boost::any_cast<string>(m["MinSessionTimeout"]));
    }
    if (m.find("NamingCreateServiceSupported") != m.end() && !m["NamingCreateServiceSupported"].empty()) {
      namingCreateServiceSupported = make_shared<bool>(boost::any_cast<bool>(m["NamingCreateServiceSupported"]));
    }
    if (m.find("OpenSuperAcl") != m.end() && !m["OpenSuperAcl"].empty()) {
      openSuperAcl = make_shared<bool>(boost::any_cast<bool>(m["OpenSuperAcl"]));
    }
    if (m.find("PassWord") != m.end() && !m["PassWord"].empty()) {
      passWord = make_shared<string>(boost::any_cast<string>(m["PassWord"]));
    }
    if (m.find("RestartFlag") != m.end() && !m["RestartFlag"].empty()) {
      restartFlag = make_shared<bool>(boost::any_cast<bool>(m["RestartFlag"]));
    }
    if (m.find("SyncLimit") != m.end() && !m["SyncLimit"].empty()) {
      syncLimit = make_shared<string>(boost::any_cast<string>(m["SyncLimit"]));
    }
    if (m.find("TickTime") != m.end() && !m["TickTime"].empty()) {
      tickTime = make_shared<string>(boost::any_cast<string>(m["TickTime"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~QueryConfigResponseBodyData() = default;
};
class QueryConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryConfigResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryConfigResponseBody() {}

  explicit QueryConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryConfigResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryConfigResponseBody() = default;
};
class QueryConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryConfigResponseBody> body{};

  QueryConfigResponse() {}

  explicit QueryConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryConfigResponse() = default;
};
class QueryGatewayRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  QueryGatewayRegionRequest() {}

  explicit QueryGatewayRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~QueryGatewayRegionRequest() = default;
};
class QueryGatewayRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryGatewayRegionResponseBody() {}

  explicit QueryGatewayRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryGatewayRegionResponseBody() = default;
};
class QueryGatewayRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryGatewayRegionResponseBody> body{};

  QueryGatewayRegionResponse() {}

  explicit QueryGatewayRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryGatewayRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGatewayRegionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGatewayRegionResponse() = default;
};
class QueryGatewayTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  QueryGatewayTypeRequest() {}

  explicit QueryGatewayTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~QueryGatewayTypeRequest() = default;
};
class QueryGatewayTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryGatewayTypeResponseBody() {}

  explicit QueryGatewayTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryGatewayTypeResponseBody() = default;
};
class QueryGatewayTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryGatewayTypeResponseBody> body{};

  QueryGatewayTypeResponse() {}

  explicit QueryGatewayTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryGatewayTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGatewayTypeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGatewayTypeResponse() = default;
};
class QueryGovernanceKubernetesClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryGovernanceKubernetesClusterRequest() {}

  explicit QueryGovernanceKubernetesClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryGovernanceKubernetesClusterRequest() = default;
};
class QueryGovernanceKubernetesClusterResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> k8sVersion{};
  shared_ptr<string> namespaceInfos{};
  shared_ptr<string> pilotStartTime{};
  shared_ptr<string> region{};

  QueryGovernanceKubernetesClusterResponseBodyDataResult() {}

  explicit QueryGovernanceKubernetesClusterResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (k8sVersion) {
      res["K8sVersion"] = boost::any(*k8sVersion);
    }
    if (namespaceInfos) {
      res["NamespaceInfos"] = boost::any(*namespaceInfos);
    }
    if (pilotStartTime) {
      res["PilotStartTime"] = boost::any(*pilotStartTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("K8sVersion") != m.end() && !m["K8sVersion"].empty()) {
      k8sVersion = make_shared<string>(boost::any_cast<string>(m["K8sVersion"]));
    }
    if (m.find("NamespaceInfos") != m.end() && !m["NamespaceInfos"].empty()) {
      namespaceInfos = make_shared<string>(boost::any_cast<string>(m["NamespaceInfos"]));
    }
    if (m.find("PilotStartTime") != m.end() && !m["PilotStartTime"].empty()) {
      pilotStartTime = make_shared<string>(boost::any_cast<string>(m["PilotStartTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~QueryGovernanceKubernetesClusterResponseBodyDataResult() = default;
};
class QueryGovernanceKubernetesClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<QueryGovernanceKubernetesClusterResponseBodyDataResult>> result{};
  shared_ptr<long> totalSize{};

  QueryGovernanceKubernetesClusterResponseBodyData() {}

  explicit QueryGovernanceKubernetesClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryGovernanceKubernetesClusterResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryGovernanceKubernetesClusterResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryGovernanceKubernetesClusterResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~QueryGovernanceKubernetesClusterResponseBodyData() = default;
};
class QueryGovernanceKubernetesClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryGovernanceKubernetesClusterResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryGovernanceKubernetesClusterResponseBody() {}

  explicit QueryGovernanceKubernetesClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryGovernanceKubernetesClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryGovernanceKubernetesClusterResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryGovernanceKubernetesClusterResponseBody() = default;
};
class QueryGovernanceKubernetesClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryGovernanceKubernetesClusterResponseBody> body{};

  QueryGovernanceKubernetesClusterResponse() {}

  explicit QueryGovernanceKubernetesClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryGovernanceKubernetesClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGovernanceKubernetesClusterResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGovernanceKubernetesClusterResponse() = default;
};
class QueryMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> requestPars{};
  shared_ptr<long> startTime{};
  shared_ptr<long> step{};

  QueryMonitorRequest() {}

  explicit QueryMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~QueryMonitorRequest() = default;
};
class QueryMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryMonitorResponseBody() {}

  explicit QueryMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryMonitorResponseBody() = default;
};
class QueryMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryMonitorResponseBody> body{};

  QueryMonitorResponse() {}

  explicit QueryMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMonitorResponse() = default;
};
class QuerySlbSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  QuerySlbSpecRequest() {}

  explicit QuerySlbSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~QuerySlbSpecRequest() = default;
};
class QuerySlbSpecResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> maxConnection{};
  shared_ptr<string> name{};
  shared_ptr<string> newConnectionPerSecond{};
  shared_ptr<string> qps{};
  shared_ptr<string> spec{};

  QuerySlbSpecResponseBodyData() {}

  explicit QuerySlbSpecResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (maxConnection) {
      res["MaxConnection"] = boost::any(*maxConnection);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newConnectionPerSecond) {
      res["NewConnectionPerSecond"] = boost::any(*newConnectionPerSecond);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MaxConnection") != m.end() && !m["MaxConnection"].empty()) {
      maxConnection = make_shared<string>(boost::any_cast<string>(m["MaxConnection"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewConnectionPerSecond") != m.end() && !m["NewConnectionPerSecond"].empty()) {
      newConnectionPerSecond = make_shared<string>(boost::any_cast<string>(m["NewConnectionPerSecond"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<string>(boost::any_cast<string>(m["Qps"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~QuerySlbSpecResponseBodyData() = default;
};
class QuerySlbSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QuerySlbSpecResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QuerySlbSpecResponseBody() {}

  explicit QuerySlbSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QuerySlbSpecResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySlbSpecResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QuerySlbSpecResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QuerySlbSpecResponseBody() = default;
};
class QuerySlbSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySlbSpecResponseBody> body{};

  QuerySlbSpecResponse() {}

  explicit QuerySlbSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QuerySlbSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySlbSpecResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySlbSpecResponse() = default;
};
class QueryZnodeDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> path{};
  shared_ptr<string> requestPars{};

  QueryZnodeDetailRequest() {}

  explicit QueryZnodeDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~QueryZnodeDetailRequest() = default;
};
class QueryZnodeDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  QueryZnodeDetailResponseBodyData() {}

  explicit QueryZnodeDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~QueryZnodeDetailResponseBodyData() = default;
};
class QueryZnodeDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryZnodeDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  QueryZnodeDetailResponseBody() {}

  explicit QueryZnodeDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryZnodeDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryZnodeDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~QueryZnodeDetailResponseBody() = default;
};
class QueryZnodeDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryZnodeDetailResponseBody> body{};

  QueryZnodeDetailResponse() {}

  explicit QueryZnodeDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryZnodeDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryZnodeDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryZnodeDetailResponse() = default;
};
class RestartClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> podNameList{};
  shared_ptr<string> requestPars{};

  RestartClusterRequest() {}

  explicit RestartClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (podNameList) {
      res["PodNameList"] = boost::any(*podNameList);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PodNameList") != m.end() && !m["PodNameList"].empty()) {
      podNameList = make_shared<string>(boost::any_cast<string>(m["PodNameList"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~RestartClusterRequest() = default;
};
class RestartClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RestartClusterResponseBody() {}

  explicit RestartClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RestartClusterResponseBody() = default;
};
class RestartClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartClusterResponseBody> body{};

  RestartClusterResponse() {}

  explicit RestartClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RestartClusterResponse() = default;
};
class RetryClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestPars{};

  RetryClusterRequest() {}

  explicit RetryClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~RetryClusterRequest() = default;
};
class RetryClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RetryClusterResponseBody() {}

  explicit RetryClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RetryClusterResponseBody() = default;
};
class RetryClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RetryClusterResponseBody> body{};

  RetryClusterResponse() {}

  explicit RetryClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RetryClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RetryClusterResponse() = default;
};
class ScalingClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterSpecification{};
  shared_ptr<long> cpu{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> memoryCapacity{};

  ScalingClusterRequest() {}

  explicit ScalingClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterSpecification) {
      res["ClusterSpecification"] = boost::any(*clusterSpecification);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memoryCapacity) {
      res["MemoryCapacity"] = boost::any(*memoryCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterSpecification") != m.end() && !m["ClusterSpecification"].empty()) {
      clusterSpecification = make_shared<string>(boost::any_cast<string>(m["ClusterSpecification"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemoryCapacity") != m.end() && !m["MemoryCapacity"].empty()) {
      memoryCapacity = make_shared<long>(boost::any_cast<long>(m["MemoryCapacity"]));
    }
  }


  virtual ~ScalingClusterRequest() = default;
};
class ScalingClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ScalingClusterResponseBody() {}

  explicit ScalingClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ScalingClusterResponseBody() = default;
};
class ScalingClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScalingClusterResponseBody> body{};

  ScalingClusterResponse() {}

  explicit ScalingClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ScalingClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScalingClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ScalingClusterResponse() = default;
};
class SelectGatewaySlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  SelectGatewaySlbRequest() {}

  explicit SelectGatewaySlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SelectGatewaySlbRequest() = default;
};
class SelectGatewaySlbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> slbId{};
  shared_ptr<string> slbName{};

  SelectGatewaySlbResponseBodyData() {}

  explicit SelectGatewaySlbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slbId) {
      res["SlbId"] = boost::any(*slbId);
    }
    if (slbName) {
      res["SlbName"] = boost::any(*slbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlbId") != m.end() && !m["SlbId"].empty()) {
      slbId = make_shared<string>(boost::any_cast<string>(m["SlbId"]));
    }
    if (m.find("SlbName") != m.end() && !m["SlbName"].empty()) {
      slbName = make_shared<string>(boost::any_cast<string>(m["SlbName"]));
    }
  }


  virtual ~SelectGatewaySlbResponseBodyData() = default;
};
class SelectGatewaySlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<SelectGatewaySlbResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SelectGatewaySlbResponseBody() {}

  explicit SelectGatewaySlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SelectGatewaySlbResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SelectGatewaySlbResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SelectGatewaySlbResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SelectGatewaySlbResponseBody() = default;
};
class SelectGatewaySlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SelectGatewaySlbResponseBody> body{};

  SelectGatewaySlbResponse() {}

  explicit SelectGatewaySlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SelectGatewaySlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SelectGatewaySlbResponseBody>(model1);
      }
    }
  }


  virtual ~SelectGatewaySlbResponse() = default;
};
class UpdateAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> aclEntryList{};
  shared_ptr<string> instanceId{};

  UpdateAclRequest() {}

  explicit UpdateAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (aclEntryList) {
      res["AclEntryList"] = boost::any(*aclEntryList);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AclEntryList") != m.end() && !m["AclEntryList"].empty()) {
      aclEntryList = make_shared<string>(boost::any_cast<string>(m["AclEntryList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateAclRequest() = default;
};
class UpdateAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAclResponseBody() {}

  explicit UpdateAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAclResponseBody() = default;
};
class UpdateAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAclResponseBody> body{};

  UpdateAclResponse() {}

  explicit UpdateAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAclResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAclResponse() = default;
};
class UpdateBlackWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> content{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> id{};
  shared_ptr<bool> isWhite{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  UpdateBlackWhiteListRequest() {}

  explicit UpdateBlackWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isWhite) {
      res["IsWhite"] = boost::any(*isWhite);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsWhite") != m.end() && !m["IsWhite"].empty()) {
      isWhite = make_shared<bool>(boost::any_cast<bool>(m["IsWhite"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateBlackWhiteListRequest() = default;
};
class UpdateBlackWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateBlackWhiteListResponseBody() {}

  explicit UpdateBlackWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateBlackWhiteListResponseBody() = default;
};
class UpdateBlackWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateBlackWhiteListResponseBody> body{};

  UpdateBlackWhiteListResponse() {}

  explicit UpdateBlackWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateBlackWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBlackWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBlackWhiteListResponse() = default;
};
class UpdateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestPars{};

  UpdateClusterRequest() {}

  explicit UpdateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~UpdateClusterRequest() = default;
};
class UpdateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateClusterResponseBody() {}

  explicit UpdateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateClusterResponseBody() = default;
};
class UpdateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateClusterResponseBody> body{};

  UpdateClusterResponse() {}

  explicit UpdateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClusterResponse() = default;
};
class UpdateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> autopurgePurgeInterval{};
  shared_ptr<string> autopurgeSnapRetainCount{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> configAuthEnabled{};
  shared_ptr<bool> configSecretEnabled{};
  shared_ptr<string> configType{};
  shared_ptr<string> initLimit{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> juteMaxbuffer{};
  shared_ptr<bool> MCPEnabled{};
  shared_ptr<string> maxClientCnxns{};
  shared_ptr<string> maxSessionTimeout{};
  shared_ptr<string> minSessionTimeout{};
  shared_ptr<string> openSuperAcl{};
  shared_ptr<string> passWord{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> syncLimit{};
  shared_ptr<string> tickTime{};
  shared_ptr<string> userName{};

  UpdateConfigRequest() {}

  explicit UpdateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (autopurgePurgeInterval) {
      res["AutopurgePurgeInterval"] = boost::any(*autopurgePurgeInterval);
    }
    if (autopurgeSnapRetainCount) {
      res["AutopurgeSnapRetainCount"] = boost::any(*autopurgeSnapRetainCount);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (configAuthEnabled) {
      res["ConfigAuthEnabled"] = boost::any(*configAuthEnabled);
    }
    if (configSecretEnabled) {
      res["ConfigSecretEnabled"] = boost::any(*configSecretEnabled);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (initLimit) {
      res["InitLimit"] = boost::any(*initLimit);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (juteMaxbuffer) {
      res["JuteMaxbuffer"] = boost::any(*juteMaxbuffer);
    }
    if (MCPEnabled) {
      res["MCPEnabled"] = boost::any(*MCPEnabled);
    }
    if (maxClientCnxns) {
      res["MaxClientCnxns"] = boost::any(*maxClientCnxns);
    }
    if (maxSessionTimeout) {
      res["MaxSessionTimeout"] = boost::any(*maxSessionTimeout);
    }
    if (minSessionTimeout) {
      res["MinSessionTimeout"] = boost::any(*minSessionTimeout);
    }
    if (openSuperAcl) {
      res["OpenSuperAcl"] = boost::any(*openSuperAcl);
    }
    if (passWord) {
      res["PassWord"] = boost::any(*passWord);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (syncLimit) {
      res["SyncLimit"] = boost::any(*syncLimit);
    }
    if (tickTime) {
      res["TickTime"] = boost::any(*tickTime);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AutopurgePurgeInterval") != m.end() && !m["AutopurgePurgeInterval"].empty()) {
      autopurgePurgeInterval = make_shared<string>(boost::any_cast<string>(m["AutopurgePurgeInterval"]));
    }
    if (m.find("AutopurgeSnapRetainCount") != m.end() && !m["AutopurgeSnapRetainCount"].empty()) {
      autopurgeSnapRetainCount = make_shared<string>(boost::any_cast<string>(m["AutopurgeSnapRetainCount"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ConfigAuthEnabled") != m.end() && !m["ConfigAuthEnabled"].empty()) {
      configAuthEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigAuthEnabled"]));
    }
    if (m.find("ConfigSecretEnabled") != m.end() && !m["ConfigSecretEnabled"].empty()) {
      configSecretEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigSecretEnabled"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("InitLimit") != m.end() && !m["InitLimit"].empty()) {
      initLimit = make_shared<string>(boost::any_cast<string>(m["InitLimit"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JuteMaxbuffer") != m.end() && !m["JuteMaxbuffer"].empty()) {
      juteMaxbuffer = make_shared<string>(boost::any_cast<string>(m["JuteMaxbuffer"]));
    }
    if (m.find("MCPEnabled") != m.end() && !m["MCPEnabled"].empty()) {
      MCPEnabled = make_shared<bool>(boost::any_cast<bool>(m["MCPEnabled"]));
    }
    if (m.find("MaxClientCnxns") != m.end() && !m["MaxClientCnxns"].empty()) {
      maxClientCnxns = make_shared<string>(boost::any_cast<string>(m["MaxClientCnxns"]));
    }
    if (m.find("MaxSessionTimeout") != m.end() && !m["MaxSessionTimeout"].empty()) {
      maxSessionTimeout = make_shared<string>(boost::any_cast<string>(m["MaxSessionTimeout"]));
    }
    if (m.find("MinSessionTimeout") != m.end() && !m["MinSessionTimeout"].empty()) {
      minSessionTimeout = make_shared<string>(boost::any_cast<string>(m["MinSessionTimeout"]));
    }
    if (m.find("OpenSuperAcl") != m.end() && !m["OpenSuperAcl"].empty()) {
      openSuperAcl = make_shared<string>(boost::any_cast<string>(m["OpenSuperAcl"]));
    }
    if (m.find("PassWord") != m.end() && !m["PassWord"].empty()) {
      passWord = make_shared<string>(boost::any_cast<string>(m["PassWord"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("SyncLimit") != m.end() && !m["SyncLimit"].empty()) {
      syncLimit = make_shared<string>(boost::any_cast<string>(m["SyncLimit"]));
    }
    if (m.find("TickTime") != m.end() && !m["TickTime"].empty()) {
      tickTime = make_shared<string>(boost::any_cast<string>(m["TickTime"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateConfigRequest() = default;
};
class UpdateConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateConfigResponseBody() {}

  explicit UpdateConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateConfigResponseBody() = default;
};
class UpdateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateConfigResponseBody> body{};

  UpdateConfigResponse() {}

  explicit UpdateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConfigResponse() = default;
};
class UpdateEngineNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> desc{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceCount{};

  UpdateEngineNamespaceRequest() {}

  explicit UpdateEngineNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
  }


  virtual ~UpdateEngineNamespaceRequest() = default;
};
class UpdateEngineNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> configCount{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<long> quota{};
  shared_ptr<long> type{};

  UpdateEngineNamespaceResponseBodyData() {}

  explicit UpdateEngineNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<long>(boost::any_cast<long>(m["ConfigCount"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~UpdateEngineNamespaceResponseBodyData() = default;
};
class UpdateEngineNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateEngineNamespaceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEngineNamespaceResponseBody() {}

  explicit UpdateEngineNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateEngineNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateEngineNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEngineNamespaceResponseBody() = default;
};
class UpdateEngineNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEngineNamespaceResponseBody> body{};

  UpdateEngineNamespaceResponse() {}

  explicit UpdateEngineNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEngineNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEngineNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEngineNamespaceResponse() = default;
};
class UpdateGatewayDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> id{};
  shared_ptr<bool> mustHttps{};
  shared_ptr<string> protocol{};

  UpdateGatewayDomainRequest() {}

  explicit UpdateGatewayDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mustHttps) {
      res["MustHttps"] = boost::any(*mustHttps);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MustHttps") != m.end() && !m["MustHttps"].empty()) {
      mustHttps = make_shared<bool>(boost::any_cast<bool>(m["MustHttps"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~UpdateGatewayDomainRequest() = default;
};
class UpdateGatewayDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateGatewayDomainResponseBody() {}

  explicit UpdateGatewayDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateGatewayDomainResponseBody() = default;
};
class UpdateGatewayDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGatewayDomainResponseBody> body{};

  UpdateGatewayDomainResponse() {}

  explicit UpdateGatewayDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayDomainResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayDomainResponse() = default;
};
class UpdateGatewayNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> name{};

  UpdateGatewayNameRequest() {}

  explicit UpdateGatewayNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateGatewayNameRequest() = default;
};
class UpdateGatewayNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateGatewayNameResponseBody() {}

  explicit UpdateGatewayNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateGatewayNameResponseBody() = default;
};
class UpdateGatewayNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGatewayNameResponseBody> body{};

  UpdateGatewayNameResponse() {}

  explicit UpdateGatewayNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayNameResponse() = default;
};
class UpdateGatewayOptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> gatewayId{};
  shared_ptr<GatewayOption> gatewayOption{};
  shared_ptr<string> gatewayUniqueId{};

  UpdateGatewayOptionRequest() {}

  explicit UpdateGatewayOptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayOption) {
      res["GatewayOption"] = gatewayOption ? boost::any(gatewayOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayOption") != m.end() && !m["GatewayOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayOption"].type()) {
        GatewayOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatewayOption"]));
        gatewayOption = make_shared<GatewayOption>(model1);
      }
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~UpdateGatewayOptionRequest() = default;
};
class UpdateGatewayOptionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayOptionShrink{};
  shared_ptr<string> gatewayUniqueId{};

  UpdateGatewayOptionShrinkRequest() {}

  explicit UpdateGatewayOptionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayOptionShrink) {
      res["GatewayOption"] = boost::any(*gatewayOptionShrink);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayOption") != m.end() && !m["GatewayOption"].empty()) {
      gatewayOptionShrink = make_shared<string>(boost::any_cast<string>(m["GatewayOption"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~UpdateGatewayOptionShrinkRequest() = default;
};
class UpdateGatewayOptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GatewayOption> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateGatewayOptionResponseBody() {}

  explicit UpdateGatewayOptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GatewayOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GatewayOption>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateGatewayOptionResponseBody() = default;
};
class UpdateGatewayOptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGatewayOptionResponseBody> body{};

  UpdateGatewayOptionResponse() {}

  explicit UpdateGatewayOptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayOptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayOptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayOptionResponse() = default;
};
class UpdateGatewayRouteHTTPRewriteRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> gatewayId{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<string> httpRewriteJSON{};
  shared_ptr<long> id{};

  UpdateGatewayRouteHTTPRewriteRequest() {}

  explicit UpdateGatewayRouteHTTPRewriteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (httpRewriteJSON) {
      res["HttpRewriteJSON"] = boost::any(*httpRewriteJSON);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<long>(boost::any_cast<long>(m["GatewayId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("HttpRewriteJSON") != m.end() && !m["HttpRewriteJSON"].empty()) {
      httpRewriteJSON = make_shared<string>(boost::any_cast<string>(m["HttpRewriteJSON"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateGatewayRouteHTTPRewriteRequest() = default;
};
class UpdateGatewayRouteHTTPRewriteResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateGatewayRouteHTTPRewriteResponseBody() {}

  explicit UpdateGatewayRouteHTTPRewriteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateGatewayRouteHTTPRewriteResponseBody() = default;
};
class UpdateGatewayRouteHTTPRewriteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGatewayRouteHTTPRewriteResponseBody> body{};

  UpdateGatewayRouteHTTPRewriteResponse() {}

  explicit UpdateGatewayRouteHTTPRewriteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayRouteHTTPRewriteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayRouteHTTPRewriteResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayRouteHTTPRewriteResponse() = default;
};
class UpdateGatewayServiceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> gatewayUniqueId{};
  shared_ptr<long> serviceId{};
  shared_ptr<string> serviceVersion{};

  UpdateGatewayServiceVersionRequest() {}

  explicit UpdateGatewayServiceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<long>(boost::any_cast<long>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~UpdateGatewayServiceVersionRequest() = default;
};
class UpdateGatewayServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateGatewayServiceVersionResponseBody() {}

  explicit UpdateGatewayServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateGatewayServiceVersionResponseBody() = default;
};
class UpdateGatewayServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGatewayServiceVersionResponseBody> body{};

  UpdateGatewayServiceVersionResponse() {}

  explicit UpdateGatewayServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayServiceVersionResponse() = default;
};
class UpdateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> versionCode{};

  UpdateImageRequest() {}

  explicit UpdateImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
  }


  virtual ~UpdateImageRequest() = default;
};
class UpdateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateImageResponseBody() {}

  explicit UpdateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateImageResponseBody() = default;
};
class UpdateImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateImageResponseBody> body{};

  UpdateImageResponse() {}

  explicit UpdateImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageResponse() = default;
};
class UpdateNacosClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> checkPort{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> healthChecker{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<bool> useInstancePortForCheck{};

  UpdateNacosClusterRequest() {}

  explicit UpdateNacosClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (checkPort) {
      res["CheckPort"] = boost::any(*checkPort);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (healthChecker) {
      res["HealthChecker"] = boost::any(*healthChecker);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (useInstancePortForCheck) {
      res["UseInstancePortForCheck"] = boost::any(*useInstancePortForCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("CheckPort") != m.end() && !m["CheckPort"].empty()) {
      checkPort = make_shared<long>(boost::any_cast<long>(m["CheckPort"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HealthChecker") != m.end() && !m["HealthChecker"].empty()) {
      healthChecker = make_shared<string>(boost::any_cast<string>(m["HealthChecker"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("UseInstancePortForCheck") != m.end() && !m["UseInstancePortForCheck"].empty()) {
      useInstancePortForCheck = make_shared<bool>(boost::any_cast<bool>(m["UseInstancePortForCheck"]));
    }
  }


  virtual ~UpdateNacosClusterRequest() = default;
};
class UpdateNacosClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateNacosClusterResponseBody() {}

  explicit UpdateNacosClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateNacosClusterResponseBody() = default;
};
class UpdateNacosClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateNacosClusterResponseBody> body{};

  UpdateNacosClusterResponse() {}

  explicit UpdateNacosClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNacosClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNacosClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNacosClusterResponse() = default;
};
class UpdateNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> betaIps{};
  shared_ptr<string> content{};
  shared_ptr<string> dataId{};
  shared_ptr<string> desc{};
  shared_ptr<string> encryptedDataKey{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> md5{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> tags{};
  shared_ptr<string> type{};

  UpdateNacosConfigRequest() {}

  explicit UpdateNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (betaIps) {
      res["BetaIps"] = boost::any(*betaIps);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (encryptedDataKey) {
      res["EncryptedDataKey"] = boost::any(*encryptedDataKey);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BetaIps") != m.end() && !m["BetaIps"].empty()) {
      betaIps = make_shared<string>(boost::any_cast<string>(m["BetaIps"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("EncryptedDataKey") != m.end() && !m["EncryptedDataKey"].empty()) {
      encryptedDataKey = make_shared<string>(boost::any_cast<string>(m["EncryptedDataKey"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateNacosConfigRequest() = default;
};
class UpdateNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateNacosConfigResponseBody() {}

  explicit UpdateNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateNacosConfigResponseBody() = default;
};
class UpdateNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateNacosConfigResponseBody> body{};

  UpdateNacosConfigResponse() {}

  explicit UpdateNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNacosConfigResponse() = default;
};
class UpdateNacosInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> ephemeral{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> metadata{};
  shared_ptr<string> namespaceId{};
  shared_ptr<long> port{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> weight{};

  UpdateNacosInstanceRequest() {}

  explicit UpdateNacosInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (ephemeral) {
      res["Ephemeral"] = boost::any(*ephemeral);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Ephemeral") != m.end() && !m["Ephemeral"].empty()) {
      ephemeral = make_shared<bool>(boost::any_cast<bool>(m["Ephemeral"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
  }


  virtual ~UpdateNacosInstanceRequest() = default;
};
class UpdateNacosInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateNacosInstanceResponseBody() {}

  explicit UpdateNacosInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateNacosInstanceResponseBody() = default;
};
class UpdateNacosInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateNacosInstanceResponseBody> body{};

  UpdateNacosInstanceResponse() {}

  explicit UpdateNacosInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNacosInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNacosInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNacosInstanceResponse() = default;
};
class UpdateNacosServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> protectThreshold{};
  shared_ptr<string> serviceName{};

  UpdateNacosServiceRequest() {}

  explicit UpdateNacosServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (protectThreshold) {
      res["ProtectThreshold"] = boost::any(*protectThreshold);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ProtectThreshold") != m.end() && !m["ProtectThreshold"].empty()) {
      protectThreshold = make_shared<string>(boost::any_cast<string>(m["ProtectThreshold"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~UpdateNacosServiceRequest() = default;
};
class UpdateNacosServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateNacosServiceResponseBody() {}

  explicit UpdateNacosServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateNacosServiceResponseBody() = default;
};
class UpdateNacosServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateNacosServiceResponseBody> body{};

  UpdateNacosServiceResponse() {}

  explicit UpdateNacosServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNacosServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNacosServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNacosServiceResponse() = default;
};
class UpdateSSLCertRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<long> domainId{};
  shared_ptr<string> gatewayUniqueId{};

  UpdateSSLCertRequest() {}

  explicit UpdateSSLCertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (gatewayUniqueId) {
      res["GatewayUniqueId"] = boost::any(*gatewayUniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
    }
    if (m.find("GatewayUniqueId") != m.end() && !m["GatewayUniqueId"].empty()) {
      gatewayUniqueId = make_shared<string>(boost::any_cast<string>(m["GatewayUniqueId"]));
    }
  }


  virtual ~UpdateSSLCertRequest() = default;
};
class UpdateSSLCertResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSSLCertResponseBody() {}

  explicit UpdateSSLCertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSSLCertResponseBody() = default;
};
class UpdateSSLCertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSSLCertResponseBody> body{};

  UpdateSSLCertResponse() {}

  explicit UpdateSSLCertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSSLCertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSSLCertResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSSLCertResponse() = default;
};
class UpdateZnodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> data{};
  shared_ptr<string> path{};
  shared_ptr<string> requestPars{};

  UpdateZnodeRequest() {}

  explicit UpdateZnodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~UpdateZnodeRequest() = default;
};
class UpdateZnodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateZnodeResponseBody() {}

  explicit UpdateZnodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateZnodeResponseBody() = default;
};
class UpdateZnodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateZnodeResponseBody> body{};

  UpdateZnodeResponse() {}

  explicit UpdateZnodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateZnodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateZnodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateZnodeResponse() = default;
};
class UpgradeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestPars{};
  shared_ptr<string> upgradeVersion{};

  UpgradeClusterRequest() {}

  explicit UpgradeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (upgradeVersion) {
      res["UpgradeVersion"] = boost::any(*upgradeVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("UpgradeVersion") != m.end() && !m["UpgradeVersion"].empty()) {
      upgradeVersion = make_shared<string>(boost::any_cast<string>(m["UpgradeVersion"]));
    }
  }


  virtual ~UpgradeClusterRequest() = default;
};
class UpgradeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpgradeClusterResponseBody() {}

  explicit UpgradeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpgradeClusterResponseBody() = default;
};
class UpgradeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeClusterResponseBody> body{};

  UpgradeClusterResponse() {}

  explicit UpgradeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeClusterResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AddAuthResourceResponse addAuthResourceWithOptions(shared_ptr<AddAuthResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddAuthResourceResponse addAuthResource(shared_ptr<AddAuthResourceRequest> request);
  AddBlackWhiteListResponse addBlackWhiteListWithOptions(shared_ptr<AddBlackWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBlackWhiteListResponse addBlackWhiteList(shared_ptr<AddBlackWhiteListRequest> request);
  AddGatewayResponse addGatewayWithOptions(shared_ptr<AddGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGatewayResponse addGateway(shared_ptr<AddGatewayRequest> request);
  AddGatewayDomainResponse addGatewayDomainWithOptions(shared_ptr<AddGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGatewayDomainResponse addGatewayDomain(shared_ptr<AddGatewayDomainRequest> request);
  AddGatewayServiceVersionResponse addGatewayServiceVersionWithOptions(shared_ptr<AddGatewayServiceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGatewayServiceVersionResponse addGatewayServiceVersion(shared_ptr<AddGatewayServiceVersionRequest> request);
  AddGatewaySlbResponse addGatewaySlbWithOptions(shared_ptr<AddGatewaySlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGatewaySlbResponse addGatewaySlb(shared_ptr<AddGatewaySlbRequest> request);
  AddMockRuleResponse addMockRuleWithOptions(shared_ptr<AddMockRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMockRuleResponse addMockRule(shared_ptr<AddMockRuleRequest> request);
  AddSSLCertResponse addSSLCertWithOptions(shared_ptr<AddSSLCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSSLCertResponse addSSLCert(shared_ptr<AddSSLCertRequest> request);
  AddServiceSourceResponse addServiceSourceWithOptions(shared_ptr<AddServiceSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddServiceSourceResponse addServiceSource(shared_ptr<AddServiceSourceRequest> request);
  CloneNacosConfigResponse cloneNacosConfigWithOptions(shared_ptr<CloneNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneNacosConfigResponse cloneNacosConfig(shared_ptr<CloneNacosConfigRequest> request);
  CreateAlarmRuleResponse createAlarmRuleWithOptions(shared_ptr<CreateAlarmRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlarmRuleResponse createAlarmRule(shared_ptr<CreateAlarmRuleRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateEngineNamespaceResponse createEngineNamespaceWithOptions(shared_ptr<CreateEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEngineNamespaceResponse createEngineNamespace(shared_ptr<CreateEngineNamespaceRequest> request);
  CreateNacosConfigResponse createNacosConfigWithOptions(shared_ptr<CreateNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNacosConfigResponse createNacosConfig(shared_ptr<CreateNacosConfigRequest> request);
  CreateNacosInstanceResponse createNacosInstanceWithOptions(shared_ptr<CreateNacosInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNacosInstanceResponse createNacosInstance(shared_ptr<CreateNacosInstanceRequest> request);
  CreateNacosServiceResponse createNacosServiceWithOptions(shared_ptr<CreateNacosServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNacosServiceResponse createNacosService(shared_ptr<CreateNacosServiceRequest> request);
  CreateZnodeResponse createZnodeWithOptions(shared_ptr<CreateZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateZnodeResponse createZnode(shared_ptr<CreateZnodeRequest> request);
  DeleteAlarmRuleResponse deleteAlarmRuleWithOptions(shared_ptr<DeleteAlarmRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlarmRuleResponse deleteAlarmRule(shared_ptr<DeleteAlarmRuleRequest> request);
  DeleteAuthResourceResponse deleteAuthResourceWithOptions(shared_ptr<DeleteAuthResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAuthResourceResponse deleteAuthResource(shared_ptr<DeleteAuthResourceRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteEngineNamespaceResponse deleteEngineNamespaceWithOptions(shared_ptr<DeleteEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEngineNamespaceResponse deleteEngineNamespace(shared_ptr<DeleteEngineNamespaceRequest> request);
  DeleteGatewayResponse deleteGatewayWithOptions(shared_ptr<DeleteGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayResponse deleteGateway(shared_ptr<DeleteGatewayRequest> request);
  DeleteGatewayDomainResponse deleteGatewayDomainWithOptions(shared_ptr<DeleteGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayDomainResponse deleteGatewayDomain(shared_ptr<DeleteGatewayDomainRequest> request);
  DeleteGatewayServiceVersionResponse deleteGatewayServiceVersionWithOptions(shared_ptr<DeleteGatewayServiceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayServiceVersionResponse deleteGatewayServiceVersion(shared_ptr<DeleteGatewayServiceVersionRequest> request);
  DeleteGatewaySlbResponse deleteGatewaySlbWithOptions(shared_ptr<DeleteGatewaySlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewaySlbResponse deleteGatewaySlb(shared_ptr<DeleteGatewaySlbRequest> request);
  DeleteNacosConfigResponse deleteNacosConfigWithOptions(shared_ptr<DeleteNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNacosConfigResponse deleteNacosConfig(shared_ptr<DeleteNacosConfigRequest> request);
  DeleteNacosConfigsResponse deleteNacosConfigsWithOptions(shared_ptr<DeleteNacosConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNacosConfigsResponse deleteNacosConfigs(shared_ptr<DeleteNacosConfigsRequest> request);
  DeleteNacosServiceResponse deleteNacosServiceWithOptions(shared_ptr<DeleteNacosServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNacosServiceResponse deleteNacosService(shared_ptr<DeleteNacosServiceRequest> request);
  DeleteServiceSourceResponse deleteServiceSourceWithOptions(shared_ptr<DeleteServiceSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceSourceResponse deleteServiceSource(shared_ptr<DeleteServiceSourceRequest> request);
  DeleteZnodeResponse deleteZnodeWithOptions(shared_ptr<DeleteZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteZnodeResponse deleteZnode(shared_ptr<DeleteZnodeRequest> request);
  ExportNacosConfigResponse exportNacosConfigWithOptions(shared_ptr<ExportNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportNacosConfigResponse exportNacosConfig(shared_ptr<ExportNacosConfigRequest> request);
  GetBlackWhiteListResponse getBlackWhiteListWithOptions(shared_ptr<GetBlackWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBlackWhiteListResponse getBlackWhiteList(shared_ptr<GetBlackWhiteListRequest> request);
  GetEngineNamepaceResponse getEngineNamepaceWithOptions(shared_ptr<GetEngineNamepaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEngineNamepaceResponse getEngineNamepace(shared_ptr<GetEngineNamepaceRequest> request);
  GetGatewayResponse getGatewayWithOptions(shared_ptr<GetGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayResponse getGateway(shared_ptr<GetGatewayRequest> request);
  GetGatewayDomainDetailResponse getGatewayDomainDetailWithOptions(shared_ptr<GetGatewayDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayDomainDetailResponse getGatewayDomainDetail(shared_ptr<GetGatewayDomainDetailRequest> request);
  GetGatewayOptionResponse getGatewayOptionWithOptions(shared_ptr<GetGatewayOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayOptionResponse getGatewayOption(shared_ptr<GetGatewayOptionRequest> request);
  GetGatewayServiceDetailResponse getGatewayServiceDetailWithOptions(shared_ptr<GetGatewayServiceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayServiceDetailResponse getGatewayServiceDetail(shared_ptr<GetGatewayServiceDetailRequest> request);
  GetGovernanceKubernetesClusterResponse getGovernanceKubernetesClusterWithOptions(shared_ptr<GetGovernanceKubernetesClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGovernanceKubernetesClusterResponse getGovernanceKubernetesCluster(shared_ptr<GetGovernanceKubernetesClusterRequest> request);
  GetGovernanceKubernetesClusterListResponse getGovernanceKubernetesClusterListWithOptions(shared_ptr<GetGovernanceKubernetesClusterListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGovernanceKubernetesClusterListResponse getGovernanceKubernetesClusterList(shared_ptr<GetGovernanceKubernetesClusterListRequest> request);
  GetImageResponse getImageWithOptions(shared_ptr<GetImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageResponse getImage(shared_ptr<GetImageRequest> request);
  GetImportFileUrlResponse getImportFileUrlWithOptions(shared_ptr<GetImportFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImportFileUrlResponse getImportFileUrl(shared_ptr<GetImportFileUrlRequest> request);
  GetKubernetesSourceResponse getKubernetesSourceWithOptions(shared_ptr<GetKubernetesSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKubernetesSourceResponse getKubernetesSource(shared_ptr<GetKubernetesSourceRequest> request);
  GetMseFeatureSwitchResponse getMseFeatureSwitchWithOptions(shared_ptr<GetMseFeatureSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMseFeatureSwitchResponse getMseFeatureSwitch(shared_ptr<GetMseFeatureSwitchRequest> request);
  GetMseSourceResponse getMseSourceWithOptions(shared_ptr<GetMseSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMseSourceResponse getMseSource(shared_ptr<GetMseSourceRequest> request);
  GetNacosConfigResponse getNacosConfigWithOptions(shared_ptr<GetNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNacosConfigResponse getNacosConfig(shared_ptr<GetNacosConfigRequest> request);
  GetNacosHistoryConfigResponse getNacosHistoryConfigWithOptions(shared_ptr<GetNacosHistoryConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNacosHistoryConfigResponse getNacosHistoryConfig(shared_ptr<GetNacosHistoryConfigRequest> request);
  GetOverviewResponse getOverviewWithOptions(shared_ptr<GetOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOverviewResponse getOverview(shared_ptr<GetOverviewRequest> request);
  ImportNacosConfigResponse importNacosConfigWithOptions(shared_ptr<ImportNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportNacosConfigResponse importNacosConfig(shared_ptr<ImportNacosConfigRequest> request);
  ImportServicesResponse importServicesWithOptions(shared_ptr<ImportServicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportServicesResponse importServices(shared_ptr<ImportServicesRequest> request);
  ListAlarmContactGroupsResponse listAlarmContactGroupsWithOptions(shared_ptr<ListAlarmContactGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmContactGroupsResponse listAlarmContactGroups(shared_ptr<ListAlarmContactGroupsRequest> request);
  ListAlarmHistoriesResponse listAlarmHistoriesWithOptions(shared_ptr<ListAlarmHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmHistoriesResponse listAlarmHistories(shared_ptr<ListAlarmHistoriesRequest> request);
  ListAlarmItemsResponse listAlarmItemsWithOptions(shared_ptr<ListAlarmItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmItemsResponse listAlarmItems(shared_ptr<ListAlarmItemsRequest> request);
  ListAlarmRulesResponse listAlarmRulesWithOptions(shared_ptr<ListAlarmRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmRulesResponse listAlarmRules(shared_ptr<ListAlarmRulesRequest> request);
  ListAnsInstancesResponse listAnsInstancesWithOptions(shared_ptr<ListAnsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnsInstancesResponse listAnsInstances(shared_ptr<ListAnsInstancesRequest> request);
  ListAnsServiceClustersResponse listAnsServiceClustersWithOptions(shared_ptr<ListAnsServiceClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnsServiceClustersResponse listAnsServiceClusters(shared_ptr<ListAnsServiceClustersRequest> request);
  ListAnsServicesResponse listAnsServicesWithOptions(shared_ptr<ListAnsServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnsServicesResponse listAnsServices(shared_ptr<ListAnsServicesRequest> request);
  ListClusterConnectionTypesResponse listClusterConnectionTypesWithOptions(shared_ptr<ListClusterConnectionTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterConnectionTypesResponse listClusterConnectionTypes(shared_ptr<ListClusterConnectionTypesRequest> request);
  ListClusterTypesResponse listClusterTypesWithOptions(shared_ptr<ListClusterTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterTypesResponse listClusterTypes(shared_ptr<ListClusterTypesRequest> request);
  ListClusterVersionsResponse listClusterVersionsWithOptions(shared_ptr<ListClusterVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterVersionsResponse listClusterVersions(shared_ptr<ListClusterVersionsRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListEngineNamespacesResponse listEngineNamespacesWithOptions(shared_ptr<ListEngineNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEngineNamespacesResponse listEngineNamespaces(shared_ptr<ListEngineNamespacesRequest> request);
  ListEurekaInstancesResponse listEurekaInstancesWithOptions(shared_ptr<ListEurekaInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEurekaInstancesResponse listEurekaInstances(shared_ptr<ListEurekaInstancesRequest> request);
  ListEurekaServicesResponse listEurekaServicesWithOptions(shared_ptr<ListEurekaServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEurekaServicesResponse listEurekaServices(shared_ptr<ListEurekaServicesRequest> request);
  ListGatewayResponse listGatewayWithOptions(shared_ptr<ListGatewayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayResponse listGateway(shared_ptr<ListGatewayRequest> request);
  ListGatewayDomainResponse listGatewayDomainWithOptions(shared_ptr<ListGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayDomainResponse listGatewayDomain(shared_ptr<ListGatewayDomainRequest> request);
  ListGatewayServiceResponse listGatewayServiceWithOptions(shared_ptr<ListGatewayServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayServiceResponse listGatewayService(shared_ptr<ListGatewayServiceRequest> request);
  ListGatewaySlbResponse listGatewaySlbWithOptions(shared_ptr<ListGatewaySlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewaySlbResponse listGatewaySlb(shared_ptr<ListGatewaySlbRequest> request);
  ListListenersByConfigResponse listListenersByConfigWithOptions(shared_ptr<ListListenersByConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersByConfigResponse listListenersByConfig(shared_ptr<ListListenersByConfigRequest> request);
  ListListenersByIpResponse listListenersByIpWithOptions(shared_ptr<ListListenersByIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersByIpResponse listListenersByIp(shared_ptr<ListListenersByIpRequest> request);
  ListNacosConfigsResponse listNacosConfigsWithOptions(shared_ptr<ListNacosConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNacosConfigsResponse listNacosConfigs(shared_ptr<ListNacosConfigsRequest> request);
  ListNacosHistoryConfigsResponse listNacosHistoryConfigsWithOptions(shared_ptr<ListNacosHistoryConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNacosHistoryConfigsResponse listNacosHistoryConfigs(shared_ptr<ListNacosHistoryConfigsRequest> request);
  ListSSLCertResponse listSSLCertWithOptions(shared_ptr<ListSSLCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSSLCertResponse listSSLCert(shared_ptr<ListSSLCertRequest> request);
  ListServiceSourceResponse listServiceSourceWithOptions(shared_ptr<ListServiceSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceSourceResponse listServiceSource(shared_ptr<ListServiceSourceRequest> request);
  ListZnodeChildrenResponse listZnodeChildrenWithOptions(shared_ptr<ListZnodeChildrenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListZnodeChildrenResponse listZnodeChildren(shared_ptr<ListZnodeChildrenRequest> request);
  ModifyGovernanceKubernetesClusterResponse modifyGovernanceKubernetesClusterWithOptions(shared_ptr<ModifyGovernanceKubernetesClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGovernanceKubernetesClusterResponse modifyGovernanceKubernetesCluster(shared_ptr<ModifyGovernanceKubernetesClusterRequest> request);
  PullServicesResponse pullServicesWithOptions(shared_ptr<PullServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PullServicesResponse pullServices(shared_ptr<PullServicesRequest> request);
  QueryBusinessLocationsResponse queryBusinessLocationsWithOptions(shared_ptr<QueryBusinessLocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBusinessLocationsResponse queryBusinessLocations(shared_ptr<QueryBusinessLocationsRequest> request);
  QueryClusterDetailResponse queryClusterDetailWithOptions(shared_ptr<QueryClusterDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryClusterDetailResponse queryClusterDetail(shared_ptr<QueryClusterDetailRequest> request);
  QueryClusterDiskSpecificationResponse queryClusterDiskSpecificationWithOptions(shared_ptr<QueryClusterDiskSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryClusterDiskSpecificationResponse queryClusterDiskSpecification(shared_ptr<QueryClusterDiskSpecificationRequest> request);
  QueryClusterSpecificationResponse queryClusterSpecificationWithOptions(shared_ptr<QueryClusterSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryClusterSpecificationResponse queryClusterSpecification(shared_ptr<QueryClusterSpecificationRequest> request);
  QueryConfigResponse queryConfigWithOptions(shared_ptr<QueryConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryConfigResponse queryConfig(shared_ptr<QueryConfigRequest> request);
  QueryGatewayRegionResponse queryGatewayRegionWithOptions(shared_ptr<QueryGatewayRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGatewayRegionResponse queryGatewayRegion(shared_ptr<QueryGatewayRegionRequest> request);
  QueryGatewayTypeResponse queryGatewayTypeWithOptions(shared_ptr<QueryGatewayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGatewayTypeResponse queryGatewayType(shared_ptr<QueryGatewayTypeRequest> request);
  QueryGovernanceKubernetesClusterResponse queryGovernanceKubernetesClusterWithOptions(shared_ptr<QueryGovernanceKubernetesClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGovernanceKubernetesClusterResponse queryGovernanceKubernetesCluster(shared_ptr<QueryGovernanceKubernetesClusterRequest> request);
  QueryMonitorResponse queryMonitorWithOptions(shared_ptr<QueryMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMonitorResponse queryMonitor(shared_ptr<QueryMonitorRequest> request);
  QuerySlbSpecResponse querySlbSpecWithOptions(shared_ptr<QuerySlbSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySlbSpecResponse querySlbSpec(shared_ptr<QuerySlbSpecRequest> request);
  QueryZnodeDetailResponse queryZnodeDetailWithOptions(shared_ptr<QueryZnodeDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryZnodeDetailResponse queryZnodeDetail(shared_ptr<QueryZnodeDetailRequest> request);
  RestartClusterResponse restartClusterWithOptions(shared_ptr<RestartClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartClusterResponse restartCluster(shared_ptr<RestartClusterRequest> request);
  RetryClusterResponse retryClusterWithOptions(shared_ptr<RetryClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryClusterResponse retryCluster(shared_ptr<RetryClusterRequest> request);
  ScalingClusterResponse scalingClusterWithOptions(shared_ptr<ScalingClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScalingClusterResponse scalingCluster(shared_ptr<ScalingClusterRequest> request);
  SelectGatewaySlbResponse selectGatewaySlbWithOptions(shared_ptr<SelectGatewaySlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SelectGatewaySlbResponse selectGatewaySlb(shared_ptr<SelectGatewaySlbRequest> request);
  UpdateAclResponse updateAclWithOptions(shared_ptr<UpdateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAclResponse updateAcl(shared_ptr<UpdateAclRequest> request);
  UpdateBlackWhiteListResponse updateBlackWhiteListWithOptions(shared_ptr<UpdateBlackWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBlackWhiteListResponse updateBlackWhiteList(shared_ptr<UpdateBlackWhiteListRequest> request);
  UpdateClusterResponse updateClusterWithOptions(shared_ptr<UpdateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClusterResponse updateCluster(shared_ptr<UpdateClusterRequest> request);
  UpdateConfigResponse updateConfigWithOptions(shared_ptr<UpdateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigResponse updateConfig(shared_ptr<UpdateConfigRequest> request);
  UpdateEngineNamespaceResponse updateEngineNamespaceWithOptions(shared_ptr<UpdateEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEngineNamespaceResponse updateEngineNamespace(shared_ptr<UpdateEngineNamespaceRequest> request);
  UpdateGatewayDomainResponse updateGatewayDomainWithOptions(shared_ptr<UpdateGatewayDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayDomainResponse updateGatewayDomain(shared_ptr<UpdateGatewayDomainRequest> request);
  UpdateGatewayNameResponse updateGatewayNameWithOptions(shared_ptr<UpdateGatewayNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayNameResponse updateGatewayName(shared_ptr<UpdateGatewayNameRequest> request);
  UpdateGatewayOptionResponse updateGatewayOptionWithOptions(shared_ptr<UpdateGatewayOptionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayOptionResponse updateGatewayOption(shared_ptr<UpdateGatewayOptionRequest> request);
  UpdateGatewayRouteHTTPRewriteResponse updateGatewayRouteHTTPRewriteWithOptions(shared_ptr<UpdateGatewayRouteHTTPRewriteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayRouteHTTPRewriteResponse updateGatewayRouteHTTPRewrite(shared_ptr<UpdateGatewayRouteHTTPRewriteRequest> request);
  UpdateGatewayServiceVersionResponse updateGatewayServiceVersionWithOptions(shared_ptr<UpdateGatewayServiceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayServiceVersionResponse updateGatewayServiceVersion(shared_ptr<UpdateGatewayServiceVersionRequest> request);
  UpdateImageResponse updateImageWithOptions(shared_ptr<UpdateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageResponse updateImage(shared_ptr<UpdateImageRequest> request);
  UpdateNacosClusterResponse updateNacosClusterWithOptions(shared_ptr<UpdateNacosClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNacosClusterResponse updateNacosCluster(shared_ptr<UpdateNacosClusterRequest> request);
  UpdateNacosConfigResponse updateNacosConfigWithOptions(shared_ptr<UpdateNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNacosConfigResponse updateNacosConfig(shared_ptr<UpdateNacosConfigRequest> request);
  UpdateNacosInstanceResponse updateNacosInstanceWithOptions(shared_ptr<UpdateNacosInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNacosInstanceResponse updateNacosInstance(shared_ptr<UpdateNacosInstanceRequest> request);
  UpdateNacosServiceResponse updateNacosServiceWithOptions(shared_ptr<UpdateNacosServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNacosServiceResponse updateNacosService(shared_ptr<UpdateNacosServiceRequest> request);
  UpdateSSLCertResponse updateSSLCertWithOptions(shared_ptr<UpdateSSLCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSSLCertResponse updateSSLCert(shared_ptr<UpdateSSLCertRequest> request);
  UpdateZnodeResponse updateZnodeWithOptions(shared_ptr<UpdateZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateZnodeResponse updateZnode(shared_ptr<UpdateZnodeRequest> request);
  UpgradeClusterResponse upgradeClusterWithOptions(shared_ptr<UpgradeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClusterResponse upgradeCluster(shared_ptr<UpgradeClusterRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mse20190531

#endif
