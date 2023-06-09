/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include "fboss/agent/platforms/sai/SaiTajoPlatform.h"

namespace facebook::fboss {

class YubaAsic;

class SaiMorgan800ccPlatform : public SaiTajoPlatform {
 public:
  explicit SaiMorgan800ccPlatform(
      std::unique_ptr<PlatformProductInfo> productInfo,
      folly::MacAddress localMac,
      const std::string& platformMappingStr);
  ~SaiMorgan800ccPlatform() override;
  std::string getHwConfig() override;
  HwAsic* getAsic() const override;
  bool isSerdesApiSupported() const override {
    return false;
  }

 private:
  void setupAsic(
      cfg::SwitchType switchType,
      std::optional<int64_t> switchId,
      std::optional<cfg::Range64> systemPortRange,
      folly::MacAddress& mac) override;
  std::unique_ptr<YubaAsic> asic_;
};

} // namespace facebook::fboss