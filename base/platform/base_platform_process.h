// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include "base/basic_types.h"

#include <QtGui/QWindow>

namespace base::Platform {

void ActivateProcessWindow(int64 pid, WId windowId);
void ActivateThisProcessWindow(WId windowId);

} // namespace base::Platform
