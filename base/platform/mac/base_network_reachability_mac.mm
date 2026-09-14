// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#include "base/platform/base_platform_network_reachability.h"

namespace base::Platform {

std::unique_ptr<NetworkReachability> NetworkReachability::Create() {
	return nullptr;
}

} // namespace base::Platform
