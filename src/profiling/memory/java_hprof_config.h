/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*******************************************************************************
 * AUTOGENERATED - DO NOT EDIT
 *******************************************************************************
 * This file has been generated from the protobuf message
 * protos/perfetto/config/profiling/java_hprof_config.proto
 * by
 * ../../tools/proto_to_cpp/proto_to_cpp.cc.
 * If you need to make changes here, change the .proto file and then run
 * ./tools/gen_tracing_cpp_headers_from_protos
 */

#ifndef SRC_PROFILING_MEMORY_JAVA_HPROF_CONFIG_H_
#define SRC_PROFILING_MEMORY_JAVA_HPROF_CONFIG_H_

#include <stdint.h>
#include <string>
#include <type_traits>
#include <vector>

#include "perfetto/base/copyable_ptr.h"
#include "perfetto/base/export.h"

// Forward declarations for protobuf types.
namespace perfetto {
namespace protos {
class JavaHprofConfig;
class JavaHprofConfig_ContinuousDumpConfig;
}  // namespace protos
}  // namespace perfetto

namespace perfetto {
class JavaHprofConfig;

class PERFETTO_EXPORT JavaHprofConfig {
 public:
  class PERFETTO_EXPORT ContinuousDumpConfig {
   public:
    ContinuousDumpConfig();
    ~ContinuousDumpConfig();
    ContinuousDumpConfig(ContinuousDumpConfig&&) noexcept;
    ContinuousDumpConfig& operator=(ContinuousDumpConfig&&);
    ContinuousDumpConfig(const ContinuousDumpConfig&);
    ContinuousDumpConfig& operator=(const ContinuousDumpConfig&);
    bool operator==(const ContinuousDumpConfig&) const;
    bool operator!=(const ContinuousDumpConfig& other) const {
      return !(*this == other);
    }

    // Raw proto decoding.
    void ParseRawProto(const std::string&);
    // Conversion methods from/to the corresponding protobuf types.
    void FromProto(
        const perfetto::protos::JavaHprofConfig_ContinuousDumpConfig&);
    void ToProto(perfetto::protos::JavaHprofConfig_ContinuousDumpConfig*) const;

    uint32_t dump_phase_ms() const { return dump_phase_ms_; }
    void set_dump_phase_ms(uint32_t value) { dump_phase_ms_ = value; }

    uint32_t dump_interval_ms() const { return dump_interval_ms_; }
    void set_dump_interval_ms(uint32_t value) { dump_interval_ms_ = value; }

   private:
    uint32_t dump_phase_ms_{};
    uint32_t dump_interval_ms_{};

    // Allows to preserve unknown protobuf fields for compatibility
    // with future versions of .proto files.
    std::string unknown_fields_;
  };

  JavaHprofConfig();
  ~JavaHprofConfig();
  JavaHprofConfig(JavaHprofConfig&&) noexcept;
  JavaHprofConfig& operator=(JavaHprofConfig&&);
  JavaHprofConfig(const JavaHprofConfig&);
  JavaHprofConfig& operator=(const JavaHprofConfig&);
  bool operator==(const JavaHprofConfig&) const;
  bool operator!=(const JavaHprofConfig& other) const {
    return !(*this == other);
  }

  // Raw proto decoding.
  void ParseRawProto(const std::string&);
  // Conversion methods from/to the corresponding protobuf types.
  void FromProto(const perfetto::protos::JavaHprofConfig&);
  void ToProto(perfetto::protos::JavaHprofConfig*) const;

  int process_cmdline_size() const {
    return static_cast<int>(process_cmdline_.size());
  }
  const std::vector<std::string>& process_cmdline() const {
    return process_cmdline_;
  }
  std::vector<std::string>* mutable_process_cmdline() {
    return &process_cmdline_;
  }
  void clear_process_cmdline() { process_cmdline_.clear(); }
  std::string* add_process_cmdline() {
    process_cmdline_.emplace_back();
    return &process_cmdline_.back();
  }

  int pid_size() const { return static_cast<int>(pid_.size()); }
  const std::vector<uint64_t>& pid() const { return pid_; }
  std::vector<uint64_t>* mutable_pid() { return &pid_; }
  void clear_pid() { pid_.clear(); }
  uint64_t* add_pid() {
    pid_.emplace_back();
    return &pid_.back();
  }

  const ContinuousDumpConfig& continuous_dump_config() const {
    return *continuous_dump_config_;
  }
  ContinuousDumpConfig* mutable_continuous_dump_config() {
    return continuous_dump_config_.get();
  }

 private:
  std::vector<std::string> process_cmdline_;
  std::vector<uint64_t> pid_;
  ::perfetto::base::CopyablePtr<ContinuousDumpConfig> continuous_dump_config_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;
};

}  // namespace perfetto

#endif  // SRC_PROFILING_MEMORY_JAVA_HPROF_CONFIG_H_
